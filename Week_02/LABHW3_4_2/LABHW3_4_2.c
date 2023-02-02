#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
void  printSet(int n[], int size)
{
	int i;
	printf("{ ");
	for (i = 0; i < size; i++) {
		if (i > 0 && i < size)
			printf(", ");
		printf("%d", n[i]);
	}
	printf(" }");
	printf("\n");
}

int overlapCheck(int n[], int key, int index)//중복이 있다면 1을 반환
{
	int i;
	for (i = 0; i <= index; i++) {
		if (n[i] == key)
			return 1;
	}
	return 0;
}

int main(void)
{
	int num[5];
	int element, i, index = 0;

	for (i = 0; index < 5; i++) {
		printf("집합에 추가할 원소: ");
		scanf("%d", &element);

		if (overlapCheck(num, element, index) == 1)
			printf("%d는 이미 집합에 있음\n", element);
		else {
			num[index++] = element;
			printSet(num, index);
		}
	}

	return 0;
}