#include<stdio.h>
#include<time.h>
#include<windows.h>
#define _CRT_SECURE_NO_WARNINGS
// 15:49 start 
// 16:17 end


int main() {
	int input;
	time_t a, b;
	printf("지금부터 시작합니다 준비가 되면 1을 누르세요\n");
	// 시작 메세지
	scanf("%d", &input) == 1;
	// for 1~10 
	for (int i = 0; i < 10; i++){
		printf(" 이 메세지가 표시된후 %d초후에 1을 입력하세요\n",i+1);
		a = clock();
		scanf("%d", &input);
		b = clock();
		printf("(%.3f초 지났음)\n", (b - a) / 1000.0);
		if (b - a > 1000*(i+1))
			printf("늦었습니다 약간 빠르게 눌러야 합니다 ");
		else if (b - a < 1000*(i+1))
			printf("빨랐습니다 약간 천천히 눌러야 합니다 ");
	}
	return 0;
}