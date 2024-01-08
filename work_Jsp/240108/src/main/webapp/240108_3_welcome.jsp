<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>

<!-- 추가 -->
<%@ page import="java.util.*" %>

<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>240108_4시_세션</title>
</head>
<body>
	<h3>환영합니다!!!</h3>
	
	<%
		// Enumeration :: 연결리스트와 비슷함(순서를 중요시하는 배열)
		// en에 순차적으로 데이터를 넣고, 하나씩 처리할 수 있다.
		
		// 만약, confirm_login 서블릿을 거치고 바로 여기로 온 거라면
		// "id_session", "pw_session" 총 2개의 값이 저장될 것이다
		
		Enumeration en = session.getAttributeNames();
	
		// en에 구성요소가 더 있는지를 확인한다.(구성요소가 있는대로 반복문 실행)
		while (en.hasMoreElements()) {
			// "id_session", "pw_session" 이 두 가지는 각각 키 값이 된다.
			// "admin", "1111" 이 두 가지는 각각 value값이 된다.
			
			// value값 뽑아오기
			String key = en.nextElement().toString();
			// en의 가장 앞에 있는 구성요소를 tostring으로 불러옴.
			String value = (String)session.getAttribute(key);
			if (value.equals("admin")) {	// value의 값이 "admin"과 같을 경우에
				out.println(value + "님");
			}
		}
	%>
</body>
</html>