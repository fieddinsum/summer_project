#include<stdio.h>
// 16:21 시작

int main() {


	int computer_rsp;
	int my_rsp;
	char arr[3] = { '가위', '바위', '보' };
	int computer_score;
	int my_score;

	while (1)
	{
		printf("What?(0:가위 1:바위 2:보) : ")
			;
		scanf_s("%d", &my_rsp);
		printf("\n %s 을 냈습니다", arr[my_rsp]);
		// 내 입력 출력 
		// 컴퓨터 랜덤함수 
		// 가위바위보 비교
		// 스코어 책점
	}
}
