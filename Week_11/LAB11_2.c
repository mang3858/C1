/*
두 수(x와 y)를 입력받아서 x의 y승을 구하는 함수를 정의하세요.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int pow(int a, int b);
int main(void)
{
	int x, y;

	printf("Enter the number X: ");
	scanf("%d", &x);
	printf("Enter the number Y: ");
	scanf("%d", &y);

	printf("%d ^ %d == %d\n", x, y, pow(x, y)); /* 이부분을 함수 호출로 채우세요 */
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