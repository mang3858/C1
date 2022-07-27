/*
LAB13_2를 사용자 정의 함수를 사용하여 다시 작성한다
함수 indexSearch를 사용한다. 원형 및 설명은 다음과 같다.

int indexSearch(int a[], int size, int searchKey);
// 배열 a안에 searchKey값이있는가를 탐색하여 해당 첨자를 반환한다. searchKey값이 없는 경우는 -1을 반환한다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int indexSearch(int a[], int size, int searchKey);
#define SIZE 12 

int main(void)
{
	int incomes[SIZE] = { 11, 22, 33, 44, 55, 66, 11, 22, 33, 44, 55, 66 };
	int income;
	int id;

	printf("탐색할 수입은? ");
	scanf("%d", &income);

	id = indexSearch(incomes, SIZE, income);
	if (id == -1) if //((id = indexSearch(incomes, SIZE, income)) == -1)
		printf("수입 %d 를 갖는 달은 없습니다\n", income);
	else
		printf("수입 %d 를 갖는 첫번째 달은 %d 월입니다\n", income, id + 1);
	
	return 0;
}

// flag 변수 없이 작성해보자!! 
int indexSearch(int a[], int size, int searchKey)
{
	int i;

	for (i = 0; i < size; i++)
		if (a[i] == searchKey)
			return i;
	return -1;
}