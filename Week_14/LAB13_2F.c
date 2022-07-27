/*
LAB13_2�� ����� ���� �Լ��� ����Ͽ� �ٽ� �ۼ��Ѵ�
�Լ� indexSearch�� ����Ѵ�. ���� �� ������ ������ ����.

int indexSearch(int a[], int size, int searchKey);
// �迭 a�ȿ� searchKey�����ִ°��� Ž���Ͽ� �ش� ÷�ڸ� ��ȯ�Ѵ�. searchKey���� ���� ���� -1�� ��ȯ�Ѵ�.
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

	printf("Ž���� ������? ");
	scanf("%d", &income);

	id = indexSearch(incomes, SIZE, income);
	if (id == -1) if //((id = indexSearch(incomes, SIZE, income)) == -1)
		printf("���� %d �� ���� ���� �����ϴ�\n", income);
	else
		printf("���� %d �� ���� ù��° ���� %d ���Դϴ�\n", income, id + 1);
	
	return 0;
}

// flag ���� ���� �ۼ��غ���!! 
int indexSearch(int a[], int size, int searchKey)
{
	int i;

	for (i = 0; i < size; i++)
		if (a[i] == searchKey)
			return i;
	return -1;
}