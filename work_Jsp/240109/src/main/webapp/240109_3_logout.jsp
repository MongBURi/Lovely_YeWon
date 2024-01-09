<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>

<!-- 추가 -->
<%@ page import="java.util.*" %>

<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>240109_11시_세션1-3</title>
</head>
<body>
	<!-- 서버에 있는 세션을 제거하면서 로그아웃 수행, HTML 파일로 돌아가기 -->
	<%!
		Enumeration en;
		String key;
	%>	
	<%
		Enumeration en = session.getAttributeNames();
		int size = 0;
	
		while (en.hasMoreElements()) {
			key = en.nextElement().toString();
			
			// key값을 통해 세션 삭제 수행
			session.removeAttribute(key);	// 키/벨류값 모두 삭제됨
			size++;	// 삭제된 세션 갯수
		}
		System.out.println(size + "개의 세션이 제거되었습니다.");
		
		// 아이디 비밀번호 입력폼으로 돌아가기
		response.sendRedirect("240109_2_loginSession.html");
	%>	
</body>
</html>