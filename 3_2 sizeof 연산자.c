#include <stdio.h>

int main()
{

	char gender;
	int age;
	float weight;
	double height;

	printf("변수의 할당크기 \n");
	printf("gender:%d, age:%d, weight:%d, height:%d \n\n", sizeof(gender), sizeof(age), sizeof(weight), sizeof(height));

	printf("자료형의 크기\n");
	printf("char:%d, int:%d, float:%d, double:%d \n\n", sizeof(char), sizeof(int), sizeof(float), sizeof(double));

	printf("정수형 상수: %d, 실수형 상수:%d \n", sizeof(10), sizeof(3.14159));

	return 0;
}