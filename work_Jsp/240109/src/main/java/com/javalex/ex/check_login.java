package com.javalex.ex;

import java.io.IOException;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

/**
 * Servlet implementation class check_login
 */
@WebServlet("/check")
public class check_login extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public check_login() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		response.getWriter().append("Served at: ").append(request.getContextPath());
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		request.setCharacterEncoding("UTF-8");
		
		String id = request.getParameter("id");
		String password = request.getParameter("pw");
		
		if (id.equals("admin") && password.equals("1234")) {	// id가 admin, pw가 1234일 경우
			// 세션 :: 서버에 저장해 놓는 변수
			// 세션은 생성된 직후부터 사용자가 브라우저를 종료하기 전까지 살아 있다
			// 연결된 페이지가 줄줄이 있을 때, 파라미터 전달로는 한계가 있어 세션을 사용해서 값 전달하면 된다
			
			// 1. 세션 생성을 위한 객체 생성.
			HttpSession ss = request.getSession();
			
			// session 객체(ss)를 통해서, 서버에 변수에 삽입하는 과정
			ss.setAttribute("id", id);	// (키값,벨류값){id: "admin"}형태로 서버에 저장됨
			ss.setAttribute("passwd", password);	// {passwd: "1234"}
			
			response.sendRedirect("240109_2_welcome_login.jsp");
			
			
		}
		else {
			System.out.println("관리자 로그인에 실패했습니다.");
			System.out.println("다시 시도해 주십시오.");
			response.sendRedirect("240109_2_loginSession.html");			
		}
		
	}

}
