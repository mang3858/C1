/*
�־��� �ܾ palindrome������ �Ǻ��ϴ� ���α׷��� �ۼ��϶�.
palindrome�� madam�� abccbaó�� �տ������� ������ �ڿ������� ������ ������ �ܾ �ǹ��Ѵ�
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#define MAX_STRING 81 
#define BOOL int 
#define TRUE 1 
#define FALSE 0 

// Palindrome �˻�
BOOL isPalindrome(char str[]);
int main(void)

{
	char str[MAX_STRING];

	printf("* Palindrome üũ\n\n");
	printf("���ڿ� �Է�(���ڼ� %d ����): ", MAX_STRING);
	scanf("%s", str);

	if (isPalindrome(str)) // Palindrome �˻�
		printf("\"%s\" is a Palindrome\n\n", str); // ���� ����Ϸ��� \���� �����
	else
		printf("\"%s\" isn't a Palindrome\n\n", str);
	
	return 0;
}
BOOL isPalindrome(char s[])
{
	//���ڿ� s��(����� s�� ������������, �̴� 2�б⶧ ����)
	//üũ�ؼ� palindrome�̸� TRUE���� palindrome�ƴϸ� FALSE���� return�Ѵ�
	int i, len;
	char rs[MAX_STRING];

	for (i = 0; s[i] != '\0'; i++);
	len = i;

	for (i = 0; s[i] != '\0'; i++)
		rs[i] = s[len - i - 1];
	rs[i] = '\0';

	for (i = 0; s[i] != '\0'; i++) {
		if (s[i] == rs[i])
			return TRUE;
		else
			return FALSE;
	}

	/*
	for (j = 0; j < len / 2; j++)
		if (s[j] != s[i - j - 1])
			return FALSE;
	return TRUE;
	*/
		
}