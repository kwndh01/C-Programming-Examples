#include <stdio.h>
int main()
{
	short int days;
	int day_rate;
	long int pay;
	double tax;

	printf("�ٹ��ϼ� ?");
	scanf("%hd", &days);

	printf("�ϱ� ?");
	scanf("%d", &day_rate);

	pay = days * day_rate;
	tax = pay * 0.3;
	pay = pay - (int)tax;

	printf("�ٹ��� %hd, �ϱ�: %d, ����: %.21f, ���޾�: %1d \n", days, day_rate, tax, pay);

	return 0;
}