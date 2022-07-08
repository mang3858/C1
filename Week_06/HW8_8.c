//어떤 수에 대해서 소수인가 아닌가를 판별하라.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int num;
	int i;
	int prime;

	printf("Enter a number: ");
	scanf("%d", &num);

	prime = 1;
	for (i = 2; i < num; i++) {
		if (num % i == 0) {
			prime = 0;
			break;
		}
	}

	if (prime == 1)
		printf("소수 이다\n");
	else
		printf("소수가 아니다\n");

	return 0;
}