#include<stdio.h>
#include<time.h>
#include<windows.h>
#define _CRT_SECURE_NO_WARNINGS
// 15:49 start 
// 16:17 end


int main() {
	int input;
	time_t a, b;
	printf("���ݺ��� �����մϴ� �غ� �Ǹ� 1�� ��������\n");
	// ���� �޼���
	scanf("%d", &input) == 1;
	// for 1~10 
	for (int i = 0; i < 10; i++){
		printf(" �� �޼����� ǥ�õ��� %d���Ŀ� 1�� �Է��ϼ���\n",i+1);
		a = clock();
		scanf("%d", &input);
		b = clock();
		printf("(%.3f�� ������)\n", (b - a) / 1000.0);
		if (b - a > 1000*(i+1))
			printf("�ʾ����ϴ� �ణ ������ ������ �մϴ� ");
		else if (b - a < 1000*(i+1))
			printf("�������ϴ� �ణ õõ�� ������ �մϴ� ");
	}
	return 0;
}