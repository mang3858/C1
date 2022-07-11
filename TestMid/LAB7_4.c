/*
입력받은 수까지 3 의 배수와 5 의 배수를 출력하는 프로그램을 작성하라.
요구사항: 논리연산자를 사용한다. while 문, if 문 사용.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int n;
	int i;

	scanf("%d", &n);

	i = 1;
	while (i <= n) {
		if (i % 3 == 0 || i % 5 == 0)
			printf("%d ", i);
		i++;
	}
	printf("\n");

	return 0;
}