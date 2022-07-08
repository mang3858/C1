//정수 n을 입력받고 이 정수 n의 약수의 합을 출력하는 프로그램을 작성하라
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int i;
	int n;
	int sum = 0;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		if (n % i == 0)
			sum += i;
	}

	printf("%d\n", sum);
	return 0;
}