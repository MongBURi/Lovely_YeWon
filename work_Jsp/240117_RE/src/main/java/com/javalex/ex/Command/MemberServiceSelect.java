package com.javalex.ex.Command;

import java.util.ArrayList;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.javalex.ex.DAO.MemberDAO;
import com.javalex.ex.DTO.MemberDTO;

public class MemberServiceSelect implements MemberService {
	public ArrayList<MemberDTO> execute(HttpServletRequest request, HttpServletResponse response) {
		ArrayList<MemberDTO> result = new ArrayList<MemberDTO> ();
		
		// DB 연동
		MemberDAO dao = new MemberDAO();
		result = dao.MemberSelect();	// 반환형태가 ArrayList<MemberDTO>이므로
		
		request.setAttribute("list", result);	// list라는 이름으로 결과값 넣고 있음
		
		return result;		
	}	
	
}
