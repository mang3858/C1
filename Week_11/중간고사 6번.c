/*
* 문제6: 숫자내 숫자(난이도 중상) (25점)
정수 a, b를 읽어서 a안에 b가 존재하는 경우 
b와 b의 앞자리수들(b앞에 있는 모든 수들)을 같이 출력하도록 프로그램을 작성하라. 
b에 해당하는 수가 존재하지 않는 경우는 0을 출력한다. 

예를 들어서 a가 12345이고 b가 234이면 
1234를 출력한다. 즉, 234와 그 앞자리수들을 함께 출력한다. 
b가 a안에 여러 번 나오는 경우는 가장 뒷부분에 나오는 b를 찾아 그 앞자리수들과 함께 출력한다. 

실행예1 
12345678 <- 입력: a 
45  입력: <- b 
12345 <- 출력: 45와 그 앞자리수들을 함께 출력

적절하게 함수화하여 다시 프로그램하라
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
//num의 자리수를 변환
int calDigits(int num)
{
	int subNumTemp;
	int posNum = 0;

	subNumTemp = num;
	while (subNumTemp != 0) {
		posNum++;
		subNumTemp /= 10;
	}
	return posNum;
}

//10^(num의 자리수)을 변환
int calTenToDigits(int num)//num =45
{
	int dividend = 1;

	for (int i = 0; i < calDigits(num); i++)
		dividend *= 10;
	return dividend;
}

int extractNum(int num, int subNum, int dividend)
{
	while (num != 0) {
		if (num % dividend == subNum)
			break;
		num /= 10;
	}
	return num;
}

int main(void)
{
	int num, subNum;
	int dividend;

	scanf("%d", &num);
	scanf("%d", &subNum);

	dividend = calTenToDigits(subNum);////10^(subNum의 자리수)을 구한다,

	printf("%d\n", extractNum(num, subNum, dividend));
}
