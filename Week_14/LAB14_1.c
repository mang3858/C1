/*
아래의 실행결과가 나오도록 프로그램을 완성하라.
main함수와 나머지 함수의 정의부분을 완성하면 된다.
난수발생을 위한 seed로 현재의 시간을 이용하는 time()함수를 사용했으므로 실행결과는 매번 다른 수들을 보여준다.

1)2)를 한후, 3), 4)의 순으로 단계적으로 완성하도록 하자.

1)0부터 99까지의 난수를 발생시킨다.
 2)출력한다
 3)평균을 구해서 출력한다
 4)가장 큰 수를 구해서 출력하다.
*/
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
void generateData(int[], int);
void printData(int[], int);
int averageData(int[], int);
int maxData(int[], int); // 여기에 보이는 원형들처럼 매개변수의 이름을 생략할 수도 있다!
int main(void)
{
	int data[10]; // 계산 수행에 사용할 정적 변수
	int average;
	srand(time(NULL)); // random 값 출력에 사용하는 함수. Seed 값을 부여
	
	//1) 
	generateData(data, 10);
	//2) 
	printf("엘리먼트들은 ");
	printData(data, 10);
	
	//3) 
	average = averageData(data, 10);
	printf("엘리먼트의 평균은 %d\n", average);
	
	//4) 호출부분 추가
	printf("엘리먼트들 중 가장 큰 수는 %d\n", maxData(data, 10));

	return 0;
}
void generateData(int a0[], int size)
{
	int i;

	for (i = 0; i < size; i++)
		a0[i] = rand() % 100;

	return;
}
void printData(int a2[], int size)
{
	int i;

	for (i = 0; i < size; i++) // Index 0..9까지
		printf("%d ", a2[i]);
	printf("\n");

	return;
}
int averageData(int a1[], int size)
{
	int i;
	int sum = 0;

	for (i = 0; i < size; i++)
		sum += a1[i];

	return sum / size;
}
int maxData(int a3[], int size)
{
	int i, best = a3[0];

	for (i = 0; i < size; i++) // Index 0..9까지
		if (best < a3[i])
			best = a3[i];

	return best;
}

