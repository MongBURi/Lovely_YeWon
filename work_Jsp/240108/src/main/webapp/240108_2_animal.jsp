<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
    
<!-- ↓↓↓ class파일과 HTML파일 위치가 달라서 아래의 작업을 거쳐야 한다 ↓↓↓ -->
<!-- import :: 외부 라이브러리를 포함한다 -->
<%@ page import="com.javalex.ex.Student" %>
    
<!-- 액션 태그 -->
<!-- usebean :: 특정 자바빈의 내용을 가져온다 -->
<jsp:useBean id="student1" class="com.javalex.ex.Student" scope="page"/>
	<!-- "com.javalex.ex"안에 클래스(Studnet)가 있어서 이렇게 적음 -->
<jsp:useBean id="student2" class="com.javalex.ex.Student" scope="page"/>
	<!-- 같은 자바빈 안에서 2개의 ~ 사용해도 무방하다 -->
	
<!-- setProperty :: 특정 필드의 값을 설정 -->
<jsp:setProperty name="student1" property="name" value="우뇽이" />
<jsp:setProperty name="student1" property="age" value="3" />
<jsp:setProperty name="student1" property="number" value="101" />
<jsp:setProperty name="student1" property="gender" value="알 수 없음" />

<!-- getProperty :: 특정 필드의 값을 반환 -->
    
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>240108_3시_연습문제 풀이(jsp)</title>
</head>
<body>
	<!-- getProperty :: 특정 필드의 값을 반환 -->
	student1 이름 :: 
	<jsp:getProperty name="student1" property="name" />		<br>
	student1 나이 :: 
	<jsp:getProperty name="student1" property="age" />		<br>

	<%
		// page 지시어로, 자바빈 파일을 import해야 사용이 가능하다.(파일 위치가 다르므로)
		Student s1 = new Student("신예원", 20, "100", "여성");
	
		Student s2 = new Student();
		s2.setName("이종권");
		s2.setAge(28);
		s2.setNumber("5");
		s2.setGender("남성");	
	%>

</body>
</html>