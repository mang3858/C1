/* 
0 ���� 9 ������ ������ �������� ũ�Ⱑ 10 �� ������ �迭 count �� ����϶�.
��, count[0]�� 0 �� ���� ����, �� , count[9]�� 9 �� ���� ����
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
int main(void)
{
	int num[100], count[10] = { 0 };
	int i, n;

	printf("Enter the number of random numbers:(<= 50): ");
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		num[i] = rand() % 10;
		count[num[i]]++;
	}
	for (i = 0; i < 10; i++)
		printf("%d�� ������ %d\n", i, count[i]);

	printf("-----------------------------------\n");
	printf("�߻��� ������\n");
	for (i = 0; i < n; i++) {
		printf("%5d", num[i]);
		if (i % 5 == 4)
			printf("\n");
	}
}