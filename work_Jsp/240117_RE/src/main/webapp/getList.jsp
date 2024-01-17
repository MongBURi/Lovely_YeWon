<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>

<!-- JSTL 사용시 필수 -->
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>

<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>240117_2시_회원정보 전체 출력</title>
</head>
<body>
	<table border="1">
		<tr>
			<th>아이디</th>
			<th>비밀번호</th>
			<th>이름</th>
		</tr>
		
		<!-- items :: 실질적인 값을 들고 옴 -->
		<c:forEach items="${list}" var="value">
			<!-- list :: DTO의 멤버 이름으로 값을 불러와야 한다-->
			<tr>
				<td>${value.id}</td>
				<td>${value.pw}</td>
				<td>${value.name}</td>
			</tr>
		</c:forEach>		
	</table>
	
	<a href="adminPage.html">뒤로가기</a>
	
</body>
</html>