/*
�Ҽ� ��Ҽ� ����(�迭)

n(20 ����)�� �Է����� �޾�
n���� ����(1���� ū)�� �Է¹޾Ƽ�
�̵� ������ �Ҽ��� �Ҽ��� �ƴ� ������ �����Ϸ��Ѵ�.
�Ҽ�(��)�� ���� ����� �Ŀ� �Ҽ��� �ƴ� ��(��)�� ����ϴ� ���α׷��� �ۼ��϶�.

����:
�Ҽ��� ��Ҽ��� ���� �ٿ� ����ϰ� ���� �� ���̿� ���� 1���� �д�.

���࿹:
�Է�)
6 <- �迭�� ũ��
11 12 13 14 15 16 <- �迭�� ����
���)
11 13 12 15 16 <- �Ҽ��� 11, 13�� ����ϰ� �Ҽ� �ƴ� ������ ���
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int getPrime(int num)
{
	int i;

	for (i = 2; i < num; i++)
		if (num % i == 0)
			return 0;
	return 1;
}

int main(void)
{
	int arr[21], prime[21], nonPrime[21];
	int i, num;
	int primeIndex = 0, nonPrimeIndex = 0;

	scanf("%d", &num);
	for (i = 0; i < num; i++)
		scanf("%d", &arr[i]);

	for (i = 0; i < num; i++) {
		if (getPrime(arr[i]))
			prime[primeIndex++] = arr[i];
		else
			nonPrime[nonPrimeIndex++] = arr[i];
	}
	for (i = 0; i < primeIndex; i++)
		printf("%d ", prime[i]);
	for (i = 0; i < nonPrimeIndex; i++)
		printf("%d ", nonPrime[i]);
	printf("\n");

	return 0;
}
