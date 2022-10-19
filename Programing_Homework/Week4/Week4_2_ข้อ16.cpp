#include <stdio.h>
int main()
{
	int hr, mn, money = 0;
	scanf_s("%d%d", &hr, &mn);
	if (hr > 1) {
		if (mn > 0) money = (hr - 1) * 30 + 30;
		else money = (hr - 1) * 30;
	}
	else if (hr == 1) {
		if (mn > 0) money = 30;
		else money = 0;
	}
	else money = 0;
	printf("%d Baht", money);
}