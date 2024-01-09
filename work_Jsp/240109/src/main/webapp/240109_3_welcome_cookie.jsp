<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>240109_11시_쿠키1-2</title>
</head>
<body>
	<h3>안녕하세요!</h3>
	<%
		// 응답으로 전달받은 쿠키 객체를, 쿠키 타입의 배열에 저장
		Cookie[] cookies = request.getCookies();
	
		// 배열 형태이므로 반복문 슝슝
		for (int i = 0; i < cookies.length; i++) {
			// cookies객체에서 value값만 빼와서 저장. (cookies[i]안에는 키/벨류 다 들어있음)
			String value = cookies[i].getValue();
			
			if (value.equals("admin")) {
				out.println(value + "님!");
			}				
		}
		
		// 쿠키 개수 출력
		System.out.println("존재하는 쿠키 객체 개수 :: " + cookies.length);
			// cookies배열 길이 자체가 개수라서		
	%>
</body>
</html>