#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//11:01 ����
int main() {

// �ܾ� �Է� ���� �迭 ����
	char input_arr[1000] = { 0, };
	char *arr_pointer = input_arr;
	char cmdword[9];
	int temp = 0;
	int str_length = 0;
	while (1) {
		printf("cmdline> ");
		scanf("%s",&*arr_pointer);	// ���鹮�ڵ� �޾ƾ��ϴµ�
		// scanf [^\n] �� ������ ���� gets �� ���� 
		// gets ù���� null �� �ƴϾߵǴµ� null �̶�  ����
		input_arr[strlen(input_arr)] = 32;
		arr_pointer = (input_arr +strlen(input_arr));

		// �Է¹޴� ���� ��� ���ۿ� " " �����ؼ� ���� 

		//
	// �˻�κ� �� ��ɾ� �˻�
	// strstr �ؼ� �翵� ���ýÿ� 

	// �Էºκ�
		// �ܾ�˻� 
		

	// ����Ʈ �Լ� ���� 

	// Ŭ���� �Լ� ���� 

	// ������ �Լ� ���� 

	// ���� �Լ� ����

	// �Ʒ� �ܾ� ����ġ�°� ����
	}
}