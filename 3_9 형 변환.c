#include <stdio.h>
int main()
{
	short int days;
	int day_rate;
	long int pay;
	double tax;

	printf("근무일수 ?");
	scanf("%hd", &days);

	printf("일급 ?");
	scanf("%d", &day_rate);

	pay = days * day_rate;
	tax = pay * 0.3;
	pay = pay - (int)tax;

	printf("근무일 %hd, 일급: %d, 세금: %.21f, 지급액: %1d \n", days, day_rate, tax, pay);

	return 0;
}