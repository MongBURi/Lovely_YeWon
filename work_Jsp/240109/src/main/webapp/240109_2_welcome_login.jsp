<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>

<!-- 추가 -->
<%@ page import="java.util.*" %>

<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>240109_10시_세션1-2</title>
</head>
<body>
	<h3>환영합니다!!!</h3>
<%!
	String key;
	String value;
	Enumeration en;
%>
<%
	// Enumeration :: 연결 리스트에 가깝다(배열과 다름)
	// 배열 :: array[0], array[1], ...(인덱스 숫자만 가능)
	// 이너머레이션 :: en["name"], en["age"], ...(특정 값을 탐색하는 데 문자열도 가능)
	
	// Enumeration을 통해서, 세션에 저장되어 있는 값들을 불러오기
	en = session.getAttributeNames();
	
	// en을 하나하나 탐색 다음 요소가 있다면 계속 실행
	// en의 마지막 요소에 도달하면 실행 종료
	int size = 0;	// 총 몇 개의 데이터가 들었는지 확인을 위한 변수
	while (en.hasMoreElements()) {
		// key, value값을 각각 구하는 방법
		
		// key값 구하기 :: en의 다음 요소 key값을 String으로 변환하여 저장
		key = en.nextElement().toString();
		
		// value값 구하기
		value = session.getAttribute(key).toString();
		
		// 값 확인
		if (value.equals("admin")) {
			// 브라우저 출력을 위한 출력 스트림
			out.println(value + "님!");
		}
		size++;		
	}
	
	// 위에 있는 out.println()과는 완전히 다른 메소드
	// 시스템 콘솔 상 출력을 위한 출력문
	// System 객체 안에 있는 out(줄기 자체가 다름)
	System.out.println("서버에 저장된 세션 개수 :: " + size);
%>
	<br>
	<hr>
	<a href="240109_3_logout.jsp">로그아웃</a>
	
</body>
</html>