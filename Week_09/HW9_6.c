/*
지금 소유하고 있는 금액으로 메뉴를 주문하려 한다. 
3 가지 메뉴 중 주문할 예정이며 빵은 500 원, 쿠키는 700 원, 콜라는 400 원이다. 잔돈은 하나도 남기지 않으며 메뉴를 적어도 하나는 구입해야 한다. 가능한 경우를 모두 보이라. 
(반복을 최소화하는 방법을 생각하라)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int money;
	int bread, cookie, coke;

	printf("Enter 금액: ");
	scanf("%d", &money);
	//money = money - (bread + cookie + coke);

	for (bread = 1; bread <= money / 500; bread++)
		for (cookie = 1; cookie <= money / 700; cookie++)
			for (coke = 1; coke <= money / 400; coke++)
				if (500 * bread + 700 * cookie + 400 * coke == money)
					printf("빵: %d 쿠기: %d 콜라: %d\n", bread, cookie, coke);

	return 0;	
}