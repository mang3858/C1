//5 단위마다의 합을 출력하는 프로그램 작성
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int i, j;
	int sum;
	
	sum = 0;
	for (i = 1; i <= 30; i++) {
		sum += i;
		if (i % 5 == 0) {
			printf("%d - %d까지 합 = %d\n", i - 4, i, sum);
			sum = 0;
		}
	}

	return 0;
}
