/*
양수를 입력 받아서 그냥 출력하는 프로그램을 작성하려 한다. 양수가 제대로 입력될 때까지 입력 받고
양수가 입력되면 그때 출력한다. do while 문을 사용하라.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int num;

	do
	{
		printf("Enter a number<양수>: ");
		scanf("%d", &num);

	} while (num < 0);
	printf("입력된 양수는 %d\n", num);

	return 0;
}