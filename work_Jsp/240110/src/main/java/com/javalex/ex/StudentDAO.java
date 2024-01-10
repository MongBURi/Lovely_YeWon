// 추가(Connection, Statement, ResultSet 사용하기 위해)
package com.javalex.ex;


import java.sql.*;
import java.util.ArrayList;

public class StudentDAO {
	// DAO :: DB와 관련된 처리를 자비빈으로 따로 만들어서 처리
	// jdbc :: DB와의 연결을 돕는 도구
	
	// 데이터베이스 접속에 필요한 정보를 필드로 초기화 진행(고정값)
	private String url = "jdbc:mysql://localhost:3306/apidb";
	private String id = "root";
	private String pw = "1234";
	
	// 데이터베이스 사용에 필요한 객체 3가지
	private Connection conn = null;		// jdbc 연결 객체
	private Statement st = null;		// SQL문 실행 객체
	private ResultSet rs = null;		// SQL문 실행 결과 담는 객체
	
	// 생성자
	public StudentDAO() {
		try {	// "시도를 해본다"
			// jdbc 드라이버를 여기로 불러오기
			Class.forName("com.mysql.jdbc.Driver");
		}
		catch (Exception e) {	// try문에서 에러가 나면
			// 실행을 중답하고 catch문으로 옴
			System.out.println("JDBC 드라이버 연동 실패");
		}
	}
	
	// 메소드 :: DB 연동이 필요한 기능들을 아래의 메소드 형태로 나누어 작성
	public ArrayList<String> showAllStudent() {
		ArrayList<String> result = new ArrayList<String> ();
		
		try {
			// 데이터베이스 접속 시도
			conn = DriverManager.getConnection(url, id, pw);
			
			String query = "SELECT * FROM student";
			st = conn.createStatement();	// statement 객체 초기화(사용준비)
			rs = st.executeQuery(query);	// SQL문 실행 결과를 rs에 저장
			
			while (rs.next()) {		// 데이터 하나씩 탐색
				// 테이블 표 한 칸에 하나의 데이터의 모든 칼럼 정보가 들어가기 때문에
				// 아예 문자열 형태로 만들어서, ArrayList에 하나씩 저장
				String r = "";
				r += rs.getInt("hakbun");	// 학번 정보를 불러옴
				r += ", ";
				r += rs.getString("name");
				r += ", ";
				r += rs.getInt("age");
				r += ", ";
				r += rs.getInt("grade");
				r += ", ";
				r += rs.getString("major");
				// 여기까지 오게 되면, 문자열 r에는 5가지 칼럼의 정보가 모두 담기게 됨
				
				result.add(r);
			}
			
		} catch (Exception e) {
			System.out.println("showAllStudent 메소드 오류");
		}
		
		
		return result;
	}
	
}
