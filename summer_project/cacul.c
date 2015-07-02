#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<Windows.h>




int main() {

	char input_A[50] = { 0, };
	char input_B[50] = { 0, };
	int  sum[50] = { 0,};
	int  minus[50] = { 0, };
	int carry_sum = 0;
	int carry_minus = 0;
	int tick = 0;
	int tock = 0;

	int A_length;
	int B_length;

	
	printf(" A input\n");
	gets(input_A);
	printf(" B input\n");
	gets(input_B);
	//if(음수) - 대신 0 
	// 양 양
	// 양 음 
	// 음 양
	//-d
	
	/// 음수인경우 - 를 받아서 2의 보수 처리로 + 로 만듬
	
	
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
		

			minus[49 - j] = ((int)(input_A[49 - j] - input_B[49 - j]));
			
			// 1) 올바른 값 2) -1로시작하는 값 3) 0
	}
	for (int j = 0; j < 49; j++) {
		

		if (minus[j]>0 && tick==0) {
			tick = 1;	// 앞자리가 양수
		}
		if (minus[j] < 0 && tick == 0) {
			tick = 2;	// 앞자리가 음수 
		}   	}
	
	

	// ============================ 출력
	for (int j = 0; j < 30; j++) {
		printf("%d", sum[20+j]);
	}
	printf("\n");
	for (int j = 0; j < 30; j++) {
		printf("%d", minus[20 + j]);
	}
	return 0;
	}