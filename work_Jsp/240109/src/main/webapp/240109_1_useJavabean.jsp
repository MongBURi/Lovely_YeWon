<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
    
<!--  com.javalex.ex 패키지 안에 있는 User 파일을 포함한다 -->
<%@ page import="com.javalex.ex.User" %>
    
<!-- 액션 태그 :: jsp 태그 중 일부 -->

<!-- jsp:useBean :: 객체 생성 -->
<!-- User.java를 통해서, user1 이라는 객체를 생성한다 -->
<jsp:useBean id="user1" class="com.javalex.ex.User" scope="page"/>
<!-- calss = "어떠한 클래스를 당겨올 것인가"/scope = "page(텍스트만 다룰 것이기에)" -->

<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>240109_9시_리뷰</title>
</head>
<body>
	<!-- setProperty, getProperty -->
	<%!	String id, pw, name, nickname;	%>
	<%
		id = request.getParameter("id");
		pw = request.getParameter("pw");
		name = request.getParameter("name");
		nickname = request.getParameter("nick");
	%>
	
	<!-- setProperty(멤버값 설정), getProperty(멤버값 반환) -->
	<jsp:setProperty name="user1" property="id" value="<%=id %>" />
	<jsp:setProperty name="user1" property="password" value="<%=pw %>" />
	<jsp:setProperty name="user1" property="name" value="<%=name %>" />
	<jsp:setProperty name="user1" property="nickname" value="<%=nickname %>" />
	
	<h3>계정 생성이 완료되었습니다.</h3>
	아이디 :: <jsp:getProperty name="user1" property="id" />	<br>
	비밀번호 :: <jsp:getProperty name="user1" property="password" />	<br>
	닉네임 :: <jsp:getProperty name="user1" property="nickname" />	<br>
	이름 :: <jsp:getProperty name="user1" property="name" />	<br>
	
	<form action="240109_1_inputUser.html">
		<input type="submit" value="회원가입 폼으로 돌아가기" />
	</form>
</body>
</html>