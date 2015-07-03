#define PI 3.14159265
#include<stdio.h>
#include<math.h>

// 25min

int main() {
	int i, x;
	double ret,ret_2, val;
	val = PI / 180;		//radian value 

	for (x = 0; x <= 360; x += 15) {	
		ret = sin(x*val);
		printf("sin(%3d) : %.3lf", x, ret);
		for (i = -15; i < ret * 10; i++) {		//sin draw 
			printf(" ");
		}
		printf(" *\n");
	}
	printf("\n\n==========================================\n");

	for (x = 0; x <= 360; x += 15) {
		ret_2 = cos(x*val);
		printf("cos(%3d) : %.3lf", x, ret_2);	// cos draw 
		for (i = -15; i < ret_2 * 10; i++) {
			printf(" ");
			}
			printf(" *\n");
		}
	
			return 0;
}





// sin cos 함수를 이해 
// 아래 방향이 x 축이 되어야 그리기가 쉽다 
// for문을 통하여 각도를 지정하고 (0~360) 해당 각도에서 나오는 사인 값의 
// 위치에 * 을 표시한다. 코사인은 +를 표시한다.
// 그래프가 멋있게 보이려면 커브가 다소 과장되어 보이도록 하는것이 좋다.
// 그래프는 정확해야된다 대강 커브만 맞으면 되는것이 아니다