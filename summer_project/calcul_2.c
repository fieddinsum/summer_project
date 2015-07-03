
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<Windows.h>
// 어제 4시간 + 오늘 6시간 = 10시간
// 더하기 , 뺴기 실행가능
// 곱셈 부분이 떠오르지 않아 일단 업로드후 오늘 과제 진행하겠습니다.
int main() {

	char input_A[50] = { 0, };
	char input_B[50] = { 0, };
	int sum_A[50] = { 0, };
	int sum_B[50] = { 0, };
	int  sum[50] = { 0, };
	int carry_sum = 0;
	int tick = 0;
	int A_length = 0;
	int B_length = 0;
	int Status_A = 0;		
	int Status_B = 0;
	int print_status = 0;


	printf("A input : ");
	gets(input_A);
							// 값 입력
	printf(" B input :");
	gets(input_B);
	A_length = strlen(input_A);
	B_length = strlen(input_B);

	if (input_A[0] == 45) { 
		A_length -= 1;
		Status_A = 1;
	}						//음수 확인
	if (input_B[0] == 45) { 
		B_length -= 1;
		Status_B = 1;
	}


	for (int i = 1; i <= A_length; i++) {
		input_A[50 - i] = input_A[A_length - i + Status_A];
	}
	for (int i = 1; i <= B_length; i++) {
		input_B[50 - i] = input_B[B_length - i + Status_B];
	}															//배열[49] 에 1의 자리수 맞추기
	for (int i = 0; i < 50 - A_length; i++) {
		input_A[i] = '0';
	}
	for (int i = 0; i < 50 - B_length; i++) {
		input_B[i] = '0';
	}

	for (int j = 0; j < 50; j++) {
		sum_A[49 - j] = (((int)input_A[49 - j]) - 48);			//  문자형 숫자 int캐스팅 저장 
		sum_B[49 - j] = (((int)input_B[49 - j]) - 48);
	}
	if (Status_A)
		for (int j = 0; j < 50; j++) {
			sum_A[49 - j] = -sum_A[49 - j];					
		}														// 계산을 위해 자리숫자 음수변환
	if (Status_B) {
		for (int j = 0; j < 50; j++)
			sum_B[49 - j] = -sum_B[49 - j];
	}

	for (int j = 0; j < 50; j++){
		sum[j] = sum_A[j] + sum_B[j];							//각 자리숫자별 더하기
		if (tick == 0 && sum[j] < 0){							
			tick = sum[j];										// 시작부분이 음수인지를 체크
		}
	}


	for (int j = 0; j < 49; j++) {								// 자리숫자 >10 검사후 캐리 수행	
		if (sum[49-j] >= 10) {					
			sum[49-j] -= 10;
		 	sum[49 - j - 1] += 1;
		}
		if((sum[j])<= -10){
		sum[49-j] += 10;
		sum[49 - j - 1] -= 1;
	}
	}



	for (int j = 0; j<49; j++) { 
		if (tick < 0) { // 음수라면 음수캐리사용 
			if (sum[j+1] > 0) {

				if (sum[j] == 0){
					for (int k = j; k>0; k--) {	// 캐리값을 위해 0이 아닐때까지 거슬러 올라감(가면서 -9)
						sum[k] = -9;
						if (sum[k-1]!=0) {		// 캐리를 해오고 값을 1감소시킴
							sum[k] -= 1;
							break;
						}
					}
				}
				sum[j] += 1;
				sum[j + 1] -= 10;
			}
			
			
		}
		else if (sum[j + 1]<0) { // 양수나 0 이라면 양수캐리사용
			sum[j] -= 1;
			sum[j + 1] += 10;
					}
	}


	for (int j = 0; j < 50; j++) {		// 출력을 위해 음수인경우  부호제거
		if (tick < 0) {
			sum[j] = -sum[j];
			print_status = 45;
		}
		else{
			print_status = 43;
		}
	}
	
	printf("%c ", print_status);
	for (int j = 0; j < 30; j++) {		// 부호를 기호로 출력
		printf("%d",sum[20 + j]);
	}
	printf("\n");
	return 0;
}