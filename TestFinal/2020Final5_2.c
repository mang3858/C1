/*
���� n(1�̻� 20����)�� �Է¹ް�
�������迭�� ���Ҹ� n�� �Է¹��� ��
�ε��� ��ġ pos�� ���ο� ���� element�� �Է¹޾Ƽ�
�迭�� �ε��� ��ġ pos�� element�� �����Ͽ�
����� �迭�� ����ϴ� ���α׷��� �ۼ��϶�.

�Է�)
6 <- ������ ����
10 20 30 40 50 60 <- 6���� ����
3 99 <- �迭 �ε��� 3�� 10�� ����
���)
10 20 30 99 40 50 60
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int arr[21];
	int n, i, pos, element;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	scanf("%d %d", &pos, & element);

	for (i = n - 1; i >= pos; i--)
		arr[i + 1] = arr[i];
	arr[pos] = element;

	for (i = 0; i < n + 1; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}