package com.javalex.ex;

import java.io.IOException;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

/**
 * Servlet implementation class confirm_login_240108
 */
@WebServlet("/login")
public class confirm_login_240108 extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public confirm_login_240108() {
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
		String id = request.getParameter("id");
		String pw = request.getParameter("pw");
		
		// 세션을 통해서 생성된 변수 :: 
		//		선언된 직후 ~ 사용자가 프로그램을 종료할 때까지 살아있다.
		// 		(사용자의 실행 여부에 따라 생명주기가 결정된다)
		
		// 1. HttpSession 객체 생성
		HttpSession session = request.getSession();
		
		if (id.equals("admin") && pw.equals("1111")) {
			// 참이면, 관리자 로그인 성공한 걸로
			
			// 세션에 데이터를 저장(id_session = "admin")
			session.setAttribute("id_session", id);
			session.setAttribute("pw_session", pw);
			// ↑↑↑ 사용자가 브라우저를 끄면 소멸됨
			
			response.sendRedirect("240108_3_welcome.jsp");
			
		}
		else {
			// 거짓이면, 로그인 창으로 복귀
			System.out.println("관리자 로그인에 실패하였습니다.");
			response.sendRedirect("240108_3_login.html");
		}
		
		
	}

}
