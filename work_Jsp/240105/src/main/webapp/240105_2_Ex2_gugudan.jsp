<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>240105_2시_연습문제2 풀이</title>
</head>
<body>
	<table border="1">
		<% String arr[] = {"X", "2", "3", "4", "5", "6", "7", "8", "9",}; %>
		
		<tr>	<!-- 몇 단인지 순차적으로 출력 -->
			<% for (int i = 0; i < 9; i++) { %>
				<th> <%= arr[i] %> </th>
			<%} %>
		</tr>
		
		<% for (int i = 1; i < 9; i++) { %>
		<tr>
			<% for (int j = 1; j <= 9; j++) { %>
				<td> <%= i * j %> </td>
			<%} %>
		</tr>
		<%} %>	
	</table>
</body>
</html>