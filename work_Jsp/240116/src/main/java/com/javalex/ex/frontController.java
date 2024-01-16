package com.javalex.ex;

import java.io.IOException;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class frontController
 */
@WebServlet("*.do")

// "*" :: SQL에서의 *(전부)
// ".do"로 끝나는 이름으로 하이퍼링크가 설정되었다면, 이쪽으로 이동된다.

public class frontController extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public frontController() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		request.setCharacterEncoding("UTF-8");
		response.setContentType("text/html; charset=UTF-8");
		
		// 변수 추가
		String uri = request.getRequestURI();
		String conPath = request.getContextPath();
		
		System.out.println(uri);
			// 사용자 요청대로 이동한 uri링크
		System.out.println(conPath);
			// 프로젝트명 반환(톰캣에 등록되어 있는 path 속성을 반환)
		
		// url 매핑값 :: *.do
		// *에 해당하는 값에 따라 다른 연산 및 처리를 해야될 필요가 있따
		// "어떤 url 매핑값으로 들어오는지에 따라" 어떤 연산을 처리할지 나누어야 할 필요가 있따
		String command = uri.substring(conPath.length());	// substring() :: 특정 string만 뽑아 온다
		System.out.println(command);		
		
		// 프론트 컨트롤러 :: "어느 위치의 파일로 이동할지"에 대한 결정을 담당한다.
		if (command.equals("/insert.do")) {
			response.getWriter().println("Insert를 수행하였습니다.");
		}
		else {
			response.getWriter().println("cmd :: " + command);
		}		
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
			
	}

}
