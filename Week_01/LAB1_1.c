/*
5 ���� ������ �迭�� �Է� �޾Ƽ� ���հ� ����� ����ϰ�
�� �迭�� ������ ȭ�鿡 ����ϴ� ���α׷��� �ۼ��϶�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num[5];
	int i, sum = 0, ave = 0;
	//int arr[5];

	for (i = 0; i < 5; i++) {
		printf("Enter %dth number : ", i + 1);
		scanf("%d", &num[i]);

		sum += num[i];
	}

	printf("-----------------------------\n");
	printf("������ %d\n", sum);
	printf("����� %d\n", sum / 5);
	printf("-----------------------------\n");

	for (i = 0; i < 5; i++)
		printf("array[%d] : %d\n", i, num[i]); 

	return 0;
}