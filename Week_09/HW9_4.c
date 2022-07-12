/*
 10 개의 소수를 출력하라. do while 문으로 풀어보자
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int i, j;
	int prime;
	
	i = 1;
	prime = 2;
	do {
		j = 2;
		while (j <= prime) {
			if (prime % j == 0) 
				break;
			j++;
		}
		if (prime == j) {
			printf("%d번째 소수는 %d\n", i, prime);
			i++;
		}
		prime++;

	} while (i <= 10);

	return 0;
}