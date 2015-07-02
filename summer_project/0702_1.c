#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<Windows.h>
#include<time.h>
// 14:40 시작 
// 14:57 종료 
int main() {

	int second ,minute ,hour = 0;
	time_t startTime ,endTime =0;
	float gap = 0;
	printf("Insert Hour,Minute,Second : ");
	scanf("%d,%d,%d", &hour, &minute, &second);
	if ((hour > 24 || hour < 0 || minute >60 || minute < 0 || second>60 ||
		second < 0)) {
		printf("Incorrect time value \n");
		return 0;
	}
	while (1) {

		Sleep(1000-gap);
		startTime = clock();
		second++;
		if (second == 60){
			second = 0;
			minute++;
		}
		if (minute == 60) {
			minute = 0;
			hour++;
		}
		if (hour == 24) {
			hour = 0;
		}
		printf("%d : %d : %d\n", hour, minute, second);
		endTime = clock();
		gap = (endTime - startTime) / (CLOCKS_PER_SEC);
	}
}