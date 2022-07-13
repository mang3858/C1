/*
세 개의 수를 입력받아서 큰 수를 출력하는 프로그램을 작성하라. 큰수를 찾아 출력하는 부분을 함수화하라.

Enter three numbers: 5 10 7
The Biggest number is 10.

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
void findNPrintBiggest(int a, int b, int c); // 함수의 원형 
int main(void)
{
	int num1, num2, num3;

	printf("Enter three numbers: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	findNPrintBiggest(num1, num2, num3);

	return 0;
}

void findNPrintBiggest(int a, int b, int c) // 함수의 정의 
{
	int big;

	if (a > b && a > c)
		big = a;
	else if (b > a && b > c)
		big = b;
	else
		big = c;

	printf("The Biggest number is %d\n", big);

	return;
}