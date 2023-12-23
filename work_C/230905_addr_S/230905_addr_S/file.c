#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "file.h"
#include "menu.h"

void file_write_rand(ADDR ad[], char filename[], int len)
{
	FILE* fp = fopen(filename, "ab");
	if (fp == NULL) {
		printf("파일 오픈 실패\n");
		return;
	}

	for (int i = 0; i < len; i++) {
		fwrite(&ad[i], sizeof(ADDR), 1, fp);
	}
	fclose(fp);
}

void file_write(ADDR ad, char filename[])
{
	FILE* fp = fopen(filename, "ab");
	if (fp == NULL) {
		printf("파일 오픈 실패\n");
		return;
	}
	fwrite(&ad, sizeof(ADDR), 1, fp);
	fclose(fp);
}

void file_read(char filename[])
{
	// 데이터가 없으면 "데이터가 존재하지 않습니다" 에러 메시지를 출력하시오
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("파일 읽기 실패!\n");
		return;
	}
	ADDR ad = { 0 };
	int count = 1;
	int check = 0;	// flag변수: 체크용도로 쓰는 변수를 플래그변수라고 부름 ex)깃발올려내려
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {
		printf("%d번 주소록\n", count++);
		printf("ID: %d\n", ad.id);
		printf("이름: %s\n", ad.name);
		printf("전화: %s\n", ad.tel);
		printf("주소: %s\n", ad.addr);
		printf("Email: %s\n", ad.email);
		printf("\n");
		check = 1;	// while문을 수행하지 않으면 그대로0, 수행하면 1로 바뀜
	}
	/*if (fread(&ad, sizeof(ad), 1, fp) != 1) {
		printf("데이터가 존재하지 않습니다.\n");
	}*/
	fclose(fp);
	if (check == 0) {
		printf("데이터가 존재하지 않습니다.\n");
	}
}

void file_del_all(char filename[])
{
	FILE* fp = fopen(filename, "wb");
	if (fp == NULL) {
		printf("파일 삭제 실패!\n");
		exit(0);
	}
	fclose(fp);
}

void file_search(char filename[], char in_name[])
{
	// 이름으로 검색	
	ADDR ad = {0};
	int count = 1;
	int check = 0;
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("파일 검색 실패!\n");
		return;
	}
	while (fread(&ad, sizeof(ad), 1, fp)) {
		if (strcmp(ad.name, in_name) == 0) {	// 동일하면 리턴값이 0이 온다
			printf("%d번 주소록\n", count++);
			printf("ID: %d\n", ad.id);
			printf("이름: %s\n", ad.name);
			printf("전화: %s\n", ad.tel);
			printf("주소: %s\n", ad.addr);
			printf("Email: %s\n", ad.email);
			printf("\n");
			check = 1;
		}
	}
	fclose(fp);
	if (check == 0) {
		printf("데이터가 존재하지 않습니다.\n");
	}
}
// 삭제 함수 첫 번째
void file_delete(char filename[], char delname[])
{
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("파일 삭제 실패!\n");
		return;
	}

	ADDR ad = { 0 };
	ADDR del_arr[200] = { 0 };
	int count = 1;
	int check = 0;
	int i = 0;
	// ◆ 현업에서 이렇게 주석으로 메모
	// ◆ 파일에 데이터가 1개 남았으면 삭제가 되지 않는 버그 [ex) 230905_이메일주소]
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {
		if (strcmp(ad.name, delname) != 0) {	// strcmp() == 0: 같다/ != 0: 다르다
			del_arr[i].id = ad.id;
			strcpy(del_arr[i].name, ad.name);
			strcpy(del_arr[i].tel, ad.tel);
			strcpy(del_arr[i].addr, ad.addr);
			strcpy(del_arr[i].email, ad.email);
			i++;
			check = 1;
		}
	}
	fclose(fp);
	printf("복사한 개수(i): %d\n", i);
	if (check == 0 && strcmp(ad.name, delname) != 0) {	// && 같지 않을 경우도 추가
		printf("데이터가 존재하지 않습니다.\n");
		return;
	}

	FILE* fp2 = fopen(filename, "wb");
	if (fp2 == NULL) {
		printf("파일 오픈 실패!\n");
		return;
	}

	for (i = 0; i < 200; i++) {
		if (del_arr[i].id == 0) {	// 배열에 데이터가 없다면 반복문 탈출
			break;
		}
		fwrite(&del_arr[i], sizeof(ADDR), 1, fp2);
	}
	fclose(fp2);
}
// 삭제 함수 두 번째
void file_delete2(char filename[], char delname[])
{
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("파일 삭제 실패!\n");
		return;
	}

	ADDR ad = { 0 };
	ADDR del_arr[200] = { 0 };
	int count = 1;
	int check = 0;
	int i = 0;
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {
		if (strcmp(ad.name, delname) != 0) {
			del_arr[i].id = ad.id;
			strcpy(del_arr[i].name, ad.name);
			strcpy(del_arr[i].tel, ad.tel);
			strcpy(del_arr[i].addr, ad.addr);
			strcpy(del_arr[i].email, ad.email);
			i++;
			check = 1;
		}
	}
	fclose(fp);
	printf("복사한 갯수(i): %d\n", i);
	int size = i;	// 위의 if문을 안 탔기 때문에 값은 0이 나옴(size = 0;)
	if (check == 0 && strcmp(ad.name, delname) != 0) {
		printf("데이터가 존재하지 않습니다.\n");
		return;
	}

	FILE* fp2 = fopen(filename, "wb");
	if (fp2 == NULL) {
		printf("파일 쓰기 실패!\n");
		return;
	}

	for (i = 0; i < size; i++) {	// i < 'size'를 사용하여 반복문 안 타도록 함
		printf("del_arr[%d]: %d\n", i, del_arr[i].id);
		fwrite(&del_arr[i], sizeof(ADDR), 1, fp2);
	}
	fclose(fp2);
}

