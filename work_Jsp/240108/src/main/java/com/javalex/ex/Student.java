package com.javalex.ex;

// 학생에 대한 자바빈
public class Student {
	// 멤버 변수 선언부	
	private String name;	// 이름
	private int age;		// 나이	
	private String number;	// 번호
	private String gender;	// 성별
		
	// 기본 생성자
	public Student() {
			
	}
		
	// 생성자(기본 생성자가 없을 경우 유효하다)
	public Student(String n, int a, String num, String g) {		
		this.name = n;
		this.age = a;		
		this.number = num;
		this.gender = g;
	}	

	// get set 메소드
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

	public String getNumber() {
		return number;
	}
	public void setNumber(String number) {
		this.number = number;
	}

	public String getGender() {
		return gender;
	}
	public void setGender(String gender) {
		this.gender = gender;
	}
}
