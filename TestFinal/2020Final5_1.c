/*
배열앞에 삽입

크기가 30인 정수형 배열을 선언하자.

정수 n(1이상 20이하)을 입력받고
정수형배열의 원소를 n개 입력받은 후
새로운 정수 element를 입력받아서
이 element를 배열의 가장 앞에 삽입하여
변경된 배열을 출력하는 프로그램을 작성하라.

실행예:
입력)
6 <- 원소의 개수
44 22 33 44 33 66 <- 6개의 원소
10
출력)
10 44 22 33 44 33 66 <- 변경된 배열: 배열 원소의 개수는 7이 됨에 주의
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int arr[21];
	int n, i, element, temp;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	scanf("%d", &element);

	for (i = n - 1; i >= 0; i--) 
		arr[i+1] = arr[i];
	arr[0] = element;

	for (i = 0;i < n + 1; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}
