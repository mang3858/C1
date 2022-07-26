/*
(매개변수가 없는 value returning 함수의 연습)
실행예) 제곱은 25
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int square1(void); 
int main(void)
{
	int result;

	result = square1();
	printf("제곱은 %d\n", result);
}
int square1(void)
{
	int x = 5;
	
	return x * x;
}