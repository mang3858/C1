/*
정수 n(1이상 20이하)을 입력받고
정수형배열의 원소를 n개 입력받은 후
인덱스 위치 pos와 새로운 원소 element를 입력받아서
배열의 인덱스 위치 pos에 element를 삽입하여
변경된 배열을 출력하는 프로그램을 작성하라.

입력)
6 <- 원소의 개수
10 20 30 40 50 60 <- 6개의 원소
3 99 <- 배열 인덱스 3에 10을 삽입
출력)
10 20 30 99 40 50 60
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int arr[21];
	int n, i, pos, element;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	scanf("%d %d", &pos, & element);

	for (i = n - 1; i >= pos; i--)
		arr[i + 1] = arr[i];
	arr[pos] = element;

	for (i = 0; i < n + 1; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}