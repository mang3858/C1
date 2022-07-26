/*
어떤 수를 읽어서 그 수의 배수 20 개(그 수부터 시작하여)를 정수형 배열 data 에 넣어서 이를
출력하는 프로그램을 작성하라.
- data 에 값을 넣는 부분과 출력하는 부분을 각기 다른 for 문으로 처리하라.
- 또한 출력시 아래의 실행결과처럼 5 개의 데이터를 한줄에, 그리고 각 숫자는 5 개의 문자영역을
차지하고(%5d 사용) 오른쪽 줄맞춤 되도록 하라.

힌트: 5 개의 데이터를 출력한 후 줄을 바꾸는 것을 위해서 i 의 값이 4, 9, 14, 19 일 때 줄바꿈이 됨을 착안하라.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main(void)
{
	int data[20];
	int i;
	int num;

	printf("Enter a number: ");
	scanf("%d", &num);

	for (i = 0; i < 20; i++)
		data[i] = (i * num) + num;

	for (i = 0; i < 20; i++) {
		printf("%5d", data[i]);
		if (i % 5 == 4) 
			printf("\n");
	}

	return 0;
}