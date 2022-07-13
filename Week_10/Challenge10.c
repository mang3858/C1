/*
 피보나치 수열 값을 출력하는 프로그램을
작성하라. 아래에서 main함수는 그대로 두고 함수 printFibo만 정의하면 된다. printFibo(n)은 (n + 1)번째 값을 출력하는 함수를 의미한다.

실행예:
몇개의 피보나치 수열값을 출력할까요?(3보다 큰 정수): 7
1 1 2 3 5 8 13
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
void printFibo(int n);
int main(void)
{
	int num, i;

	printf("몇개의 피보나치 수열값을 출력할까요?(3보다 큰 정수):");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
		printFibo(i);
	printf("\n");

	return 0;
}
void printFibo(int n) // (n + 1)번째 값을 출력
{
	int j, a = 1, b = 1, c = 0;

	if (n == 0 || n == 1)
		printf("1 ");
	else
	{
		for (j = 1; j < n; j++)
		{
			c = a + b;
			a = b;
			b = c;
		}
		printf("%d ", c);
	}

	return;
}