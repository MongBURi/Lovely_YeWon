package com.javalex.ex;

// 추가
import java.sql.*;

import javax.sql.DataSource;
import javax.naming.InitialContext;
import javax.naming.Context;

// DB 연동을 위한 객체
public class UserDAO {
	private Connection conn = null;
	private Statement st = null;
	private ResultSet rs = null;
	private PreparedStatement ps = null;
	
	// DAO 생성자에서 드라이버 로드 → Class.forName()으로 불러옴
	// 각 메소드에서 url, id, pw와 conn을 통해서, DB에 접속함
		// → DB 접속에 시간이 많이 소요됨
	
	// 시간 절약을 위해서, DataSource 객체 사용
	private DataSource ds = null;
	
	// 생성자
	public UserDAO() {
		// JDBC 드라이버 로드
		try {
			// 해당 프로젝트의 컨텍스트 내용을 찾는 과정.(리소스를 찾음)
			Context ctx = new InitialContext();
			// 위 리소스로, DataSource 객체 초기화
			ds = (DataSource)ctx.lookup("java:comp/env/jdbc/mysql");
				// lookup("java:comp/env"); :: 기본값
				// (DataSource) :: DataSource타입으로 설정			
		} catch (Exception e) {
			System.out.println("UserDAO 생성자 에러");
			e.printStackTrace();
		}
		
	}
	
	// 메소드
	public void insertUser(String id, String pw, String name, int age, String gender) {
		// 메소드 실행 전 null값으로 만들어 충돌 방지
		conn = null;
		ps = null;
		
		try {
			// DataSource 객체 통해서 DB 접속
				// (서버에 있는 리소스로 즉시 접속을 시도하고 있음)
			conn = ds.getConnection();
			
			String query = "INSERT INTO user VALUES (?, ?, ?, ?, ?)";
			ps = conn.prepareStatement(query);
			// Insert 구문에서 칼럼 순서를 명시하지 않으면,
				// 테이블 생성시 칼럼 선언한 순서대로 삽입해야 한다.
			ps.setString(1, id);
			ps.setString(2, pw);
			ps.setString(3, name);
			ps.setInt(4, age);
			ps.setString(5, gender);
			ps.executeUpdate();
			
			System.out.println("회원가입이 성공했습니다.");
		} catch (Exception e) {
			System.out.println("insertUser 메소드 에러");
			e.printStackTrace();
		} finally {
			try {
				conn.close();
				ps.close();
			} catch (Exception e2) {
				System.out.println("객체 닫기 실패");
				e2.printStackTrace();
			}			
		}
	}

}
