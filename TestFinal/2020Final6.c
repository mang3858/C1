/*
palindrome�Ƿ���

�ܾ� s�� �Է¹޾�(���̰� 30�̸���)
�ܾ� s�� ũ�⸦ �����ϸ鼭 s�� palindrome���� ������Ѵ�.
palindrome���� ���鶧 �տ� �κ��� �����ϸ鼭 �ʿ��ϸ� �޺κ��� ����(��)�� �ٲ۴�.
�̋� �ٲپ���ϴ� ������ ������ �˰� �ʹ�.

���� ��� s�� abcdxya�� �Է¹�����
x -> c
y -> b
�� �ٲٸ� abcdcba��� palindrome�� ���ϰ� �ȴ�.
�̶� 2���� ���ڸ� �ٲپ���Ѵ�.

���࿹:
�Է�)
abcdxya <- ���ڿ� s
���)
2 abcdcba <- �޺κп��� �ΰ��� ���ڸ� �ٲپ abcdcba��� ���ڿ��� ������ִ�
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Palindrome(char s[], int size)
{
	int i, cnt = 0;;

	for (i = 0; i < size / 2; i++) 
		if (s[i] != s[size - i - 1]) {
			s[size - i - 1] = s[i];
			cnt++;
		}
		
	return cnt;
}

int main(void)
{
	char s[30];
	int i, size;

	scanf("%s", s);
	for (i = 0; s[i] != '\0'; i++);
	size = i;

	printf("%d ", Palindrome(s, size));
	for (i = 0; s[i] != '\0'; i++)
		printf("%c", s[i]);
	printf("\n");

	return 0;
}