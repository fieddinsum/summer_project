#define _CRT_SECURE_NO_WARNINGS
//5�ð� �Ϸ�
#include<stdio.h>
#include<ctype.h> 
#include<string.h>
#include<stdlib.h>
#include<math.h>
/* �����Բ�
 *  isdigit()�� ���ϰ� non-zero ���� �� �����Ϸ��󿡼���
 *  �׻� 4 �� �����ϴ��� non-zero �� ���� �ý��ۿ� ���� �ٸ��ǰ���?
 *  ���� �� ���߿� non-zero ���� ���ؼ� 0�� �ƴ����� �Ǵ��ϴ� ���� �ִµ� 
 *  non-zero�� �������� ���� ����� ���� ���� �ڵ� ������� �����帳�ϴ�.
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
		if (strlen(arr) < 7) { // 7�ڸ��̻����� �˻�

			if (arr[0] == 45){ // - ��ȣ�����Ǻ� 
				minus = 1;
			}
			for (int i = 0; i < strlen(arr) - minus; i++) { 
				val_casting[i] = ((int)arr[i + minus]);
				val_casting[i] = isdigit(val_casting[i]);
				temp_sum *= val_casting[i];
			}

			if (temp_sum&&strlen(arr)) {     // ��� �������� Ȯ��
				val = atoi((arr + minus));
				if (val <= 10000){			//  ������ ������ Ȯ��
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
	