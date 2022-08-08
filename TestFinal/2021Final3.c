#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int n[21], big[21], small[21];
	int num, standard;
	int i, bigIndex = 0, smallIndex = 0;

	scanf("%d", &num);
	for (i = 0; i < num; i++)
		scanf("%d", &n[i]);
	scanf("%d", &standard);

	for (i = 0; i < num; i++)
	{
		if (n[i] >= standard)
			big[bigIndex++] = n[i];
		else
			small[smallIndex++] = n[i];
	}

	for (i = 0; i < smallIndex; i++)
		printf("%d ", small[i]);
	printf("\n");
	for (i = 0; i < bigIndex; i++)
		printf("%d ", big[i]);
	printf("\n");

	return 0;
}