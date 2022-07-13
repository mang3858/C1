
/*
(매개변수를 가지는 void 함수의 연습) 
두개의 수를 입력받아서 큰 수를 출력하는 프로그램을 작성하라. 큰수를 찾아 출력하는 부분을 함수화하라.

주의:
아래의 주어진 프로그램에 보면 main 함수에서는 num1, num2 를
findNPrintBig 함수에서는 n1, n2 를 사용하였다. 이때 같은 이름을 사용하여도(즉,
main, findNPrintBig 모두에서 n1, n2 를 사용) 무방하나 실습 뿐 아니라 숙제에서도
다른 이름을 사용하는 것을 연습한다.

실행예:
Enter two numbers: 5 10
Big number is 10.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
void findNPrintBig(int n1, int n2); // 함수의 원형
int main(void)
{
	int num1, num2;

	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);
	//num1, num2 를 읽는다;
	
	findNPrintBig(num1, num2);
	//findNPrintBig 호출;

	return 0;
}

void findNPrintBig(int n1, int n2) // 두 수중 큰 수를 찾아 출력한다.
{
	int big;

	if (n1 > n2)
		big = n1;
	else
		big = n2;
	printf("Big number is %d.\n", big);

	return;
}