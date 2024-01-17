package com.javalex.ex.DAO;

// 객체 4개 위한 import
import java.sql.*;
// DataSource 객체
import javax.sql.DataSource;

import com.javalex.ex.DTO.MemberDTO;

// Context
import java.util.*;
import javax.naming.*;

// 모델, 
public class MemberDAO {
	private Connection conn = null;
	private Statement st = null;
	private ResultSet rs = null;
	private PreparedStatement ps = null;
	
	private DataSource ds = null;
	
	// 생성자
	public MemberDAO() {
		try {
			// JDBC 드라이버 로드
			Context ctx = new InitialContext();
			ds = (DataSource)ctx.lookup("java:comp/env/jdbc/mysql");
				// "java:comp/env" :: 기본값
				// (DataSource) :: 데이터소스 타입에 맞게 반환			
		} catch (Exception e) {
			System.out.println("MemberDAO 생성자 에러");
			e.printStackTrace();
		}
	}
	
	// 메소드 :: 회원 정보 추가
	public void MemberInsert(String id, String pw, String name) {
		// 충돌 방지(ds를 제외한 모든 객체 :: 초기화하면 DB접속에 문제 발생)
		conn = null;
		ps = null;		
		
		try {
			// DB 접속
			conn = ds.getConnection();
						
			// Insert 구문 수행
			String query = "INSERT INTO member VALUES (?, ?, ?)";
			ps = conn.prepareStatement(query);
			ps.setString(1, id);
			ps.setString(2, pw);
			ps.setString(3, name);
			ps.executeUpdate();
			
		} catch (Exception e) {
			System.out.println("Insert 쿼리 수행 실패");
			e.printStackTrace();
		} finally {
			try {
				ps.close();
				conn.close();
			} catch(Exception e) {
				System.out.println("객체 닫기 실패");
				e.printStackTrace();
			}			
		}		
	}
	
	// 메소드 :: 회원 정보 삭제
	public void MemberDelete(String id) {
		conn = null;
		ps = null;		
		try {
			conn = ds.getConnection();			
			String query = "DELETE FROM member WHERE id = ?";
			ps = conn.prepareStatement(query);
			ps.setString(1, id);
			ps.executeUpdate();
			
		} catch (Exception e) {
			System.out.println("Delete 쿼리 수행 실패");
			e.printStackTrace();
		} finally {
			try {
				ps.close();
				conn.close();
			} catch(Exception e) {
				System.out.println("객체 닫기 실패");
				e.printStackTrace();
			}			
		}	
	}
	
	// 메소드 :: 회원 정보 전체 출력
	public ArrayList<MemberDTO> MemberSelect() {
		// 결과값 담을 배열
		ArrayList<MemberDTO> result = new ArrayList<MemberDTO> ();
		
		conn = null;
		st = null;
		rs = null;
				
		try {
			conn = ds.getConnection();
			
			String query = "SELECT * FROM Member";
			st = conn.createStatement();
			rs = st.executeQuery(query);
			
			while (rs.next()) {		// 결과값 하나씩 돎
				MemberDTO element = new MemberDTO();
				element.setId(rs.getString("id"));
				element.setPw(rs.getString("passwd"));
				element.setName(rs.getString("name"));
					// element 객체에 데이터 한 묶음씩 저장하기
				result.add(element);
			}			
		} catch (Exception e) {
			System.out.println("SELECT 쿼리 수행 실패");
			e.printStackTrace();
		} finally {
			try {
				conn.close();
				st.close();
				rs.close();
			} catch (Exception e) {
				System.out.println("객체 닫기 실패");
				e.printStackTrace();
			}
		}
		
		return result;
	}
	
}
