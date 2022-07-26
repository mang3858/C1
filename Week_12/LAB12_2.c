/*
0 부터 99 까지의 난수 10 개를 정수형 배열 data 에 넣어서 이를 출력하는 프로그램을 작성하라
발생한 난수의 평균을 구하여 출력하는 부분을 추가하라.
힌트 및 요구사항: 총 3 개의 for 문을 사용(난수 발생, 총합계산, 배열요소출력)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 
int main(void){	int i;	int data[10];	int total = 0;	int ave;	srand(time(NULL));	for (i = 0; i < 10; i++)		data[i] = rand() % 100;	for (i = 0; i < 10; i++) 		total += data[i];	ave = total / 10;	printf("평균은 %d\n", ave);	for (i = 0; i < 10; i++)		printf("%d ", data[i]);	printf("\n");	return 0;}