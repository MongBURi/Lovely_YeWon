<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>

<!-- JSTL 사용시 필수 -->
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>

<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>240116_9시_JSTL</title>
</head>
<body>
<%!	String name; %>
<%	name = "SHINYEWON"; %>
<h3>제 이름은 <%="신예원" %>입니다.</h3>

	<!-- EL 태그 -->
	<h3>제 이름은 ${"신예원"}입니다.</h3>
	제 영어 이름은 ${name}입니다.	<!-- 이러한 내용은 JSTL로 사용 -->
	<p>100 + 10 + 1의 결과는 ${100 + 10 + 1}입니다.</p>
	
	<!-- 파라미터 처리를 할 때에는, param 객체를 활용 -->
	<!-- ex) param.id -->	
	<hr><hr>
	
	<!-- JSTL -->
	<c:set var="name" value="SHINYEWON" />	<!-- 변수(name) 선언, 초기화(SHINYEWON) -->
	<!-- 여기에서 c는 prefix="c" -->
	<h3>제 영어 이름은 ${name}입니다.</h3>
	<h3>제 영어 이름은 <c:out value="${name}"/>입니다.</h3>
	<hr><hr>
	
	<!-- 조건문 -->
	<c:if test="${1 + 2 == 3}">
		<%-- 참일 경우 어떻게 수행할 거냐 --%>
		"1 + 2 == 3"은 참입니다.
	</c:if>	
	<hr>
	
	<!-- else if, else의 형식을 포함하는 건 문법이 따로 있따 -->
	<c:choose>
		<c:when test="${10 > 100}"> 10은 100보다 큽니다.</c:when>	<%-- if --%>
		<c:when test="${10 == 100 }"> 10은 100과 같다.</c:when>	<%-- else if --%>
		<c:otherwise>10은 100보다 작습니다.</c:otherwise>	<%-- else(조건식 적을 필요x) --%>
	</c:choose>
	<!-- JSTL  태그 안쪽에는, HTML 주석 사용하면 안 됨 -->	
	<hr><hr>
	
	<!-- 반복문 -->
	<c:forEach var="i" begin="1" end="10" step="2">	<%-- step만큼 더해짐(기본값1) --%>
		${i}
	</c:forEach>
	<hr><hr>
	
	<!-- try/catch 구문 -->
	<%
		try {
			int result = 2 / 0;
		} catch (Exception e) {
			out.println("2/0 에러명: " + e.getMessage());
		}
	%>
	<br>
	<c:catch var="myError">		<%-- myError :: 위의 catch(Exception e) 역할 --%>
		2/0 결과값: <%=2 / 0 %>	<%-- try 구문 --%>
	</c:catch>
	<c:out value="${myError}"/>	<%-- 에러는 그냥 출력하면 된다 --%>	

</body>
</html>