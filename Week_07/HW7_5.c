//어떤 수(1 이상)의 2 진수를 거꾸로 출력하는 프로그램을 작성하라.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int num;

	printf("Enter a number: ");
	scanf("%d", &num);

	while (num > 0) {
		printf("%d", num % 2);
		num /= 2;
	}
	printf("\n");

	return 0;
}