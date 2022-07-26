/*
HW9_다의 프로그램을 조금 변경하려한다.

• 앞에서 작성한 void 함수를 int형으로 아래와 같이 변경하라. 함수의 원형은 다음과 같다.
void get_cycle_number(int n);
위의 함수는 특정한 수를 파라미터로 받아 수열을 출력하고 사이클 길이를 *반환*해주는 함
수를 작성하라.

• 위의 함수를 테스트하기 위한 test driver인 main함수를 다시 작성하라.
이번에는 충분히 위의 함수를 테스트 할 수있도록 반복문을 사용해보자.
(힌트: main함수에서 -1이 나올때까지 n을 읽어서 get_cycle_number를 호출하여 결과를 출력
하는 감시값 제어반복문을 사용한다)

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int cycleNb(int num);
int main(void)
{
	int n;

	printf("Enter a number:");
	scanf("%d", &n);

	while (n != -1) {
		printf("\n길이는 %d\n", cycleNb(n));

		printf("Enter a number:");
		scanf("%d", &n);
	}
}
int cycleNb(int num)
{
	int cnt = 1;

	while (num != 1) {
		if (num % 2 == 0) 
			num = num / 2;
		else 
			num = num * 3 + 1;
		cnt++;
		printf("%d ", num);
	}

	return cnt;
}
