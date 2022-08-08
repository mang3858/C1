/*
소수 비소수 구분(배열)

n(20 이하)을 입력으로 받아
n개의 정수(1보다 큰)를 입력받아서
이들 정수를 소수와 소수가 아닌 것으로 구분하려한다.
소수(들)을 먼저 출력한 후에 소수가 아닌 것(들)을 출력하는 프로그램을 작성하라.

주의:
소수와 비소수를 같은 줄에 출력하고 수와 수 사이에 공백 1개를 둔다.

실행예:
입력)
6 <- 배열의 크기
11 12 13 14 15 16 <- 배열의 원소
출력)
11 13 12 15 16 <- 소수인 11, 13을 출력하고 소수 아닌 정수를 출력
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int getPrime(int num)
{
	int i;

	for (i = 2; i < num; i++)
		if (num % i == 0)
			return 0;
	return 1;
}

int main(void)
{
	int arr[21], prime[21], nonPrime[21];
	int i, num;
	int primeIndex = 0, nonPrimeIndex = 0;

	scanf("%d", &num);
	for (i = 0; i < num; i++)
		scanf("%d", &arr[i]);

	for (i = 0; i < num; i++) {
		if (getPrime(arr[i]))
			prime[primeIndex++] = arr[i];
		else
			nonPrime[nonPrimeIndex++] = arr[i];
	}
	for (i = 0; i < primeIndex; i++)
		printf("%d ", prime[i]);
	for (i = 0; i < nonPrimeIndex; i++)
		printf("%d ", nonPrime[i]);
	printf("\n");

	return 0;
}
