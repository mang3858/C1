/*
정수 n 과 m 을 읽어 n 보다 크거나 같은 소수를 작은 것부터 m 개 구하여 이의 합을 출력하는 프로그램을
작성하라
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int n, m;
	int sum = 0;
	int cnt = 0;
	int prime;
	int i;

	scanf("%d", &n);
	scanf("%d", &m);

	while (cnt < m) {
		prime = 1;

		for (i = 2; i < n; i++) {
			if (n % i == 0) {
				prime = 0;
				break;
			}
		}
		if (prime == 1) {
			sum += n;
			cnt++;
		}
		n++;
	}
	printf("%d\n", sum);
}
	