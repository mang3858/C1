/*
10 개의 소수를 출력하라. 
while 문으로 풀어보자. 
*/
#include <stdio.h>
int main(void) {
	int i, j;
	int prime;

	i = 1;
	prime = 2;
	while (i <= 10) {
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
		prime++;//그 다음 소수
	}

	return 0;
}