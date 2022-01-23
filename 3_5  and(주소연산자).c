#include <stdio.h>

int main()
{
	char ch = 'A';
	int count = 100;
	float pi = 3.14159F;
	double area1 = 5.6;

	printf("%c, %d, %f, %1f \n", ch, count, pi, area1);
	printf("%p, %p, %p \n", &ch, &count, &pi, &area1);
	return 0;
}