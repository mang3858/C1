/*
�ϳ��� �ܾ �Է� �޾Ƽ� �� �ܾ� �ȿ� ���Ե� ������ ���� ����ϴ� ���α׷��� �ۼ��϶�. 
�ܾ� �ȿ� ���ڰ� ���̾� ���� ��� �ϳ��� ���� �����Ѵ�. 

���࿹:
Enter a word: ab22c3d5
���� ���� ���� ���� 30
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main(void)
{
	char word[81];
	int i, sum = 0;
	int num = 0;

	printf("Enter a word: ");
	scanf("%s", word);

	for (i = 0; word[i] != '\0'; i++) {
		if (word[i] >= '0' && word[i] <= '9') 
			num = num * 10 + word[i] - '0';
		else {
			sum += num;
			num = 0;
		}
	}
	sum += num;
	printf("���� ���� ���� ���� %d\n", sum);

	return 0;
}