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

int overlapCheck(int n[], int key, int index)//�ߺ��� �ִٸ� 1�� ��ȯ
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
		printf("���տ� �߰��� ����: ");
		scanf("%d", &element);

		if (overlapCheck(num, element, index) == 1)
			printf("%d�� �̹� ���տ� ����\n", element);
		else {
			num[index++] = element;
			printSet(num, index);
		}
	}

	return 0;
}