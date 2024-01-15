<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>240115_11시_EL태그2</title>
</head>
<body>
	<h1>회원 정보 출력</h1>
    <p>
    	이름: ${param.name}	<br>
    	나이: ${param.age}
    </p>    
    
    <jsp:useBean id="user1" class="com.javalex.ex.UserDTO" scope="page" />
    <!-- 원래 쓰던 방식
    <jsp:setProperty name="user1" property="name" value="결과값" /> -->
    <!-- EL태그 활용 방식 -->
    <jsp:setProperty name="user1" property="name" value="${param.name}" />
    <jsp:setProperty name="user1" property="age" value="${param.age}" />
    <!-- EL 태그를 활용하면, 자동으로 형변환이 된다. -->
    
    <h1>DTO 활용해서 출력</h1>
    <p>
    	이름: <jsp:getProperty name="user1" property="name" /><br>
    	나이: <jsp:getProperty name="user1" property="age" />
    </p>
    
</body>
</html>