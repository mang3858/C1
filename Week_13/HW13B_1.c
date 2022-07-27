/*
하나의 문자열(80자이하)을 입력 받아서 문자열 안의 대문자는 소문자로, 소문자는 대문자로 바꾸는 프로그램을 작성하세요. 영문자 이외의 숫자나 기호는 변환하지 않습니다. 

힌트 및 요구사항 
- 새로 변환한 문자열을 반드시 새로운 문자열 에 저장하라.
  즉, 입력 받을 문자열은 word, 새로 변환한 문자열은 newWord를 사용한다. 두 문자열 모두 char형이고 크기는 81로 한다. 
- 대문자 알파벳과 소문자 알파벳은 각각 32의 차이값을 갖는다. 즉, ‘A’는 65이고 ‘a’는 97값을 갖는다. 그러므로
    = 대문자를 소문자로 바꾸는 방법: 대문자 + 32
    = 소문자를 대문자로 바꾸는 방법: 소문자 – 32 
- 새로 변환한 문자열 출력시
    printf(“%s”, newWord)를 사용하라.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main(void)
{
    int i;
    char word[81], newWord[81];

    printf("Enter one word: ");
    scanf("%s", word);
    printf("word given: %s", word);
    printf("\n");

    for (i = 0; word[i] != '\0'; i++) 
        if (word[i] >= 'A' && word[i] <= 'Z')
            newWord[i] = word[i] + 32;
        else if (word[i] >= 'a' && word[i] <= 'z')
            newWord[i] = word[i] - 32;
        else
            newWord[i] = word[i];
    newWord[i] = '\0';

    printf("new word: %s", newWord);
    printf("\n");

    return 0;
}