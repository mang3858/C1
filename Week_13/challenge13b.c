/*
하나의 단어를 입력 받아서 이 단어 안에 포함된 숫자의 합을 출력하는 프로그램을 작성하라. 
단어 안에 숫자가 연이어 나올 경우 하나의 수로 간주한다. 

실행예:
Enter a word: ab22c3d5
글자 안의 수의 합은 30
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
	printf("글자 안의 수의 합은 %d\n", sum);

	return 0;
}