/*
num이 소수이면 1을 아니면 0을 반환하는 함수 isPrime()을 작성하라.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int isPrime(int num);
int main(void)
{
	int i, j;
	int n;

	printf("Enter a numbe<-1 for exit> ");
	scanf("%d", &n);

	while (n != -1) {
		if (isPrime(n))
			printf("소수입니다.\n");
		else
			printf("소수가 아닙니다.\n");

		printf("Enter a numbe<-1 for exit> ");
		scanf("%d", &n);
	}
}

int isPrime(int num)//num의 소수여부를 반환
{
	int i;

	for (i = 2; i < num; i++) 
		if (num % i == 0)
			return 0;
	return 1;
}