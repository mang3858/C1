/*
LAB11_2에서 정의한 pow(int a,int b) function을 이용해서 5의 0승에서 10승까지 화면에 출력하는 프로그램을 작성하세요.
주의사항 : LAB11_2에서 정의한 pow함수를 그대로 사용하라.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int pow(int a, int b);
int main(void)
{
	int i;

	for (i = 0; i <= 10; i++)
		printf("5 ^ %d == %d\n", i, pow(5, i));

	return 0;
}

int pow(int a, int b)
{
	int i;
	int power = 1;

	for (i = 0; i < b; i++)
		power *= a;

	return power;
}