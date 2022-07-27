/*
문자열 뒤집기
*/
#include <stdio.h> 
int main(void)
{
	int i;
	char ch;
	char str[10] = "12345678"; // 1)

	printf("--변경 전 문자열--\n");
	printf("%s \n", str);

	/* 문자열 변경 */
	for (i = 0; i < 4; i++) // 2)
	{
		ch = str[7 - i]; // 3)
		str[7 - i] = str[i]; // 4)
		str[i] = ch;
	}
	printf("\n--변경 후 문자열--\n");
	printf("%s \n", str);

	return 0;
}
