/*
�ڸ���Ȧ����

���� n�� �о
�̸� 3�� �� ��
�� �ڸ� ���� �� Ȧ���� ���� ����ϴ� ���α׷��� �ۼ��϶�.
main�� ������������ print_odd_digit�� �ϼ��϶�.
���࿹ 1:
�Է�)
123
���)
12 (= 3 + 9: 123 * 3 = 369�̰� ���� 3�� 9�� Ȧ��)
���࿹ 2:
�Է�)
1451
���)
11 (= 3 + 5 + 3: 1451 * 3 = 4353�̰� ���� 3 5 3�� Ȧ��)

*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int print_odd_digit(int num)
{
	int n;
	int sum = 0;

	while (num > 0) {
		n = num % 10;
		if (num % 2 != 0)
			sum += n;
		num /= 10;
	}

	return sum;
}
int main(void)
{
	int n;

	scanf("%d", &n);

	n = n * 3;
	printf("%d\n", print_odd_digit(n));

	return 0;
}