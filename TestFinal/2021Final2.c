#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	char s[20];
	char key;
	int i, found;

	scanf("%s %c", s, &key);

	found = 0;
	for (i = 0; s[i] != '\0'; i++) {
		if (s[i] == key) {
			found = 1;
			printf("%d\n", i + 1);
			break;
		}
	}
	if (found == 0)
		printf("%d\n", -1);

	return 0;
}