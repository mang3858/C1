#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main(void)
{
	int list[10] = { 10, 20, 30, 40, 50, 40, 30, 20, 10, 0 };
	int value;
	//int keyIndex;
	
	printf("���� %d\n", sumList(list, 10));
	printf("���� ū ���� %d\n", maxList(list, 10));
	
	printf("Ž���� ����? ");
	scanf("%d", &value);
	
	// value �� list �� �ִ°��� �Ǻ��Ͽ� "����" Ȥ�� "**°�� �ִ�"�� 
	if (indexSearch(list, 10, value) != -1)
		printf("�� %d�� ���� ù��° ���� %d��°�� �ֽ��ϴ�\n", value, indexSearch(list, 10, value) + 1);
	else
		printf("����\n");
	
	return 0;
}
//sumList �� ����
int sumList(int arr[], int size)
{
	int i, total = 0;
	for (i = 0; i < size; i++)
		total += arr[i];
	return total;
}
// ���� ū ���� ��ȯ�Ѵ�. 
int maxList(int arr[], int size)
{
	int i, max = -1;
	for (i = 0; i < size; i++)
		if (max < arr[i])
			max = arr[i];
	return max;
}

//key �� ������ -1 �� ������ �� �ε����� ��ȯ�Ѵ�. 
int indexSearch(int arr[], int size, int key)
{
	int i;
	for (i = 0; i < size; i++) 
		if (arr[i] == key)
			return i;
	return -1;
}