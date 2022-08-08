/*
키 개수 세기(배열)

정수 n(1이상 20이하)을 입력받고
정수형배열의 원소를 n개 입력받고
key 값을 입력받은후
이 배열안에 key 값이 몇개 있는 가를 출력하는 프로그램을 작성하라.

실행예:
입력)
6 <- 원소의 개수
11 22 33 44 33 66 <- 6개의 원소
33 <- key값
출력)
2
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int arr[21];
	int num, i, key;
	int found;
	int cnt = 0;

	scanf("%d", &num);
	for (i = 0; i < num; i++)
		scanf("%d", &arr[i]);
	scanf("%d", &key);

	for (i = 0; i < num; i++) 
		if (arr[i] == key)
			cnt++;
	printf("%d\n", cnt);

	return 0;
}