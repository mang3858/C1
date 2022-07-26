/*
두 수사이의 합 구하기(매개변수를 가지는 value returning 함수의 연습)
아래의 실행결과를 갖는 프로그램을 sum1ToN 함수를 사용하여 써라.

1 부터 5 까지의 합은 15
1 부터 7 까지의 합은 28
1 부터 10 까지의 합은 55
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int sum1ToN(int n); // 함수의 원형
int main(void)
{
	printf("1부터 %d 까지의 합은 %d\n", 5, sum1ToN(5));
	printf("1부터 %d 까지의 합은 %d\n", 7, sum1ToN(7));
	printf("1부터 %d 까지의 합은 %d\n", 10, sum1ToN(10));
}
int sum1ToN(int n) // 함수의 정의
{
	// 1 부터 n 까지의 합을 계산해서 그 값을 return 한다.
	int i;
	int sum = 0;

	for (i = 1; i <= n; i++)
		sum += i;

	return sum;
}