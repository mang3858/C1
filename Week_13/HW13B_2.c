/*
적당한 길이의 문자열을 입력받아서, 그 안에 존재하는 숫자들의 총합을 계산하여 출력하는 프로그램을 작성하라. 
'0’의 아스키값은 48임을 활용하라. 
예를 들어, ‘1’은 49값을 갖으므로 ‘1’ – 48 계산을 통해서 1이라는 숫자 값을 얻을 수있음에 착안하라
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main(void)
{
	char word[81];
	int i, sum = 0;

	printf("Enter one word: ");
	scanf("%s", word);

	for (i = 0; word[i] != '\0'; i++) {
		if (word[i] >= '0' && word[i] <= '9')
			sum += word[i] - '0';
	}
	printf("안에 있는 숫자들의 합은 %d\n", sum);

	return 0;
}