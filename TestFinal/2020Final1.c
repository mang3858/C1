/*
Ű ���� ����(�迭)

���� n(1�̻� 20����)�� �Է¹ް�
�������迭�� ���Ҹ� n�� �Է¹ް�
key ���� �Է¹�����
�� �迭�ȿ� key ���� � �ִ� ���� ����ϴ� ���α׷��� �ۼ��϶�.

���࿹:
�Է�)
6 <- ������ ����
11 22 33 44 33 66 <- 6���� ����
33 <- key��
���)
2
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int arr[21];
	int num, i, key;
	int found;
	int cnt = 0;

	scanf("%d", &num);
	for (i = 0; i < num; i++)
		scanf("%d", &arr[i]);
	scanf("%d", &key);

	for (i = 0; i < num; i++) 
		if (arr[i] == key)
			cnt++;
	printf("%d\n", cnt);

	return 0;
}