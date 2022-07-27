/*
`A 는1, B는2, C는3......Z는26`같은 방식으로A에서Z까지 점수를 매긴다. 이 공식을 각 단어에 적용하면 된다. 이를테면 행운을 뜻하는 단어
`LUCK`의 경우L(12) +U(21) +C(3) +K(11)`이므로 합계는 47점이 된다

단어를 입력받아 그 점수를 계산하는 프로그램을 작성하라.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int calculatePoint(char s[]);
int main(void)
{
	char str[20];

	printf("단어를 입력하세요(빈칸없이):"); 
	scanf("%s", str);

	printf("점수는 %d\n", calculatePoint(str));

	return 0;
}
// calculatePoint 함수의 정의
int calculatePoint(char s[])
{
	int i, j, num;
	int sum = 0;

	for (i = 0; s[i] != '\0'; i++) {
		if (s[i] >= 'A' && s[i] <= 'Z')
			sum += s[i] - 64;//sum += s[i] - 'A' + 1;
		else if (s[i] >= 'a' && s[i] <= 'z')
			sum += s[i] - 96;//sum += s[i] - 'a' + 1;
	}
	return sum;
}