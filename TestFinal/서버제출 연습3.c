/*
���ڿ�(���� 80����)�� �ȿ� �����ϴ� ���ڵ��� ������ ����Ͽ� ����ϴ� ���α׷��� �ۼ��϶�.
���࿹�� ���� ������ ����.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int addNumbers(char s[]);
int main(void)
{
	char word[81];
	int i;

	//printf("Enter one word: ");
	scanf("%s", word);

	printf("%d\n", addNumbers(word));

	return 0;
}
int addNumbers(char s[]) // �� �Լ��� ����
{
	int i;
	int sum = 0;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] >= '0' && s[i] <= '9')
			sum += s[i] - '0';
	
	return sum;
}