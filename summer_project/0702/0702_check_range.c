#define _CRT_SECURE_NO_WARNINGS
//5시간 완료
#include<stdio.h>
#include<ctype.h> 
#include<string.h>
#include<stdlib.h>
#include<math.h>
/* 교수님께
 *  isdigit()의 리턴값 non-zero 값이 제 컴파일러상에서는
 *  항상 4 를 리턴하던데 non-zero 의 값은 시스템에 따라 다른건가요?
 *  제가 식 도중에 non-zero 값을 곱해서 0이 아닌지를 판단하는 식이 있는데 
 *  non-zero를 수식으로 쓰는 방법은 좋지 않은 코딩 방법인지 질문드립니다.
 */


int main() {
	
	while (1) {
		char arr[100] = { 0 };	
		char minus = 0;
		int val = 0;
		int val_casting[5] = { 0 };
		int temp_sum = 1;

		printf(" enter value between -10000~10000\n");
		gets(arr);
		if (strlen(arr) < 7) { // 7자리이상인지 검사

			if (arr[0] == 45){ // - 부호인지판별 
				minus = 1;
			}
			for (int i = 0; i < strlen(arr) - minus; i++) { 
				val_casting[i] = ((int)arr[i + minus]);
				val_casting[i] = isdigit(val_casting[i]);
				temp_sum *= val_casting[i];
			}

			if (temp_sum&&strlen(arr)) {     // 모두 숫자인지 확인
				val = atoi((arr + minus));
				if (val <= 10000){			//  범위값 내인지 확인
					printf("your number is %c%d \n", (minus * 2 + 43), val);
				}
			}
			else {
				printf("incorrect number try again \n");

			}

		}
		else {
			printf("incorrect number try again \n");
		}
	}
		return 0;
	
	}
	