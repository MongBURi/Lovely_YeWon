<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>

<!-- 추가 -->
<%@ page import="java.util.*" %>
<%@ page import="com.oreilly.servlet.MultipartRequest" %>	<!-- 업로드에 필요한 기본적인 객체 -->
<%@ page import="com.oreilly.servlet.multipart.DefaultFileRenamePolicy" %>	<!-- 이름 충돌시 손실 방지 -->

<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>240115_9시_파일업로드1-2</title>
</head>
<body>
<%
	// 업로드 할 준비
	// 톰캣 서버의 해당 프로젝트 파일 안에서 myupload라는 폴더 찾는 경로
	String path = application.getRealPath("myupload");
	//System.out.println(path);
	int size = 1024 * 1024 * 10;	// 파일 사이즈 제한(10MB)
	
	try {
		// 파일 업로드를 위한 MultipartRequest 객체 생성 :: 
			// (업로드할 파일, 업로할 경로, 최대 사이즈, 인코딩 방식, 파일 이름 충돌 방지 정책)
		MultipartRequest multi = 
			new MultipartRequest(request, path, size, "UTF-8", new DefaultFileRenamePolicy());
		
		// 사용자가 입력한 파일 받기
		Enumeration files = multi.getFileNames();	// 파일 이름을 통해서 files에 저장
		String name = files.nextElement().toString();	// 1개의 파일명 저장/key값(이름)으로 탐색
		
		// 파일 이름 충돌이 발생할 시를 대비하여, 2개의 메소드 모두 사용
		// 이름 충돌이 발생하지 않으면, file = ori값과 같게 됨
		String file = multi.getFilesystemName(name);	// ex) "새 폴더(2)" 저장
		String ori = multi.getOriginalFileName(name);	// ex) "새 폴더" 저장
		
		// 안내 문구
		out.println("업로드를 성공하였습니다.");
		
	} catch (Exception e) {
		System.out.println("파일 업로드 에러");
		e.printStackTrace();	// 실질적인 에러 이름 출력
	}
	
%>
</body>
</html>