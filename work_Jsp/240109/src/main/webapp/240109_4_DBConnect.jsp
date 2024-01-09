<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>

<!-- 추가 -->
<%@ page import="java.sql.*" %>

<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>240109_12시+2시_DB연동</title>
</head>
<body>
	<%
		// 데이터베이스 연동과 관련한 객체 선언(일단 null)
		Connection conn = null;		// JDBC 연결을 담당(jsp - 요놈 - DB)
		Statement stmt = null;		// SQL문 작성에 필요
		ResultSet rs = null;		// SQL문 실행 결과 저장
		
		String url = "jdbc:mysql://localhost:3306/apidb";
			// 어떤 DB 서버를 불러오는지 정의
			// "apidb" :: MYSQL 스키마 제일 위에 있는 서버 이름			
		String dbId = "root";
		String dbPwd = "1234";
			// 해당 DB 서버의 아이디와 비밀번호 주입
			
		try {	// "시도하다"
			// JDBC 드라이버 로드/불러온다.(lib폴더 안의 jar파일 불러옴)
			Class.forName("com.mysql.jdbc.Driver");
			
			// DB 서버 연결 시도
			conn = DriverManager.getConnection(url, dbId, dbPwd);
			// 접속이 잘 되었다면(성공했을 경우 출력)
			System.out.println("DB 연결 성-공");
			
			// 쿼리문 작성
			String query = "SELECT * FROM student";
			stmt = conn.createStatement();	// 여기서 Statement 객체 생성
			rs = stmt.executeQuery(query);	// 실행 결과 반환
		}
		catch (Exception error) {
			// DB 서버로 접속이 실패한다면, try문을 계속 실행하지 않고 catch문으로 이동
			out.println("연결에 실패했습니다.");
		}
	%>
	
	<!-- 결과물 출력 -->
	<h2>학생 정보 조회</h2>
	<table border="1">
		<tr>
			<th>학번</th>
			<th>이름</th>
			<th>나이</th>
			<th>학년</th>
			<th>전공</th>
		</tr>
		<% while (rs.next()) {		// select구문 결과가 있다면 계속 실행하겠다 %>
		<tr>
			<td><%=rs.getInt("hakbun") %></td>	<!-- 학번 칼럼이 Int형이라서 -->
			<td><%=rs.getString("name") %></td>
			<td><%=rs.getInt("age") %></td>
			<td><%=rs.getInt("grade") %></td>
			<td><%=rs.getString("major") %></td>
		</tr>
		<%} %>		
	</table>

</body>
</html>