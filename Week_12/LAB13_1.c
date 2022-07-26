/*
세 개의 배열, arrayA, arrayB, arrayC 아래의 코드에서처럼 선언, 초기화한 후
1) arrayA의 값을 arrayB에 복사하라. 즉 arrayA와 arrayB는 같은 값을 같게 된다.
2) arrayA의 값을 역순으로 arrayC에 복사하라. 즉 arrayC는 1, 4, 3, 2, 1을 같게 된다.
3) arrayA, arrayB, arrayC를 출력한다.
4) arrayA와 arrayB가 같은 가를 판별하라.
5) arrayA와 arrayC가 같은 가를 판별하라.
*/
#define SIZE 5 
#include <stdio.h> 
int main(void)
{
	int arrayA[SIZE] = { 1, 2, 3, 4, 1 };
	int arrayB[SIZE];
	int arrayC[SIZE];
	int i;
	int same;
	//1)2) 
	for (i = 0; i < SIZE; i++)
	{
		arrayB[i] = arrayA[i];
		arrayC[SIZE - i - 1] = arrayA[i];
	}
	//3) 
	printf("ArrayA:");
	for (i = 0; i < SIZE; i++) 
		printf("%d ", arrayA[i]);
	printf("\n");
	printf("ArrayB:");
	for (i = 0; i < SIZE; i++) 
		printf("%d ", arrayB[i]);
	printf("\n");
	printf("ArrayC:");
	for (i = 0; i < SIZE; i++) 
		printf("%d ", arrayC[i]);
	printf("\n");
	//4) 
	same = 1; // 일단 두 배열이 같다고 값을 설정한 후
	 // 두개의 배열이 같은가 다른가를 체크한다. 다르면 same을 0으로 설정한다. 
	for (i = 0; i < SIZE; i++)
		if (arrayA[i] != arrayB[i]) {
			same = 0;
			break;
		}
	if (same)
		printf("ArrayA와 arrayB는 같다\n");
	else
		printf("ArrayA와 arrayB는 다르다\n");
	//5) 4)와 유사하게 작성한다. 
	same = 1;
	for (i = 0; i < SIZE; i++)
		if (arrayA[i] != arrayC[i]) {
			same = 0;
			break;
		}
	if (same)
		printf("ArrayA와 arrayC는 같다\n");
	else
		printf("ArrayA와 arrayC는 다르다\n");
}