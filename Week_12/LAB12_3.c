/*
7 일간의 수입을 읽어들여서 가장 큰 수입을 출력하는 프로그램을 작성하라.
유의사항: 아래 제시한 프로그램 틀처럼 for 문을 3 개 사용하라.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main(void)
{
	int incomes[7];
	int i;
	int max = -1;

	for (i = 0; i < 7; i++) {
		printf("Enter thr income: ");
		scanf("%d", &incomes[i]);
	}
	printf("-----------------------------\n");

	for (i = 0; i < 7; i++) 
		if (max < incomes[i])
			max = incomes[i];
	printf("The best income is %d\n", max);

	printf("Incomes are\n");
	for (i = 0; i < 7; i++)
		printf("%d ", incomes[i]);
	printf("\n");

	return 0;
}