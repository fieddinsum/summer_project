
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<Windows.h>
// ���� 4�ð� + ���� 6�ð� = 10�ð�
// ���ϱ� , ���� ���డ��
// ���� �κ��� �������� �ʾ� �ϴ� ���ε��� ���� ���� �����ϰڽ��ϴ�.
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
							// �� �Է�
	printf(" B input :");
	gets(input_B);
	A_length = strlen(input_A);
	B_length = strlen(input_B);

	if (input_A[0] == 45) { 
		A_length -= 1;
		Status_A = 1;
	}						//���� Ȯ��
	if (input_B[0] == 45) { 
		B_length -= 1;
		Status_B = 1;
	}


	for (int i = 1; i <= A_length; i++) {
		input_A[50 - i] = input_A[A_length - i + Status_A];
	}
	for (int i = 1; i <= B_length; i++) {
		input_B[50 - i] = input_B[B_length - i + Status_B];
	}															//�迭[49] �� 1�� �ڸ��� ���߱�
	for (int i = 0; i < 50 - A_length; i++) {
		input_A[i] = '0';
	}
	for (int i = 0; i < 50 - B_length; i++) {
		input_B[i] = '0';
	}

	for (int j = 0; j < 50; j++) {
		sum_A[49 - j] = (((int)input_A[49 - j]) - 48);			//  ������ ���� intĳ���� ���� 
		sum_B[49 - j] = (((int)input_B[49 - j]) - 48);
	}
	if (Status_A)
		for (int j = 0; j < 50; j++) {
			sum_A[49 - j] = -sum_A[49 - j];					
		}														// ����� ���� �ڸ����� ������ȯ
	if (Status_B) {
		for (int j = 0; j < 50; j++)
			sum_B[49 - j] = -sum_B[49 - j];
	}

	for (int j = 0; j < 50; j++){
		sum[j] = sum_A[j] + sum_B[j];							//�� �ڸ����ں� ���ϱ�
		if (tick == 0 && sum[j] < 0){							
			tick = sum[j];										// ���ۺκ��� ���������� üũ
		}
	}


	for (int j = 0; j < 49; j++) {								// �ڸ����� >10 �˻��� ĳ�� ����	
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
		if (tick < 0) { // ������� ����ĳ����� 
			if (sum[j+1] > 0) {

				if (sum[j] == 0){
					for (int k = j; k>0; k--) {	// ĳ������ ���� 0�� �ƴҶ����� �Ž��� �ö�(���鼭 -9)
						sum[k] = -9;
						if (sum[k-1]!=0) {		// ĳ���� �ؿ��� ���� 1���ҽ�Ŵ
							sum[k] -= 1;
							break;
						}
					}
				}
				sum[j] += 1;
				sum[j + 1] -= 10;
			}
			
			
		}
		else if (sum[j + 1]<0) { // ����� 0 �̶�� ���ĳ�����
			sum[j] -= 1;
			sum[j + 1] += 10;
					}
	}


	for (int j = 0; j < 50; j++) {		// ����� ���� �����ΰ��  ��ȣ����
		if (tick < 0) {
			sum[j] = -sum[j];
			print_status = 45;
		}
		else{
			print_status = 43;
		}
	}
	
	printf("%c ", print_status);
	for (int j = 0; j < 30; j++) {		// ��ȣ�� ��ȣ�� ���
		printf("%d",sum[20 + j]);
	}
	printf("\n");
	return 0;
}