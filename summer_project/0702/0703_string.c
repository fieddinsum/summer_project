#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//11:01 시작
int main() {

// 단어 입력 공간 배열 생성
	char input_arr[1000] = { 0, };
	char *arr_pointer = input_arr;
	char cmdword[9];
	int temp = 0;
	int str_length = 0;
	while (1) {
		printf("cmdline> ");
		scanf("%s",&*arr_pointer);	// 공백문자도 받아야하는데
		// scanf [^\n] 이 오류가 나서 gets 로 변경 
		// gets 첫값이 null 이 아니야되는데 null 이라  오류
		input_arr[strlen(input_arr)] = 32;
		arr_pointer = (input_arr +strlen(input_arr));

		// 입력받는 값을 모두 버퍼에 " " 구분해서 저장 

		//
	// 검사부분 각 명령어 검사
	// strstr 해서 며영어가 나올시에 

	// 입력부분
		// 단어검사 
		

	// 프린트 함수 구현 

	// 클리어 함수 구현 

	// 리버스 함수 구현 

	// 복사 함수 구현

	// 아래 단어 밑줄치는거 구현
	}
}