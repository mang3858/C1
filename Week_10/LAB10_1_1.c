/*
***
****
*****
위의 실행결과를 갖는 프로그램을 printManyStars(...) 함수를 사용하여 쓰라.
*/
#include <stdio.h> 
void printManyStars(int num); // 함수의 원형
int main(void)
{
	printManyStars(3);
	printManyStars(4);
	printManyStars(5);
	// 함수의 호출부분 추가

	return 0;
}
void printManyStars(int num) // 함수의 정의, num 만큼 *를 출력한다
{
	int i;

	for (i = 0; i < num; i++)
		printf("*");
	printf("\n");

	return;
}