#include <stdio.h>

int main()
{
	const float PI = 3.14159;
	int radius;

	radius = 7;
	printf("�������� %d�� ���� ����:%1f \n", radius, radius * radius * PI);
	printf("�������� %d�� ���� �ѷ�:%1f \n", radius, radius * 2 * PI);

	radius = 10;
	//PI = 3,1;

	printf("�������� %d�� ���� ����:%1f \n", radius, radius * radius * PI);
	printf("�������� %d�� ���� �ѷ�:%1f \n", radius, radius * 2 * PI);

	return 0;
}