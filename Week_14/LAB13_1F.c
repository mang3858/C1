/*
LAB13_1 �� ��������� �Լ��� ����Ͽ� �ٽ� �ۼ��϶�. �Լ��� ���� �� ������ ������ ����.
void printArray(int a[], int size); // �迭 a �� ���ҵ��� ����ϴ� �Լ�
int equalArray(int a[], int b[], int size); // �迭 a �� b �� ������ 1 �� �ٸ��� 0 �� ��ȯ�ϴ� �Լ�(�̶� �迭 a �� b �� ũ�Ⱑ ���ٰ� �����Ѵ�)
*/
#define SIZE 5 
#include <stdio.h> 

void printArray(int a[], int size);
int equalArray(int a[], int b[], int size);

int main(void)
{
	int arrayA[SIZE] = { 1, 2, 3, 4, 1 };
	int arrayB[SIZE];
	int arrayC[SIZE];
	int i;

	for (i = 0; i < SIZE; i++)
	{
		arrayB[i] = arrayA[i];
		arrayC[SIZE - i - 1] = arrayB[i];
	}

	// �迭 3 ���� ����ϴ� �κ� �߰�: printArray ȣ��
	printf("ArrayA:");
	printArray(arrayA, SIZE);
	printf("ArrayB:");
	printArray(arrayB, SIZE);
	printf("ArrayC:");
	printArray(arrayC, SIZE);

	if (equalArray(arrayA, arrayB, SIZE)) // if (equalArray(arrayA, arrayB, SIZE) == 1)
		printf("ArrayA �� arrayB �� ����\n");
	else
		printf("ArrayA �� arrayB �� �ٸ���\n");
	if (equalArray(arrayA, arrayC, SIZE))
		printf("ArrayA �� arrayC �� ����\n");
	else
		printf("ArrayA �� arrayC �� �ٸ���\n");

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

// �迭 a �� b �� ������ 1 �� �ٸ��� 0 �� ��ȯ�ϴ� �Լ��� �����Ѵ�
// flag ���� ���� �ۼ��غ���! 
int equalArray(int a[], int b[], int size)
{
	int i;

	for (i = 0; i < size; i++)
		if (a[i] != b[i])
			return 0;
	return 1;
}