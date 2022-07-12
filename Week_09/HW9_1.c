/*
(rand(), do while, switch) 아래와 같은 실행결과(물론 난수를 발생시키므로 계산식은 각자
다를 것이다)를 갖도록 LAB9_2 를 수정하여 프로그램하라. 즉, random 하게 연산항과 연산자(+, -, *,
/)를 발생시켜서 문제를 제시한다. 맞으면 Your answer is right 라는 메시지를, 틀리면 Your
answer is wrong 이라는 메시지와 함께 정답을 준다. 위의 문제 풀이를 원할때까지 반복하게 한다.
(힌트 1: 연산자를 random 하게 발생시키기위해 변수 op 를 아래와 같이 값을 배정한다.

op = rand() % 4;

그리곤 op 가 0, 1, 2, 3 일 때 각각 덧셈, 뺄셈, 곱셈, 나눗셈(물론 순서는 상관없다)로 할당하여
계산을 진행한다. switch(op)를 이용하면 된다.)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h> 
#include <time.h>
#include <stdio.h>
int main(void) {
	int n1, n2;
	int answer;
	int result;
	char ch;
	int op;

	srand(time(NULL));

	do
	{
		n1 = rand() % 100;
		n2 = rand() % 100;
		op = rand() % 4;

		switch (op) {
		case 0:
			op = '*';
			result = n1 * n2;
			break;
		case 1:
			op = '/';
			result = n1 / n2;
			break;
		case 2:
			op = '+';
			result = n1 + n2;
			break;
		case 3:
			op = '-';
			result = n1 - n2;
			break;
		}

		printf("%d %c %d = ", n1, op, n2);
		scanf("%d", &answer);

		if (answer == result)
			printf("Your answer is right.\n");
		else {
			printf("Your answer is wrong.\n");
			printf("%d is the right answer.\n", result);
		}

		while (getchar() != '\n');

		printf("Do you want to continue(y/n)?");
		scanf("%c", &ch);
	} while (ch == 'y');

	return 0;
}