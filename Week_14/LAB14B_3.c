/*
���ڿ��� �Լ� �Ű����� ����

*�Ϲ� �迭���� �޸� ���ڿ��� ���� �� ũ�⸦ ���� ���� �� �ʿ����. 
 �� ���� ��\0������ ������ ������ �̿��ϸ� �Ǳ� �����̴�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int strLength(char s[]);
void printUpperCase(char s[]);
int main(void)
{
	char str[81];

	printf("Enter a string:");
	scanf("%s", str);

	printf("���̴� %d\n", strLength(str)); // strLength ȣ��
	
	printf("�빮�ڸ� ����ϸ�\n");
	printUpperCase(str); // printUpperCase ȣ��

	return 0;
}

int strLength(char s[])
{
	int i;

	for (i = 0; s[i] != '\0'; i++);

	return i;
}

void printUpperCase(char s[])
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] >= 'A' && s[i] <= 'Z')
			printf("%c", s[i]);
	printf("\n");

	return;
}