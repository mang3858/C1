#define _CRT_SECURE_NO_WARNINGS
#define SIZE 0 
#include <stdio.h> 
void  printMultiset(int n[], int size)
{
	int i;

	printf("{ ");
	printf("%d", n[SIZE]);
	for (i = 1; i < size; i++)
		printf(", %d", n[i]);
	printf(" }");
	printf("\n");
}

int main(void)
{
	int i, num[5] = { 0 };
	
	for (i = 0; i < 5; i++) {
		printf("다중 집합에 추가할 원소: ");
		scanf("%d", &num[i]);
		printMultiset(num, i + 1);
	}
}