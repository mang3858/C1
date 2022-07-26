/*
)사용자로부터 10 진수 형태로 양의 정수를 하나 입력 받은 다음 2 진수로 변환해서 출력하는 프로그램을 작성하라. 양수는 256 미만의 수가 입력된다고 가정하자.

힌트: 256 미만의 수는 8 자리수의 2 진수로 표현할 수 있으니 크기가 8 인 배열 binary 를 사용한다.

11 이 입력된 경우
11 % 2 -> 1 을 binary 배열에 넣는다. binary[] <- 1
11 을 2 로 나눈 몫은 5

5 % 2 -> 1 를 binary 배열에 넣는다. binary[] <- 1 1
5 를 2 로 나눈 몫은 2

2 % 2 -> 0 을 binary 배열에 넣는다. binary[] <- 1 1 0
2 를 2 로 나눈 몫은 1

1 * 2 -> 0 을 binary 에 넣는다, binary[] <- 1 1 0 1
1 을 2 로 나눈 몫은 0(끝!)

이렇게 만들어진 binary 배열을 역순으로 출력한다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  
int main(void)
{
	int binary[8];
	int reverseBinary[8];
	int i;
	int num, cnt;

	printf("Enter 양수<<256>>: ");
	scanf("%d", &num);

	i = 0;
	cnt = 0;
	while (num > 0) {
		reverseBinary[i] = num % 2;
		num /= 2;
		i++;
		cnt++;
	}

	for (i = 0; i < cnt; i++) {
		binary[i] = reverseBinary[cnt - i - 1];
		printf("%d", binary[i]);
	}
	printf("\n");

	return 0;
}