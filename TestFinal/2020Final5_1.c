/*
�迭�տ� ����

ũ�Ⱑ 30�� ������ �迭�� ��������.

���� n(1�̻� 20����)�� �Է¹ް�
�������迭�� ���Ҹ� n�� �Է¹��� ��
���ο� ���� element�� �Է¹޾Ƽ�
�� element�� �迭�� ���� �տ� �����Ͽ�
����� �迭�� ����ϴ� ���α׷��� �ۼ��϶�.

���࿹:
�Է�)
6 <- ������ ����
44 22 33 44 33 66 <- 6���� ����
10
���)
10 44 22 33 44 33 66 <- ����� �迭: �迭 ������ ������ 7�� �ʿ� ����
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int arr[21];
	int n, i, element, temp;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	scanf("%d", &element);

	for (i = n - 1; i >= 0; i--) 
		arr[i+1] = arr[i];
	arr[0] = element;

	for (i = 0;i < n + 1; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}
