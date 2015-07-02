#include<stdio.h>  
#include <stdlib.h> 
// 09:34 시작 
// 09:50 빠른포기 
// 11:32 재 시작


int main() {


	int input_n = 0;
	int **box;
	int i=0;
	int x=0, =0;
	int k = (input_n*input_n);
	int symbol = 1;

	printf("N 을 입력하세요 (N = 3~9) : ");
	scanf_s("%i", &input_n);
	k = (input_n*input_n);**

	box = (int **)calloc(input_n, sizeof(int *));
	for (i = 0; i<input_n; i++)
		box[i] = (int *)calloc(input_n, sizeof(int));
	// 짝수 홀수 검증 
	// 짝수 : [0][input]시작 
	// 홀수 : [input][0] 시작

	for (int j = input_n; j > 0; j--)
	{	// 5 4 3 2 1 
		for (i = 0; i < j; i++)
			// 5 4 3 2 1  
		{
			y += symbol;
			box[x][input_n-y] += k--; // 21 22 23 24 25
		}
		// box[0][0] 까지 접근
		for (i = 0; i < j - 1; i++) {
			x += symbol;
			box[x][y] += k--; // 20 19 18 17 
			//box[input_n-1][0] 까지 접근 
		}

		symbol *= -1;
		// 이후 	

		for (int i = 1; i < input_n; i++) {

			for (int j = 0; j < input_n; j++) {
				printf("%d", box[i, j]);
			}
			printf("\n");
		}
}



	for (i = 0; i < input_n; i++) {
	free(box[i]);
	}
	free(box);

	return 0;


}

/*
for (j = input; j > 0; j--)
{
for (i = 0; i < j; i++)              // 가로행채우기
{
y += symbol;
snail[x][y] += k--;
}

for (i = 0; i < j - 1; i++)            // 세로열채우기
{
x += symbol;
snail[x][y] += k++;
}

symbol *= -1;
}
*/