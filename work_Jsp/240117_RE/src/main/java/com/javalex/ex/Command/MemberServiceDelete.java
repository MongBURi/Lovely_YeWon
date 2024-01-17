package com.javalex.ex.Command;

import java.util.ArrayList;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.javalex.ex.DAO.MemberDAO;
import com.javalex.ex.DTO.MemberDTO;

public class MemberServiceDelete implements MemberService {
	public ArrayList<MemberDTO> execute(HttpServletRequest request, HttpServletResponse response) {
		ArrayList<MemberDTO> dto = null;
		
		MemberDAO dao = new MemberDAO();		
		String id = request.getParameter("id");
		dao.MemberDelete(id);
				
		return dto;		// 인터페이스에 반환형을 선언했기 때문에 의미 없는 반환
	}
}
