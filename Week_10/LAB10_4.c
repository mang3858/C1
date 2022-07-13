/*
임의의 수를 입력으로 받아서 1에서 그 수까지의 합을 출력하는 프로그램을 작성하라.
main함수는 그대로 두고 새로운 함수 printSum1toN의 정의부분만 추가하라.

Enter a number: 3
1~ 3의 합: 6
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
void printSum1ToN(int a);
int main()
{
	int n;

	printf("Enter a number : ");
	scanf("%d", &n);

	printSum1ToN(n);

	return 0;
}
void printSum1ToN(int a)
{
	int sum = 0;
	int i;

	for (i = 1; i <= a; i++)
		sum += i;
	printf("%d~%d의 합: %d\n", 1, a, sum);

	return;
}