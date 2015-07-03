#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// 소요시간 1시간 

int cmpfunc(const void * a, const void * b)
{
	return (*(int*)a - *(int*)b); 
}
int cmpfunc_str(const void *a, const void *b) {
	
	return strcmp((char*)a, (char*)b);
}

int main()
{
	int values_int[10] = { 0, };
	char values_str[10][100] = { 0, };

	for (int i = 0; i < 10; i++) {
		printf("enter integer[%d/10] : ", i + 1);
		scanf("%d", &values_int[i]);
	}
	qsort(values_int, 10, sizeof(int), cmpfunc);
	printf("result : ");
	for (int i = 0; i < 10; i++) {
		printf(" %d ,", values_int[i]);
	}
	printf("\n");


	for (int i = 0; i < 10; i++){
		printf("enter words[%d/10] : ", i + 1);
		scanf("%s", &values_str[i]);
	}
	qsort(values_str, 10, sizeof(values_str[0]), cmpfunc_str);
	printf("result : ");
	for (int i = 0; i < 10; i++) {
		printf(" %s ,", values_str[i]);
	}
	printf("\n");

		return(0);
	
}