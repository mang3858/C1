/*
메르센 소수를 출력하는 프로그램을 작성하라.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
//2 의 n 승을 반환하는 함수
long long twoToThePower(int n)
{
	int i;
	long long pow = 1;

	for (i = 1; i <= n; i++)
		pow *= 2;
	return pow;
}

// x 가 소수이면 1 을 아니면 0 을 반환하는 함수
int isPrime(long long x)
{
	long long i;

	for (i = 2; i <= x - 1; i++)
		if (x % i == 0)
			return 0;
	return 1;
}

int main(void)
{
	long long i;
	long long num;
	long long value;

	printf("Enter a number:");
	scanf("%lld", &num);

	for (i = 2; i <= num; i++) {
		value = twoToThePower(i) - 1;
		if (isPrime(value) == 1)
			printf("(2 ^ %lld - 1) = %lld은 메르센 소수이다\n", i, value);
	}
}