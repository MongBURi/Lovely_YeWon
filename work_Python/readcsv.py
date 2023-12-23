# csv파일 읽는 라이브러리 호출
import csv

# 파일 처리하는 변수 선언
# open()함수 통해 읽어들인 파일에 대한 내용을 저장
f = open('mydata.csv', 'r')

# 파일 데이터를 읽음
rdr = csv.reader(f)

# 리스트 선언
mydatas = []

isStart = True

# rdr에 있는 걸 한 줄씩 읽을 것
for line in rdr:
    if isStart:
        isStart = False
        pass
    else:
        mydatas.append(line)

f.close()

for item in mydatas:
    print(('상호명:%s,\t전화번호:%s,\t대표메뉴:%s') %
          (item[1], item[3], item[4]))
    #print(item)

