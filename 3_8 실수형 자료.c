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
	printf("�ε� �Ҽ��� :%f \n", f_num);
	printf("�������� : %e \n", f_num);

	return 0;
}