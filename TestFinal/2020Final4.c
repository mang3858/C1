/*
word���� ���ĺ�����

�ܾ�(���̰� 20 �̸���)�� �о������
�� �ܾ ������ ���� ���ڵ�� A���� Z���� �����ϴ� ���α׷��� �ۼ��϶�.

��, BOY�� �ܾ�� �Է¹�����, B, O, Y�� ������ ������ ���ĺ��� ������ ���� ������� �����Ѵ�.
ACDEFGHIJKLMNPQRSTUVWXZ

��Ʈ:
- ���ڿ� w�ȿ� ch�� ������ 1�� ������ 0�� ��ȯ�ϴ� �Լ��� �����Ͽ� main�Լ����� ȣ���Ͽ� ����Ѵ�.
(���� ��� ���ص� ��)

int is_in(char w[], char ch);
���࿹:
�Է�)
BOY
���)
ACDEFGHIJKLMNPQRSTUVWXZ
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int is_in(char w[], char ch)
{
	int i;

	for (i = 0; w[i] != '\0'; i++) 
		if(w[i] == ch)
			return 1;
	return 0;
}

int main(void)
{
	char word[21];
	int i;

	scanf("%s", word);

	for (i = 'A'; i<= 'Z'; i++) 
		if (is_in(word, i) == 0)
			printf("%c", i);
	printf("\n");

	return 0;
}