void file_update(char filename[], char sname[], char dname[])
{
	// 수정할 경우 입력을 어떻게 받아야할까
	// 1. 검색할 이름, 수정할 이름 → 2개의 이름을 입력받음
	// 2. 파일에서 읽어온 이름과 검색할 이름을 비교해서 같으면
	//    수정할 이름으로 변경해서 빈 배열에 복사
	// 3. 복사한 배열을 파일에 새로 쓰기

	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("파일 삭제 실패!\n");
		return;
	}

	ADDR ad = { 0 };
	ADDR up_arr[200] = { 0 };
	int count = 1;
	int check = 0;
	int i = 0;
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {
		if (strcmp(ad.name, sname) == 0) {
			strcpy(up_arr[i].name, dname);
			check = 1;
		}
		else {
			strcpy(up_arr[i].name, ad.name);
		}
		up_arr[i].id = ad.id;
		strcpy(up_arr[i].tel, ad.tel);
		strcpy(up_arr[i].addr, ad.addr);
		strcpy(up_arr[i].email, ad.email);
		i++;
	}
	int size = i;
	fclose(fp);

	if (check == 0) {
		printf("데이터가 존재하지 않습니다.\n");
		return;
	}

	FILE* fp2 = fopen(filename, "wb");
	if (fp2 == NULL) {
		printf("파일 쓰기 실패!\n");
		return;
	}

	for (i = 0; i < size; i++) {
		fwrite(&up_arr[i], sizeof(ADDR), 1, fp2);
	}
	fclose(fp2);
}
// 검색 (내가 한 거)
void file_search2(char filename[])
{	
	while (1) {
		switch (search_menu()) {
		case 1:	// 이름
			printf("이름 입력: ");
			char s_name[20] = { 0 };
			scanf("%s", &s_name);

			FILE* fp = fopen(filename, "rb");
			if (fp == NULL) {
				printf("파일 오픈 실패!\n");
				return -1;
			}

			ADDR temp = { 0 };
			int count = 1;
			int check = 0;
			while (fread(&temp, sizeof(temp), 1, fp)) {
				if (strcmp(temp.name, s_name) == 0) {
					printf("%d번 주소록\n", count++);
					printf("ID: %d\n", temp.id);
					printf("이름: %s\n", temp.name);
					printf("전화: %s\n", temp.tel);
					printf("주소: %s\n", temp.addr);
					printf("Email: %s\n", temp.email);
					printf("\n");
					check = 1;
				}
			}
			fclose(fp);
			if (check == 0 && (strcmp(temp.name, s_name) != 0)) {
				printf("데이터가 존재하지 않습니다.\n");
			}
			system("pause");
			break;
		case 2:	// 아이디
			printf("아이디 입력: ");
			int s_id = 0;
			scanf("%d", &s_id);

			FILE* fp2 = fopen(filename, "rb");
			if (fp2 == NULL) {
				printf("파일 오픈 실패!\n");
				return -1;
			}

			ADDR temp2 = { 0 };
			count = 1;
			check = 0;
			while (fread(&temp2, sizeof(temp2), 1, fp2)) {
				if (temp2.id == s_id) {
					printf("%d번 주소록\n", count++);
					printf("ID: %d\n", temp2.id);
					printf("이름: %s\n", temp2.name);
					printf("전화: %s\n", temp2.tel);
					printf("주소: %s\n", temp2.addr);
					printf("Email: %s\n", temp2.email);
					printf("\n");
					check = 1;
				}
			}
			fclose(fp2);
			if (check == 0 && (temp2.id == s_id)) {
				printf("데이터가 존재하지 않습니다.\n");
			}
			system("pause");
			break;
		case 3:	// 메일
			printf("메일 입력: ");
			char s_email[20] = { 0 };
			scanf("%s", &s_email);

			FILE* fp3 = fopen(filename, "rb");
			if (fp3 == NULL) {
				printf("파일 오픈 실패!\n");
				return -1;
			}

			ADDR temp3 = { 0 };
			count = 1;
			check = 0;
			while (fread(&temp3, sizeof(temp3), 1, fp3)) {
				if (strcmp(temp3.email, s_email) == 0) {
					printf("%d번 주소록\n", count++);
					printf("ID: %d\n", temp3.id);
					printf("이름: %s\n", temp3.name);
					printf("전화: %s\n", temp3.tel);
					printf("주소: %s\n", temp3.addr);
					printf("Email: %s\n", temp3.email);
					printf("\n");
					check = 1;
				}
			}
			fclose(fp3);
			if (check == 0 && (strcmp(temp3.email, s_email) != 0)) {
				printf("데이터가 존재하지 않습니다.\n");
			}
			system("pause");
			break;
		case 4:	// 메인		
			printf("메인 메뉴로 되돌아갑니다.\n");
			return;
		}
		system("cls");
	}
}

