/* 
0 부터 9 까지의 개수를 세기위해 크기가 10 인 정수형 배열 count 를 사용하라.
즉, count[0]에 0 의 개수 저장, … , count[9]에 9 의 개수 저장
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
int main(void)
{
	int num[100], count[10] = { 0 };
	int i, n;

	printf("Enter the number of random numbers:(<= 50): ");
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		num[i] = rand() % 10;
		count[num[i]]++;
	}
	for (i = 0; i < 10; i++)
		printf("%d의 개수는 %d\n", i, count[i]);

	printf("-----------------------------------\n");
	printf("발생된 난수는\n");
	for (i = 0; i < n; i++) {
		printf("%5d", num[i]);
		if (i % 5 == 4)
			printf("\n");
	}
}