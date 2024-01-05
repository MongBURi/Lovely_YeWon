<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>240105_12시_연습문제1 풀이(2/4)</title>
</head>
<body>
	<!-- jsp 파일 3개 필요 :: kid.jsp, adult.jsp, if.jsp -->
	<!-- 나이의 값에 따라 어느 페이지로 이동할건지 if.jsp에서 결정 -->
	
	<%
		int age = Integer.parseInt(request.getParameter("age"));
	
	if (age < 20) {		// 20세 미만 :: kid.jsp로 이동
		// sendRedirect() :: form의 action 역할 (response 객체를 통해야 한다)
		response.sendRedirect("240105_2_Ex1_kid.jsp");		
	}
	else {		// adult.jsp로 이동
		response.sendRedirect("240105_2_Ex1_adult.jsp");
	}
	%>

</body>
</html>