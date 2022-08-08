#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void changeToDigitEncode(char s[], char e[])
{
	int i;
	int n = 0;

	for (i = 0; s[i] != '\0'; i++) {
		if (s[i] >= 'A' && s[i] <= 'I')
			e[n++] = s[i] - 16;
		else if (s[i] >= 'J' && s[i] <= 'S') {
			e[n++] = '1';
			e[n++] = s[i] - 26;

		}
		else if (s[i] >= 'T' && s[i] <= 'Z') {
			e[n++] = '2';
			e[n++] = s[i] - 36;
		}
	}
	e[n] = '\0';

	return;
}

int main(void)//변경하지 마라
{
	char sentence[20], encoded[40];

	scanf("%s", sentence);
	changeToDigitEncode(sentence, encoded);
	printf("%s\n", encoded);

	return 0;
}