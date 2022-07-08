/*
수(1 이상의 정수)를 입력받아 이의 자리수를 출력하는 프로그램을 작성하라.
즉, 입력받은 수가 256 이라면 3 을 출력
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int n;
	int cnt = 0;

	scanf("%d", &n);

	while (n > 0) {
		n /= 10;
		cnt++;
	}

	printf("%d\n", cnt);
	return 0;
}