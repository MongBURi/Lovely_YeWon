package com.javalex.ex;

// 클래스 → 자바빈 → "DTO(공식명칭)"
public class UserDTO {
	private String name;
	private int age;
	
	// 게터세터
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public int getAge() {
		return age;
	}
	public void setAge(int age) {
		this.age = age;
	}
	
}
