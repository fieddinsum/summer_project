#include <stdio.h>
#include <time.h>


int main(){
int i, j = 0;
	int prime_count = 0;
	float start_time = 0;
	float end_time = 0;

	start_time = clock();
	for (i = 2; i <= 1000000; i++) {
		for ( j = 2; j <= i; j++) {
			if (i == j) {
				prime_count++;
			}
			if (i%j == 0) {
				break;
			}
			
		}
	}
	end_time = clock();
	printf("%d \n %f", prime_count, (end_time - start_time)/CLOCKS_PER_SEC);
	// 10000		0.090	(1229)
	// 100000		6.033	(9592)
	// 1000000		535.260 (78498)
	// 10000000     infinite
}