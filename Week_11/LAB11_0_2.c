/*
(매개변수를 가지는 value returning 함수의 연습)
실행예(입력없음)
제곱은 25
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int square2(int x);
int main(void)
{
	int result;

	result = square2(5);
	printf("제곱은 % d\n", result);
}
int square2(int x)
{
	return x * x;
}