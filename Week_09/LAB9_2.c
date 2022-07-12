/*
사용자가 원하는 만큼 덧셈문제를 연습할 수 있도록 프로그램을 작성하라
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h> 
#include <time.h>
#include <stdio.h>
int main(void) {
	int n1, n2;
	int answer;
	char ch;

	srand(time(NULL));

	do
	{
		n1 = rand() % 100;
		n2 = rand() % 100;

		printf("%d + %d = ", n1, n2);
		scanf("%d", &answer);

		if (answer == n1 + n2)
			printf("Your answer is right.\n");
		else {
			printf("Your answer is wrong.\n");
			printf("%d is the right answer.\n", n1 + n2);
		}

		while (getchar() != '\n');
		// 이전에 입력문이 있은 다음에 문자를 읽어야할 때
		// 현재의 버퍼에남은 문자(들)을 비우기 위해 필요
		// body 없는 반복문으로 조건 뒤에 반드시 ;
		printf("Do you want to continue(y/n)?");
		scanf("%c", &ch);
	} while (ch == 'y');

	return 0;
}