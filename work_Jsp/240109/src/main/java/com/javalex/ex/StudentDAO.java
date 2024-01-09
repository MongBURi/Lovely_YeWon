package com.javalex.ex;

// 추가 
import java.sql.*;
import java.util.*;		// ArrayList<> 사용 위해

public class StudentDAO {
	// DB 서버 url, 아이디, 비밀번호 선언
	private String url="jdbc:mysql://localhost:3306/apidb";
	private String id = "root";
	private String passwd = "1234";
	
	// DB와 연결하기 위해 필요한 객체 선언
	private Connection conn = null;
	private Statement st = null;
	private ResultSet rs = null;
	
	// 생성자
	public StudentDAO() {
		try {
			// JDBC 드라이버 로드.(lib폴더 안의 jar파일 불러옴)
			Class.forName("com.mysql.jdbc.Driver");
		}
		catch (Exception e) {
			System.out.println("드라이버 로드 실패!");
		}
	}
	
	// 메소드
	public ArrayList<String> showAllStudent() {
		// 메소드 반환값으로 할 연결 리스트 선언
		ArrayList<String> result = new ArrayList<String> ();
		
		// DB에 접속
		try {
			conn = DriverManager.getConnection(url, id, passwd);
			st = conn.createStatement();
			String query = "SELECT * FROM student";	// 실행할 쿼리문 작성
			rs = st.executeQuery(query);
			
			while (rs.next()) {				
				int sHakbun = rs.getInt("hakbun");
	            String sName = rs.getString("name");
	            int sAge = rs.getInt("age");
	            int sGrade = rs.getInt("grade");
	            String sMajor = rs.getString("major");

	            // 결과를 문자열로 만들어 ArrayList에 추가	            
	            String studentInfo = sHakbun + ", " + sName + ", " + sAge + ", " + sGrade + ", " + sMajor;
	            result.add(studentInfo);
			}
			
		}
		catch (Exception e) {
			System.out.println("DB 접속 실패!");
			e.printStackTrace();
		}
		
		// DB 정보들을 result에 하나씩 담기
		
		return result;
	}
	
}
