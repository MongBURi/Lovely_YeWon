<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>240116_11시_프론트 컨트롤러</title>
</head>
<body>
	<a href="insert.do">insert</a>
	<a href="delete.do">delete</a>
	<a href="update.do">update</a>	
	<br><hr>
	
	<!-- 방법1 -->
	<a href="http://localhost:8181<%=request.getContextPath()%>/test.do">test.do</a>
	<!-- 방법1 생략 -->
	<a href="<%=request.getContextPath()%>/test2.do">test2.do</a>
	
	<!-- 방법2 -->
	<a href="http://localhost:8181/<%=request.getContextPath()%>/frontController/abc.do">abc.do</a>
	
</body>
</html>