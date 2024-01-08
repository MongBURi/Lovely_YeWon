package com.javalex.ex;

import java.io.IOException;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class input_240108
 */
@WebServlet("/input_240108")
public class input_240108 extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public input_240108() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// 한글 깨짐 방지
		response.setCharacterEncoding("UTF-8");
		
		// 사전작업
		// jsp 파일 최상단 부분(contentType="text/html; charset=UTF-8")
		response.setContentType("text/html; charset=UTF-8");
		
		String name = request.getParameter("name");
		int age = Integer.parseInt(request.getParameter("age"));
		
		String major = request.getParameter("major");
		if (major.equals("computer")) {
			major = "컴공";
		}
		else if (major.equals("math")) {
			major = "수학";
		}
		else {
			major = "사범";
		}
		
		String[] hobbies = request.getParameterValues("hobby");
		StringBuilder hobbiesList = new StringBuilder();
		
		//if (hobbies != null && hobbies.length > 0) {
		    for (String hobby : hobbies) {
		        if (hobby.equals("jogging")) {
		        	hobbiesList.append("조깅, ");
		        } else if (hobby.equals("cook")) {
		        	hobbiesList.append("요리, ");
		        } else if (hobby.equals("read")) {
		        	hobbiesList.append("독서, ");
		        } else if (hobby.equals("game")) {
		        	hobbiesList.append("게임, ");
		        }
		    }
		//}		
		
		String site = request.getParameter("site");
		if (site.equals("naver")) {
			site = "네이버";
		}
		else if (major.equals("daum")) {
			site = "다음";
		}
		else {
			site = "구글";
		}		
		
		response.getWriter().append("이름: " + name + "<br>");
		response.getWriter().append("나이: " + age + "<br>");
		response.getWriter().append("전공: " + major + "<br>");
		//response.getWriter().append("취미: " + selectedHobby + "<br>");
		if (hobbiesList.length() > 0 ) {	// 취미가 선택된 경우에만 출력	//!hobbiesList.isEmpty()	    
		    //hobbiesList = hobbiesList.substring(0, hobbiesList.length() - 2); // 맨 뒤의 ", " 제거
		    hobbiesList.delete(hobbiesList.length() - 2, hobbiesList.length()); // 맨 뒤의 ", " 제거
			response.getWriter().append("취미: " + hobbiesList + "<br>");
		}
		else {
			 response.getWriter().append("취미: 선택된 취미가 없습니다.<br>");
		}
		response.getWriter().append("사이트: " + site + "<br>");		
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
