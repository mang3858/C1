/*
0혹은 1을 갖는 2개의 배열(크기 3)을 생성시켜 출력하고 같은 배열이 생성될
때까지 반복하는 프로그램을 작성하려 한다. 실행결과는 아래와 같다.

힌트:
do while문을 쓸 수 있다. 위의 프로그램처럼 배열이 (->같은가를 체크한다.
same이 1이 될 때까지(즉 두 개의 배열이 같아질 때까지) 반복한다.

srand 를 사용하지 않았을 때의 예시는 아래의 오른쪽 실행 예와 같다.
srand 를 사용하면 다양한 결과가 나올 것이다. (오른 쪽 밑의 예)

이전 LAB13_1F 에서 새로 정의한 2 개의 함수는 그대로 사용하고
하나의 함수를 더 추가해서 정의한다. 함수의 원형 및 설명은 다음과 같다.

void generateArray(int a[], int size); // 새로이 추가하는 함수
									   // 배열 a 에 0 혹은 1 의 값을 넣는다.

void printArray(int a[], int size);
int equalArray(int a[], int b[], int size);
*/
#define SIZE 3 
#include <stdlib.h> 
#include <time.h> 
#include <stdio.h>

void printArray(int a[], int size);
int equalArray(int a[], int b[], int size);
void generateArray(int a[], int size);

void printArray(int a[], int size); 
int equalArray(int a[], int b[], int size); 
void generateArray(int a[], int size);

int main(void)
{
	int arrayA[SIZE], arrayB[SIZE];
	int count = 0;
	srand(time(NULL)); //주어진 실행결과를 확인한 후 주석을 취소하여 여러 번 실행시켜본다
	do
	{
		printf("\n%d 번째 시도\n", ++count);
		generateArray(arrayA, SIZE);
		generateArray(arrayB, SIZE);
		// 두 개의 배열 출력 부분 추가
		printf("ArrayA:");
		printArray(arrayA, SIZE);
		printf("ArrayB:");
		printArray(arrayB, SIZE);
		
	} while (!equalArray(arrayA, arrayB, SIZE));
}

void generateArray(int a[], int size)
{
	int i, j;

	for (i = 0; i < size; i++)
		a[i] = rand() % 2;
	
	return;
}

void printArray(int a[], int size) // 앞 문제의 것을 그대로 사용
{
	int i;

	for (i = 0; i < size; i++)
		printf("%d ", a[i]);
	printf("\n");
	return;
}

int equalArray(int a[], int b[], int size) // 앞 문제의 것을 그대로 사용
{
	int i;

	for (i = 0; i < SIZE; i++)
		if (a[i] != b[i])
			return 0;
	return 1;
}