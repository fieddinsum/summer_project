#include<stdio.h>  
#include <stdlib.h> 
// 09:34 ���� 
// 09:50 �������� 
// 11:32 �� ����


int main() {


	int input_n = 0;
	int **box;
	int i=0;
	int x=0, =0;
	int k = (input_n*input_n);
	int symbol = 1;

	printf("N �� �Է��ϼ��� (N = 3~9) : ");
	scanf_s("%i", &input_n);
	k = (input_n*input_n);**

	box = (int **)calloc(input_n, sizeof(int *));
	for (i = 0; i<input_n; i++)
		box[i] = (int *)calloc(input_n, sizeof(int));
	// ¦�� Ȧ�� ���� 
	// ¦�� : [0][input]���� 
	// Ȧ�� : [input][0] ����

	for (int j = input_n; j > 0; j--)
	{	// 5 4 3 2 1 
		for (i = 0; i < j; i++)
			// 5 4 3 2 1  
		{
			y += symbol;
			box[x][input_n-y] += k--; // 21 22 23 24 25
		}
		// box[0][0] ���� ����
		for (i = 0; i < j - 1; i++) {
			x += symbol;
			box[x][y] += k--; // 20 19 18 17 
			//box[input_n-1][0] ���� ���� 
		}

		symbol *= -1;
		// ���� 	

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
for (i = 0; i < j; i++)              // ������ä���
{
y += symbol;
snail[x][y] += k--;
}

for (i = 0; i < j - 1; i++)            // ���ο�ä���
{
x += symbol;
snail[x][y] += k++;
}

symbol *= -1;
}
*/