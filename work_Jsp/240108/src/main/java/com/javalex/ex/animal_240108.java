package com.javalex.ex;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class animal_240108
 */
@WebServlet("/animal_240108")
public class animal_240108 extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public animal_240108() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		request.setCharacterEncoding("UTF-8");
		response.setContentType("text/html; charset=UTF-8");
		
		// HTML 파일에서 입력값 파라미터 처리
		String name = request.getParameter("name");
		String kinds = request.getParameter("kinds");
		int age = Integer.parseInt(request.getParameter("age"));
		String num = request.getParameter("num");
		
		// 자바빈을 이용하여, animal 타입의 a 객체 생성
		Animal a = new Animal(kinds, name, age, num);
		
		//System.out.println(a.getKinds());	// 디버깅
		
		// 브라우저 상, 객체 멤버변수 값 출력
		PrintWriter pw = response.getWriter();
		pw.println("동물 종: " + a.getKinds() + "<br>");
		pw.println("이름: " + a.getName() + "<br>");
		pw.println("나이: " + a.getAge() + "<br>");
		pw.println("번호: " + a.getNumber() + "<br>");		
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		request.setCharacterEncoding("UTF-8");		
		
		String name = request.getParameter("name");		
		int age = Integer.parseInt(request.getParameter("age"));
		String num = request.getParameter("num");
		String gender = request.getParameter("gender");
		
		Student s = new Student(name, age, num, gender);
		
		response.setContentType("text/html; charset=UTF-8");
		PrintWriter pw = response.getWriter();		
		pw.println("이름: " + s.getName() + "<br>");
		pw.println("나이: " + s.getAge() + "<br>");
		pw.println("번호: " + s.getNumber() + "<br>");	
		pw.println("성별: " + s.getGender() + "<br>");	
		
	}

}
