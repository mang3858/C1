/*
 0 에서 99 까지의 숫자를 임의로 발생시켜서 덧셈문제를 만드세요
 각 덧셈문제에 대해서 사용자가 답을 입력하면, 답이 맞았는지 틀렸는지를 화면에 출력하는 프로그램을 작성하세요
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h> 
#include <time.h>
#include <stdio.h>
int main(void) {
	int n1, n2;
	int answer;

	srand(time(NULL));
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

	return 0;
}