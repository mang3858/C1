/*
- 어떤 수(100 이하의 수라고 가정)를 읽어서 그 수만큼의 난수(0 부터 99 까지의)를 생성하여 평균과
  발생시킨 난수를 출력하는 프로그램을 작성하라.
- 출력시 아래의 실행결과처럼 5 개의 데이터를 한줄에,
  그리고 각 숫자는 5 개의 문자영역을 차지(%5d 사용)하고 오른쪽 줄맞춤 되도록 하라.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 
int main(void)
{
	int data[100];
	int num;
	int i;
	int sum = 0;
	srand(time(NULL));

	printf("Enter the number of random numbers<<= 100>: ");
	scanf("%d", &num);

	for (i = 0; i < num; i++) {
		data[i] = rand() % 100;
		sum += data[i];
	}
	printf("난수의 평균은 %d\n", sum / num);
	
	printf("발견된 난수는\n");
	for (i = 0; i < num; i++) {
		printf("%5d", data[i]);
		if (i % 5 == 4)
			printf("\n");
	}
	printf("\n");

	return 0;
}