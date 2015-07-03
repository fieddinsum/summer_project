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





// sin cos �Լ��� ���� 
// �Ʒ� ������ x ���� �Ǿ�� �׸��Ⱑ ���� 
// for���� ���Ͽ� ������ �����ϰ� (0~360) �ش� �������� ������ ���� ���� 
// ��ġ�� * �� ǥ���Ѵ�. �ڻ����� +�� ǥ���Ѵ�.
// �׷����� ���ְ� ���̷��� Ŀ�갡 �ټ� ����Ǿ� ���̵��� �ϴ°��� ����.
// �׷����� ��Ȯ�ؾߵȴ� �밭 Ŀ�길 ������ �Ǵ°��� �ƴϴ