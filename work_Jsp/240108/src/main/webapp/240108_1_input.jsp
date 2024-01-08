
<!-- HTML 주석 :: 브라우저 페이지 상에서 드러남 -->
<%-- jsp 주석 :: 브라우저 페이지 상에서 드러나지 않는다 --%>

<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%-- <%@ %> :: 지시어 태그 --%>
<%-- <%@ page %> :: jsp 파일의 전체적인 속성을 정의한다. --%>
<%-- <%@ include file="파일명" %> :: 외부 파일을 특정 위치에 포함한다. --%>
    
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">    
<title>240108_9시_연습문제1-3</title>
</head>
<body>
	<%-- <% %> :: 스크립트릿 태그(java의 대부분의 문법 작성 가능) --%>
	<%-- <%= %> :: 표현 태그(java로 선언된 변수/메소드값을 반환하는 데 쓰임) --%>
	<%-- <%! %> :: 선언 태그(변수/메소드 선언할 때 사용한다, 전역변수로 작용함) --%>
	
<%!
	String name;
	int age;
	String major;
	String hobby[];
	String site;
%>
<%!
	// 메소드1 :: 영문으로 입력받은 value값을 한글로 반환시킴
	public String getMajor(String m) {
		switch (m) {
		case "computer":
			m = "컴공과";		break;
		case "math":
			m = "수학과";		break;
		case "teacher":
			m = "교육과";		break;
		}
		return m;
	}

	// 메소드2 :: 취미
	public String getHobby(String h[]) {
		String result = "";
		if (h == null) {
			result += "취미 없음";
		}
		else {
			for (int i = 0; i < h.length; i++) {
				switch (h[i]) {
				case "jogging":
					result += "조깅";		break;
				case "cook":
					result += "요리";		break;
				case "read":
					result += "독서";		break;
				case "game":
					result += "게임";		break;
				}
				// 쉼표 추가
				if (i != h.length - 1) {
					result += ",";
				}
			}
		}		
		return result;
	}

	// 메소드3 :: 영문 ~ 사이트
	public String getSite(String s) {
		switch (s) {
		case "naver":
			s = "네이버";		break;
		case "daum":
			s = "다음";		break;
		case "google":
			s = "구글";		break;
		}
		return s;
	}
%>
<%
	name = request.getParameter("name");	
	age = Integer.parseInt(request.getParameter("age"));
	major = request.getParameter("major");
	hobby = request.getParameterValues("hobby");		
	site = request.getParameter("site");
%>

	<p>이름: <%=name %></p>
	<p>나이: <%=age %></p>
	<p>전공: <%=getMajor(major) %></p>
	<p>취미: <%= getHobby(hobby) %></p>
	<p>사이트: <%=getSite(site) %></p>

</body>
</html>