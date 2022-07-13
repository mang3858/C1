/*
임의의 두 수 m과 n을 입력으로 받아서 m에서 n까지의 합을 출력하는
프로그램을 작성하라. main함수는 그대로 두고 새로운 함수 printSumMToN의 원형과
정의 부분만 추가하라.(m이 n보다 작거나 같다고 가정한다)

Enter two numbers: 3 5
3~ 5의 합: 12
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
void printSumMToN(int a, int b);//printSumMToN의 원형 추가
int main()
{
	int m, n;

	printf("Enter two numbers : ");
	scanf("%d %d", &m, &n);
	printSumMToN(m, n);

	return 0;
}
// printSumMToN의 정의 추가
void printSumMToN(int a, int b)
{
	int i;
	int sum = 0;

	for (i = a; i <= b; i++)
		sum += i;
	printf("%d~%d의 합: %d\n", a, b, sum);

	return;
}