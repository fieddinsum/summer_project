#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<Windows.h>

// 처음에 배열 마지막에 1의자릿수를 고정에 주안점을 두고 코딩
// 부호 있을때의 처리를 하지 못함

int main() {

	char input_A[50] = { 0, };
	char input_B[50] = { 0, };
	int  sum[50] = { 0,};
	int  minus[50] = { 0, };
	int carry_sum = 0;

	int A_length;
	int B_length;

	printf("A input : ");
	gets(input_A);

	printf(" B input :");
	gets(input_B);

	//if(음수) - 대신 0 
	// 양 양
	// 양 음 
	// 음 양



	// =============================  배열[49] 를  1의 자리수로 맞추기
	A_length = strlen(input_A);
	B_length = strlen(input_B);

	for (int i = 1; i <= A_length; i++) {
		input_A[50-i] = input_A[A_length - i];
	}
	for (int i = 1; i <= B_length; i++) {
		input_B[50- i] = input_B[B_length - i];
	}
	for (int i = 0; i < 50 - A_length; i++) {
		input_A[i] = '0';
	}
	for (int i = 0; i < 50 - B_length; i++) {
		input_B[i] = '0';
	}
	// ============================각 자리수를 아스키코드값으로 더해 int 형 배열에 저장  
	for (int j = 0; j < 30; j++) {

		sum[49 - j] = ((int)(input_A[49 - j] + input_B[49 - j])) - 96 + carry_sum;
		if (sum[49-j]<0) 
			sum[49-j] = 0;
			if (sum[49 - j] >= 10) {
				carry_sum = 1;
				sum[49 - j] -= 10;
			}
			else
				carry_sum = 0;						
	}
	// ============================ 출력
	for (int j = 0; j < 30; j++) {
		printf("%d", sum[20+j]);
	}
	printf("\n");
	return 0;
	}