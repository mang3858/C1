/*
���ڿ� word�� �Է¹޾Ƽ� word ���� �빮�ڵ��� �ٸ� ���ڿ� ���� newWord�� ���� �� �̰��� ����ϴ� ���α׷��� �ۼ��϶�

��Ʈ �� �䱸���� 
- newWord ���ڿ� ������ ���� ������ ÷��, j(0���� �ʱ�ȭ)�� �ʿ��ϴ�. 
- ��½� �Ʒ��� ���� �̻��� ���ڵ��� �ùٸ� ������ �ڿ� ���󳪿� ���ִ�. �׷� ��� ���� � �����غ���. ��� �ذ��Ұ��ΰ�?
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main(void)
{
	int i, j = 0;
	char word[81], newWord[81];
	
	printf("Enter one word: ");
	scanf("%s", word);

	for (i = 0; word[i] != '\0'; i++) 
		if (word[i] >= 65 && word[i] <= 90)
			newWord[j++] = word[i];
	newWord[j] = '\0';
	printf("%s\n", newWord);

	return 0;
}