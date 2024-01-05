package com.javalex.ex;

import java.io.IOException;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class HelloServlet
 */
@WebServlet("/HelloServlet")
// 이 서블릿에 접근하기 위해서는, com.javalex.ex/HelloServlet
// 경로를 간결하기 하기 위해서, url 주소 일부 (뒷부분)를 치환
// url 매핑 하는 게 좋음

public class HelloServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public HelloServlet() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		//response.getWriter().append("Served at: ").append(request.getContextPath());
		//System.out.println("GET 메소드를 실행하였습니다.");
		
		// 한글 깨짐 방지
		response.setCharacterEncoding("UTF-8");
		
		// 여기에선, 브라우저 상에서 나타나게끔 설정할 예정 → append() 사용
		// 사전작업
		// jsp 파일 최상단 부분(contentType="text/html; charset=UTF-8")
		response.setContentType("text/html; charset=UTF-8");
		
		String name = request.getParameter("name");
		//response.getWriter().append(name + "님 환영합니다.");
		response.getWriter().append("<h3>" + name + "님 환영합니다.</h3>");
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		//doGet(request, response);
		//System.out.println("POST 메소드를 실행하였습니다.");
		
		// 한글 깨짐 방지
		response.setCharacterEncoding("UTF-8");
		
		String name = request.getParameter("name");
		System.out.println(name + "님 환영합니다!");
		
		// POST가 GET보다 보안에 강화되어 있다.
		// get에 직접 접근보다 post로 돌아서 접근하는 게 보안에 강하다(?)
	}

}
