#include<stdio.h>

// 09:51 시작
// 11:23 마감
//14:50 ~ 15:44 재검토 
void calcul(int decimal, int i) {
	for (int j = 1; j <= decimal - i; j++) {
		printf(" ");
	}
	for (int k = 1; k < 2 * i; k++) {
		printf("%d", k);
	}
}


int main() {
	int decimal = 0;
	int tick = 0;
	int control = 1;
	printf(" 숫자를 입력하세요 : ");
	scanf_s("%d", &decimal);
	for (int i = 1; i <= 2*decimal ;i++) {
		calcul(decimal, control);
		printf("\n");
		if (i == 5 || tick == 1)   {
			tick = 1;
			control = i - 2;
			if (i == -1) {
				return 0;
			}
		}
	}

}