<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>

<!-- JSTL 사용시 필수 -->
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>

<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>240116_10시_연습문제1-2</title>
</head>
<body>
	<!-- EL -->
	<h1>입력한 숫자 출력(EL)</h1>
    <p>
    	첫 번째 숫자: ${param.num1}	<br>
    	두 번째 숫자: ${param.num2}
    </p> 
	
	<!-- JSTL -->
	<!-- 변수 선언 -->
	<c:set var="num1" value="${param.num1}" />
	<c:set var="num2" value="${param.num2}" />	
	<h1>입력한 숫자 출력(JSTL)</h1>
	<p>
		첫 번째 숫자: <c:out value="${num1}"/><br>
		두 번째 숫자: <c:out value="${num2}"/>
	</p>
		
	<!-- 반복문 -->
	<c:forEach var="i" begin="${num1}" end="${num2}" step="1">
		<!-- 조건문 -->
		<c:choose>
			<c:when test="${i % 3 == 0}">
				<!-- 3의 배수일 때 count 변수 증가 -->
				<c:set var="count" value="${count + 1}" />
			</c:when>
		</c:choose>
	</c:forEach>
	
	<!-- 결과 출력 -->
	<h1>3의 배수인 개수 출력(JSTL)</h1>
	<p>
		<span style="font-size:30px">${num1}</span>부터 
		<span style="font-size:30px">${num2}</span>까지 3의 배수의 개수는 
		<span style="font-size:30px"><c:out value="${count}" /></span>개
	</p>
	
	<hr><hr>
	
	<!-- 유나쌤 답안 -->
	<!-- 처음 숫자, 끝 숫자 파라미터 처리 -->
	<c:set var="start" value="${param.num1}" />
	<c:set var="end" value="${param.num2}" />
	<c:set var="count" value="0" />
	
	<c:forEach var="i" begin="${start}" end="${end}">
		<c:if test="${i % 3 == 0 }">
			<c:out value="${i}" />
			<c:set var="count" value="${count + 1}" />
		</c:if>
	</c:forEach>
	<br>
	
	3의 배수의 개수는 <c:out value="${count}" />개 입니다.		
	
</body>
</html>