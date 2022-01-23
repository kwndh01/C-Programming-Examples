#include <stdio.h>

int main()
{
	float f_num;
	double d_num;

	f_num = 12345678901234567890;
	d_num = 12345678901234567890;

	printf("float_num : %f \n", f_num);
	printf("double_num : %1f \n\n", d_num);

	f_num = 135.123F;
	printf("부동 소수점 :%f \n", f_num);
	printf("지수형식 : %e \n", f_num);

	return 0;
}