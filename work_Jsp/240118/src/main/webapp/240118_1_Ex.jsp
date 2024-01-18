<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>240118_9시_d3 연습문제1-2</title>

<!-- d3 라이브러리 추가 -->
<script src="http://d3js.org/d3.v7.min.js"></script>

</head>
<body>
	<h1>성적표</h1>
	<!-- <svg id="myChart"></svg> -->
	
	<script>
		// 추가 문제)
		// 국영수 평균을 구해서, data로 추가를 하고
		// 평균값보다 낮은 값에 대해서는 차트 색상을 빨간색으로
		// 평균값보다 높은 값에 대해서는 차트 색상을 초록색으로	
	
		// 1. 3개 점수 파라미터 처리.
		let k = ${param.korean};
		let e = ${param.english};
		let m = ${param.math};
		let avr = (k + e + m) / 3;
		
		// 2. 차트로 표현할 데이터 구성.
		let score = [k, e, m, avr];
				
		// 3. svg 태그 삽입.(차트 표현할 공간 마련)
		d3.select("body")
			.append("svg")
			.attr("id", "myChart")	// script태그 아래쪽으로 나타나게 될 것
		
		// 4. 데이터 표현.(차트 표현)
		d3.select("#myChart")	// d3.select("svg") :: 이렇게도 가능(?)
			.selectAll("rect")
			.data(score)		// 데이터에 score값 삽입
			.enter()			// HTML 요소와 data 연결 시도
			.append("rect")		// 연결 시도해서 데이터가 없다면, rect 생성
			.attr("x", 0)
			.attr("y", (data, index) => {return index * 35;})	// index값 :: 0, 1, 2 ...
			.attr("height", 25)
			.attr("width", (data, index) => {return data;})
				// (data, index) => {return data;} == (d, i) => {return d;} 똑같은 식
			.attr("fill", (data, index) => {
				if (index === 3) {		// 평균값일 때는, 검은색으로 처리
					return "Black";		// js의 경우 "같다"(===)
				}
				else {	// 초록인지 빨강인지 구분
					if (data >= score[3]) {		// 평균값과 인덱스값 하나씩 비교
						return "Green";
					}
					else {
						return "Red";
					}
				}
			})
		
		// 5. 텍스트 추가(과목명, 데이터값 출력)
		let subject = ["국어", "영어", "수학", "평균"];
		d3.select("#myChart")
			.selectAll("text")	// text태그가 있는지 확인 중
			.data(score)
			.enter()			// text - score 연결 시도
			.append("text")
			.text((data, index) => {return subject[index] + ": " + data;})
				// "국어: 90" 형태로 출력
			.attr("x", (data, index) => {return data + 5;})
			.attr("y", (data, index) => {return index * 35 + 17;})
			.attr("fill", "navy")
	</script>
	
</body>
</html>