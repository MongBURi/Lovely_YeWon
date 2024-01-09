package com.javalex.ex;

import java.io.IOException;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.Cookie;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class check_cookie
 */
@WebServlet("/cookie")
public class check_cookie extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public check_cookie() {
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
		String passwd = request.getParameter("pw");
		
		if (id.equals("admin") && passwd.equals("1234")) {
			// 쿠키 :: 클라이언트(로컬pc)에 저장하는 변수
			// 단점 :: 세션보다는 보안에 좋지 않다(중요하지 않은 정보 저장)
			// 장점 :: 사용자가 프로그램/브라우저를 꺼도 변수가 유지됨
			
			// 쿠키 객체 생성
			Cookie cookie = new Cookie("id", id);
				// {id: "admin"} 형태로 cookie 객체 생성
			
			// 쿠키 설정 → 유효기간 설정
			cookie.setMaxAge(30);	// 30초로 설정
			
			// 사용자 응답에 쿠키 객체를 포함한다.
			response.addCookie(cookie);
			response.sendRedirect("240109_3_welcome_cookie.jsp");
				// 240109_3_welcome_cookie.jsp로 이동되면서 cookie객체 정보가 같이 넘어간다
			
		}
		else {
			System.out.println("로그인에 실패했습니다.");
			response.sendRedirect("240109_2_loginCookie.html");
		}
		
		
		
		
		
	}

}
