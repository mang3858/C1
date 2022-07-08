/*
m(>=2)과 n(>=m)을 입력으로 받아서
m부터 n까지의 수중
소수들의 합을 출력하는 프로그램을 작성하라
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int m, n;
	int i, j;
	int sum = 0;

	scanf("%d %d", &m, &n);

	for (i = m; i <= n; i++) {
		for (j = 2; j <= i; j++)
			if (i % j == 0)
				break;
		if (i == j)
			sum += i;
	}
	
	printf("%d\n", sum);
	return 0;
}