#include <stdio.h>

int main()
{

	char gender;
	int age;
	float weight;
	double height;

	printf("������ �Ҵ�ũ�� \n");
	printf("gender:%d, age:%d, weight:%d, height:%d \n\n", sizeof(gender), sizeof(age), sizeof(weight), sizeof(height));

	printf("�ڷ����� ũ��\n");
	printf("char:%d, int:%d, float:%d, double:%d \n\n", sizeof(char), sizeof(int), sizeof(float), sizeof(double));

	printf("������ ���: %d, �Ǽ��� ���:%d \n", sizeof(10), sizeof(3.14159));

	return 0;
}