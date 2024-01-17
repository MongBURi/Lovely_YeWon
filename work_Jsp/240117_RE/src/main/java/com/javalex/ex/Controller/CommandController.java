package com.javalex.ex.Controller;

import java.io.IOException;
import java.util.*;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.javalex.ex.Command.MemberService;
import com.javalex.ex.Command.MemberServiceDelete;
import com.javalex.ex.Command.MemberServiceInsert;
import com.javalex.ex.Command.MemberServiceSelect;
import com.javalex.ex.DTO.MemberDTO;

/**
 * Servlet implementation class CommandController
 */
@WebServlet("*.do")
public class CommandController extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public CommandController() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
    protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		doAction(request, response);	
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		doAction(request, response);
	}
	
	protected void doAction(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		request.setCharacterEncoding("UTF-8");
		
		String uri = request.getRequestURI();
			// 사용자가 불러온 링크를 반환		ex) /240117/insert.do
		String conPath = request.getContextPath();	// 프로젝트명 반환
		String command = uri.substring(conPath.length());
			// insert.do, delete.do ... 형식으로 command에 저장
		
		// view(jsp), Controller(프론트컨트롤러, 커맨드)
		MemberService mService = null;		// 객체 생성x, 타입 구성만 한 것
				
		if (command.equals("/insert.do")) {
			// "회원 추가" 수행을 요청한 것
			System.out.println("<회원 추가>를 수행합니다.");
			mService = new MemberServiceInsert();			
		}
		else if (command.equals("/delete.do")) {
			// 회원 삭제
			System.out.println("<회원 삭제>를 수행합니다.");
			mService = new MemberServiceDelete();
		}
		else if (command.equals("/select.do")) {
			System.out.println("<회원 전체 출력>을 수행합니다.");
			mService = new MemberServiceSelect();
		}
		
		//mService.execute(request, response);
		
		// insert, delete, login-test 할 때엔 execute() 실행만 됨
		// select 할 때엔 result로 실질적인 값이 반환될 것
		ArrayList<MemberDTO> result = mService.execute(request, response);
		
		if (result != null) {	// 결과값이 null이 아닐 경우
			// Contoroller에서만 처리할 수 있는 건, 그냥 그렇게 하면 됨
			// 다만 View의 역할이 필요할 때엔, RequestDispatcher를 사용한다
				// 다른 페이지에서 처리를 할 수 있도록 연결
			RequestDispatcher dis = request.getRequestDispatcher("/getList.jsp");
			dis.forward(request, response);
		}		
		
		response.sendRedirect("adminPage.html");		
	}
	
}
