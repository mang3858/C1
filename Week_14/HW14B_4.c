/*
`A ��1, B��2, C��3......Z��26`���� �������A����Z���� ������ �ű��. �� ������ �� �ܾ �����ϸ� �ȴ�. �̸��׸� ����� ���ϴ� �ܾ�
`LUCK`�� ���L(12) +U(21) +C(3) +K(11)`�̹Ƿ� �հ�� 47���� �ȴ�

�ܾ �Է¹޾� �� ������ ����ϴ� ���α׷��� �ۼ��϶�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int calculatePoint(char s[]);
int main(void)
{
	char str[20];

	printf("�ܾ �Է��ϼ���(��ĭ����):"); 
	scanf("%s", str);

	printf("������ %d\n", calculatePoint(str));

	return 0;
}
// calculatePoint �Լ��� ����
int calculatePoint(char s[])
{
	int i, j, num;
	int sum = 0;

	for (i = 0; s[i] != '\0'; i++) {
		if (s[i] >= 'A' && s[i] <= 'Z')
			sum += s[i] - 64;//sum += s[i] - 'A' + 1;
		else if (s[i] >= 'a' && s[i] <= 'z')
			sum += s[i] - 96;//sum += s[i] - 'a' + 1;
	}
	return sum;
}