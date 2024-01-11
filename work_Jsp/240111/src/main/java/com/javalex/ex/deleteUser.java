package com.javalex.ex;

import java.io.IOException;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

/**
 * Servlet implementation class deleteUser
 */
@WebServlet("/delete")
public class deleteUser extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public deleteUser() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		
		// doAction으로 이동
		doAction(request, response);
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		
		// doAction으로 이동
		doAction(request, response);
	}
	
	// get/post 어디로 갈지 모르기 때문에 이곳으로 오도록 새로 생성
	protected void doAction(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		request.setCharacterEncoding("UTF-8");
		
		// "어느 계정을 삭제할 것인가?" → 지금 활용할 수 있는 건 세션에 있는 "id"값 뿐
		HttpSession session = request.getSession();
		String id = session.getAttribute("id").toString();
		
		// 세션에 있는 아이디 값은 받은 상태
		// "DB에 접속"하여 id 변수의 값을 아이디 값으로 갖는 "데이터를 삭제"
		EmployeeDAO dao = new EmployeeDAO();
		dao.deleteUser(id);
		
		// 회원 탈퇴시 로그아웃(계정 무효화)
		session.invalidate();
		
		// 첫화면 돌아가기
		response.sendRedirect("240111_1_inputLogin.html");
	}	

}
