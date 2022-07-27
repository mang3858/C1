/*
(문자열의 정의, 표준출력, 문자열 종료방법) 다음 예제 프로그램의 결과 예상해 보세요.
그리고 프로그램의 실행한 후 자신의 예상 결과와 비교해 보세요. 1)2)3)4)를 잘 살펴보라.
*/
#include <stdio.h> 
int main(void)
{
	int i;
	// 1) 문자열을 정의하는 여러가지 방법들입니다
	char digits[] = "0123456789";
	char abc[] = { 'A', 'B', 'C', '\0' };
	char lan[5] = "java";

	// 2) 출력 결과는? 
	printf("%s %s\n", digits, abc); //%s를 사용한다. 

	// 3) 아래처럼 lan 문자열변수를 두가지 방법으로 출력할 수있다. %c와 %s의 쓰임새에 주목하라. 
	printf("%s\n", lan);
	for (i = 0; lan[i] != '\0'; i++) // A)문자열의 마지막을 확인하는 방법을 유의해보라
		printf("%c", lan[i]);

	// 4) digits[]의 중간에 null character를 삽입하면
	digits[6] = '\0';
	printf("\n%s\n", digits);

	
	return 0;
}