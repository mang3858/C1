/*
���� �迭 �����
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

void printArray(int a[], int size);
void reverse(int a[], int size);
int main(void)// �״�� ����Ѵ�
{
	int num;
	int list[10];
	int i;

	printf("Enter the number(<=10)");
	scanf("%d", &num);
	for (i = 0; i < num; i++)

	{
		printf("Enter ���Ұ�:");
		scanf("%d", &list[i]);
	}

	printArray(list, num);
	reverse(list, num);
	printArray(list, num);

	return 0;
}
void printArray(int a[], int size) // �״�� ����Ѵ�
{
	int i;

	for (i = 0; i < size; i++)
		printf("%d ", a[i]);
	printf("\n");

	return;
}
void reverse(int a[], int size)
{
	int i;
	int temp;

	for (i = 0; i < size / 2; i++) {
		temp = a[i];
		a[i] = a[size - i - 1];
		a[size - i - 1] = temp;
	}

	return;
}