void file_search_name(char filename[], char name[])
{	
	ADDR ad = { 0 };
	int count = 1;
	int check = 0;
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("파일 검색 실패!\n");
		return;
	}
	while (fread(&ad, sizeof(ad), 1, fp)) {
		if (strcmp(ad.name, name) == 0) {
			printf("%d번 주소록\n", count++);
			printf("ID: %d\n", ad.id);
			printf("이름: %s\n", ad.name);
			printf("전화: %s\n", ad.tel);
			printf("주소: %s\n", ad.addr);
			printf("Email: %s\n", ad.email);
			printf("\n");
			check = 1;
		}
	}
	fclose(fp);
	if (check == 0) {
		printf("데이터가 존재하지 않습니다.\n");
	}
}

void file_search_id(char filename[], char id[])
{	
	ADDR ad = { 0 };
	int count = 1;
	int check = 0;
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("파일 검색 실패!\n");
		return;
	}
	while (fread(&ad, sizeof(ad), 1, fp)) {
		if (ad.id == id) {
			printf("%d번 주소록\n", count++);
			printf("ID: %d\n", ad.id);
			printf("이름: %s\n", ad.name);
			printf("전화: %s\n", ad.tel);
			printf("주소: %s\n", ad.addr);
			printf("Email: %s\n", ad.email);
			printf("\n");
			check = 1;
		}
	}
	fclose(fp);
	if (check == 0) {
		printf("데이터가 존재하지 않습니다.\n");
	}
}

void file_search_email(char filename[], char email[])
{	
	ADDR ad = { 0 };
	int count = 1;
	int check = 0;
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("파일 검색 실패!\n");
		return;
	}
	while (fread(&ad, sizeof(ad), 1, fp)) {
		if (strcmp(ad.name, email) == 0) {
			printf("%d번 주소록\n", count++);
			printf("ID: %d\n", ad.id);
			printf("이름: %s\n", ad.name);
			printf("전화: %s\n", ad.tel);
			printf("주소: %s\n", ad.addr);
			printf("Email: %s\n", ad.email);
			printf("\n");
			check = 1;
		}
	}
	fclose(fp);
	if (check == 0) {
		printf("데이터가 존재하지 않습니다.\n");
	}
}

void file_search3(char filename[], char name[], char email[], int id)
{
	ADDR ad = { 0 };
	int count = 1;
	int check = 0;
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("파일 검색 실패!\n");
		return;
	}
	while (fread(&ad, sizeof(ad), 1, fp)) {
		if (strcmp(ad.name, name) == 0 || strcmp(ad.email, email) == 0
			|| ad.id == id) {
			printf("%d번 주소록\n", count++);
			printf("ID: %d\n", ad.id);
			printf("이름: %s\n", ad.name);
			printf("전화: %s\n", ad.tel);
			printf("주소: %s\n", ad.addr);
			printf("Email: %s\n", ad.email);
			printf("\n");
			check = 1;
		}
	}
	fclose(fp);
	if (check == 0) {
		printf("데이터가 존재하지 않습니다.\n");
	}
}