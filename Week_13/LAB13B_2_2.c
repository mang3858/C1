/*
문자열 word를 입력받아서 word 안의 대문자들을 다른 문자열 변수 newWord에 넣은 후 이것을 출력하는 프로그램을 작성하라

힌트 및 요구사항 
- newWord 문자열 변수를 위한 별도의 첨자, j(0으로 초기화)가 필요하다. 
- 출력시 아래와 같은 이상한 문자들이 올바른 실행결과 뒤에 따라나올 수있다. 그런 경우 왜일 까를 생각해보라. 어떻게 해결할것인가?
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