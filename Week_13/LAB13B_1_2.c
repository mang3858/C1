/*
���ڿ� ������
*/
#include <stdio.h> 
int main(void)
{
	int i;
	char ch;
	char str[10] = "12345678"; // 1)

	printf("--���� �� ���ڿ�--\n");
	printf("%s \n", str);

	/* ���ڿ� ���� */
	for (i = 0; i < 4; i++) // 2)
	{
		ch = str[7 - i]; // 3)
		str[7 - i] = str[i]; // 4)
		str[i] = ch;
	}
	printf("\n--���� �� ���ڿ�--\n");
	printf("%s \n", str);

	return 0;
}
