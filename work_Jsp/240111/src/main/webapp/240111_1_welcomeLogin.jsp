<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>

<%@ page import="java.util.*" %>

<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>240111_9시_어제 했던 거 추가수정</title>
</head>
<body>
<%
	// 서버에 저장되어 있는 세션을 불러와서, 사용자 이름을 브라우저 출력
	Enumeration e = session.getAttributeNames();	// 세션 정보를 이넘(열거형배열)에 전부 담기
	
	while (e.hasMoreElements()) {
		String key = e.nextElement().toString();
		String value = session.getAttribute(key).toString();
		// (문자열 형태로 반환받기 위해 "toString()"사용, 안 붙이면 객체형태로 반환됨)
		// value에 사용자 이름이 담겨져 있는 상태
		
		out.println(value + "님!");		
	}	
%>
<p>환영합니다!</p>
<br>
<hr>
<a href="240111_2_changePw.html">비밀번호 변경</a> 
<a href="delete">회원탈퇴</a>

</body>
</html>