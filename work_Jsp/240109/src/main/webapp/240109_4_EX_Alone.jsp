<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
    
<%@ page import="com.javalex.ex.StudentDAO" %>
<%@ page import="java.util.*" %>

<jsp:useBean id="student1" class="com.javalex.ex.StudentDAO" scope="page"/>

<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>240109_3시_연습문제</title>
</head>
<body>
	<%
    	StudentDAO dao = new StudentDAO();
		ArrayList<String> result = dao.showAllStudent();
	
    	// ArrayList에 담긴 학생 정보 출력
    	// 방법 1: for-each 문 사용
		// for (String studentInfo : result) {
		//     out.println("<p>" + studentInfo + "</p>");
		// }
		    	
		// 방법 2: 인덱스 사용
		for (int i = 0; i < result.size(); i++) {
   			out.println("<p>" + result.get(i) + "</p>");
		}
	%>
	
	<table border="1">
		<tr>
			<th>학번, 이름, 나이, 학년, 전공</th>
		</tr>
		<tr>
			<%
			for (int i = 0; i < result.size(); i++) {
		   		out.println("<td>" + result.get(i) + "</td>");
				}
			%>	
		</tr>	
	</table>
	
</body>
</html>