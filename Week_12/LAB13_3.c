/*
총 10 개의 정수를 입력 받아서, 홀수와 짝수를 구분 지어서 출력하는 프로그램을 작성해보자. 일단 홀수부터 출력하고 나서, 짝수를 출력하도록 하자.

힌트: 숫자를 읽어서 짝수인가 홀수인가를 보고 각각 짝수배열, 홀수배열에 넣는다. 짝수배열을 위한 인덱스(예:
evenIndex), 홀수배열을 위한 인덱스(예: oddIndex)가 필요하다. 이들 인덱스를 0 으로 초기화시키는 것을 잊지말라
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#define SIZE 10 
int main(void)
{
	int odd[SIZE], even[SIZE];
	int num;
	int i, oddIndex = 0, evenIndex = 0;

	for (i = 0; i < SIZE; i++)
	{
		printf("Enter a number:");
		scanf("%d", &num);
		// num이 짝수이면 even에 홀수이면 odd에 넣는다.각각 인덱스를 사용한다.
		if (num % 2 != 0) 
			odd[oddIndex++] = num;
		else 
			even[evenIndex++] = num;
	}
	//A) 
	printf("\n 홀수 출력:");
	for (i = 0; i < oddIndex; i++)
		printf("%d ", odd[i]);
	//B) 
	printf("\n 짝수 출력:");
	for (i = 0; i < evenIndex; i++)
		printf("%d ", even[i]);
	printf("\n");

	return 0;
}