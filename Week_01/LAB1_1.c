/*
5 개의 정수를 배열로 입력 받아서 총합과 평균을 출력하고
그 배열의 내용을 화면에 출력하는 프로그램을 작성하라.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num[5];
	int i, sum = 0, ave = 0;
	//int arr[5];

	for (i = 0; i < 5; i++) {
		printf("Enter %dth number : ", i + 1);
		scanf("%d", &num[i]);

		sum += num[i];
	}

	printf("-----------------------------\n");
	printf("총합은 %d\n", sum);
	printf("평균은 %d\n", sum / 5);
	printf("-----------------------------\n");

	for (i = 0; i < 5; i++)
		printf("array[%d] : %d\n", i, num[i]); 

	return 0;
}