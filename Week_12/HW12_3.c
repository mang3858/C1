/*
7 일간의 수입을 읽어들여서 아래를 출력하는 프로그램을 작성하라.
	1)가장 큰 수입과 해당 날
	2)총점, 평균 그리고 평균보다 수입이 높았던 날과 그 수입

힌트:
- 1)에서 해당 날을 구하기위해서 별도의 변수(bestIndex)가 필요하다.
- 1)을 성공적으로 수행시킨 후 2)를 추가하여 실행시키라
- 2)에서 총점과 평균을 계산한 후 별도의 for 문을 아래와 같이 사용한다.
	for(i = 0; i < 7; i++)
		if (incomes[i] > average)
			printf(...);
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main(void)
{
	int incomes[7];
	int i;
	int max = -1;
	int bestIndex;
	int sum = 0;
	double ave;

	for (i = 0; i < 7; i++) {
		printf("Enter thr income of day %d: ", i+1);
		scanf("%d", &incomes[i]);
	}
	printf("-----------------------------\n");

	for (i = 0; i < 7; i++) {
		if (max < incomes[i]) {
			max = incomes[i];
			bestIndex = i;
		}
	}
	printf("The best income is %d in day %d\n", max, bestIndex+1);
	printf("-----------------------------\n");

	for (i = 0; i < 7; i++)
		sum += incomes[i];
	ave = (double)sum / 7;
	printf("The total is %d\n", sum);
	printf("The average is %.1f\n", ave);

	printf("The good days and their incomes are\n");
	for (i = 0; i < 7; i++)
		if (incomes[i] > ave)
			printf("day %d: %d\n", i+1, incomes[i]);

	return 0;
}