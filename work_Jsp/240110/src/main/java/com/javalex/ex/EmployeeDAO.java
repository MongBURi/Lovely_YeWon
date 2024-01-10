package com.javalex.ex;

// 객체 선언을 위한 추가
import java.sql.*;

public class EmployeeDAO {
	// DB 접속에 필요한 정보
	private String url = "jdbc:mysql://localhost:3306/apidb";
	private String id = "root";
	private String pw = "1234";
	
	// DB 연동에 필요한 객체 선언(4가지)
	private Connection conn = null;
	private Statement st = null;
	private ResultSet rs = null;
	private PreparedStatement ps = null;	// 동적 SQL문 작성에 필요한 객체	
	// ex) HTML에 "입력값1"이 있고,(양식에 입력값을 넣고 싶을 때)
	// "SELECT * FROM employee WHERE id = 입력값1"
	
	// 생성자 :: JDBC 드라이버 로드
	public EmployeeDAO() {
		try {
			Class.forName("com.mysql.jdbc.Driver");
		} catch (Exception e) {
			System.out.println("JDBC 드라이버 로드 실패");
		}
	}
	
	// 메소드1
	// employee DB :: 아이디, 비밀번호, 이름
	// 예상할 수 있는 필요한 기능 ::
	// DB에 저장된 아이디/비번 중에, 입력으로 받은 아이디/비번이 있는지
	public Boolean check_Account(String input_id, String input_pw) {
		// DB 내용은 DAO 자체에서 접근할 수 있는 상태
		// 대신 HTML에서 입력받은 값은, 매개변수로 받아올 필요가 있따
		
		try {
			// 1. DB 접속(Connection)
			conn = DriverManager.getConnection(url, id, pw);
			
			// 2. SQL문 작성
			String query = "SELECT * FROM employee WHERE id = ? && passwd = ?";
				// "SELECT * FROM employee" :: 모든 사원 정보 조회
				// "DB에 있는 id-passwd 쌍 중에서"
				// input_id와 input_pw 쌍과 동일한 데이터만 조회하면 된다
			
			// ?를 채우는 데 PreparedStatement가 쓰인다
			ps = conn.prepareStatement(query);	// ps 객체 초기화(사용할 쿼리문 미리 적용)
			ps.setString(1, input_id);	// 첫 번째 ?에 input_id값을 삽입한다
			ps.setString(2, input_pw);
				// C에서 "printf(%d %d, a, b);" 했던 것처럼 순서대로 들어감
			
			rs = ps.executeQuery();		// SQL문 실행 결과 담기
			
			// 로그인에 성공했다면, rs에 값이 있을 것 → rs.next()로 값이 조회가 될 것
			// 로그인에 실패했다면, rs에 값이 없을 것 → rs.next()로 값이 조회가 안 될 것(적절한 값이 없음)
			if (rs.next()) {	// rs에 값이 있따면,
				return true;
			}
			else {
				return false;	// DB에 회원정보가 없을 경우의 return
			}			
		} catch (Exception e) {
			System.out.println("check_Account 메소드 에러");
			return false;	// 반환형이 있기 때문에, return문 작성은 해야 한다(로그인 실패)
		}
		
	}
	
	// 메소드2 :: 로그인을 시도하는 계정의 사용자 이름을 반환
	public String getName(String input_id, String input_pw) {
		try {
			// DB 접근을 또 해야 됨
			conn = DriverManager.getConnection(url, id, pw);
			
			// DB에 있는 데이터 중,
			// HTML 파일에서 입력한 id와 pw가 같은 데이터의 "이름"만 추출
			// SQL문 작성
			String query = "SELECT * FROM employee WHERE id = ? && passwd = ?";
			ps = conn.prepareStatement(query);
			ps.setString(1, input_id);
			ps.setString(2, input_pw);
			rs = ps.executeQuery();
			
			// 반환활 값을 저장할 변수 name 선언.(임의의 값으로 초기화)
			String name = "none";			
			if (rs.next()) {	// rs에 데이터가 있다면, 
				name = rs.getString("name");	// 해당 데이터의 이름값을 가져옴
			}
			
			return name;			
		} catch (Exception e) {
			System.out.println("getName 메소드 에러");
			return "error";
		}
	}
	
}
