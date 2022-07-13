/*
성적 그래프 출력하기(main 함수만 사용)
Tom과 Mary의 성적을 입력받아서 점수만큼 별표를 찍어주는 프로그램입니다.
*지금은 main 함수만 사용( 숙제에서 출력부분을 함수화함) 
* 알고리즘 - 별표로 그래프를 찍어주고 나서는 각자의 성적을 숫자(%02d 사용: 숫자가
2 개 미만이면 그 자리는 0 으로 채움)로 표시해야 합니다. 

1. Tom 의 점수를 읽는다. 
2. Mary 의 점수를 읽는다
3. Tom 의 별 막대 출력(for 문)
4. Mary 의 별 막대 출력(for 문)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main(void)
{
	int t, m;
	int i;

	printf("Tom's score? ");
	scanf("%d", &t);
	printf("Mary's score? ");
	scanf("%d", &m);

	printf("----------Score Histogram----------\n");

	printf("Tom\t:");
	for (i = 0; i < t; i++)
		printf("*");
	printf("<%02d>\n", t);

	printf("Mary\t:");
	for (i = 0; i < m; i++)
		printf("*");
	printf("<%02d>\n", m);

	return 0;
}