package com.javalex.ex;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class print_240108
 */
@WebServlet("/print_240108")
public class print_240108 extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public print_240108() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		String name = request.getParameter("name");
		int age = Integer.parseInt(request.getParameter("age"));		
		// 사용자가 선택한 value값 처리
		String major = request.getParameter("major");
		// 사용자가 선택한 복수의 value값 처리
		String hobby[] = request.getParameterValues("hobby");		
		String site = request.getParameter("site");
		
		// 파일 형식을 정의
		response.setContentType("text/html; charset=UTF-8");
		
		// response.getWriter().append(""); 매번 이렇게 하기 귀찮을 때
		PrintWriter pw = response.getWriter();
		
		pw.println("<p>이름: " + name + "</p>");
		pw.println("<p>나이: " + age + "</p>");
		switch (major) {
		case "computer":		// value값이 computer라면
			major = "컴공과";		// major값 "컴공과"로 변경
			break;
		case "math":
			major = "수학과";
			break;
		case "teacher":
			major = "교육과";
			break;
		}
		pw.println("<p>전공: " + major + "</p>");
						
		// 취미 출력 :: 영문으로 전달받은 값들을 한글로 전환하여 출력
		pw.println("<p>취미: ");
		if (hobby == null) {	// 아무것도 선택하지 않았을 경우(hobby 배열의 길이가 0인 경우)
			pw.println("취미 없음");
		}
		else {	// 취미란에 어떤 것이라도 선택을 한 경우
			for (int i = 0; i < hobby.length; i++) {	// 0부터 hobby[]까지
				switch (hobby[i]) {		// 0부터 시작하여 hobby 원소를 한글로 변형
				case "jogging":
					hobby[i] = "조깅";
					break;
				case "cook":
					hobby[i] = "요리";
					break;
				case "read":
					hobby[i] = "독서";
					break;
				case "game":
					hobby[i] = "게임";
					break;
				}
				//pw.println(hobby[i] + " ");	// 띄어쓰기로 구분
				pw.println(hobby[i]);			// 쉼표로 구분
				if (i != hobby.length - 1) {	// 마지막 원소의 차례가 아니라면
					pw.println(",");
				}
			}			
		}
		pw.println("</p");
		
		// 사이트명 출력
		switch (site) {
		case "naver":
			site = "네이버";
			break;
		case "daum":
			site = "다음";
			break;
		case "google":
			site = "구글";
			break;
		}
		pw.println("<p>사이트: " + site + "</p>");
		
		// 다시 작성하러 돌아가기
		pw.println("<form action=\"240108_1_input.html\">");
		pw.println("<input type=\"submit\" value=\"다시 작성하기\"/>");
		pw.println("</form>");
		
	}
	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
