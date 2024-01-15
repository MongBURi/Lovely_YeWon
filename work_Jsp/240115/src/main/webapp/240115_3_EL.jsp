<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>240115_11시_EL태그1</title>
</head>
<body>

	<h3>스크립트릿으로 출력</h3>
	<p>제 이름은 <%="신예원" %>입니다.</p>

	<h3>EL 태그로 출력</h3>
	<p>제 이름은 ${"신예원"}입니다.</p>	<hr>

	<script>
		console.log(`100 + 100의 결과는 ${100 + 100}입니다.`);		
	</script>
	
	<form method="post" action="240115_3_EL2.jsp">
        이름: <input type="text" id="name" name="name">	<br>
        나이: <input type="number" id="age" name="age">	<br>
        
        <input type="submit" value="EL 전송(jsp)">
    </form>
	
</body>
</html>