#include <stdio.h>

int main()
{
	const float PI = 3.14159;
	int radius;

	radius = 7;
	printf("반지름이 %d인 원의 면적:%1f \n", radius, radius * radius * PI);
	printf("반지름이 %d인 원의 둘레:%1f \n", radius, radius * 2 * PI);

	radius = 10;
	//PI = 3,1;

	printf("반지름이 %d인 원의 면적:%1f \n", radius, radius * radius * PI);
	printf("반지름이 %d인 원의 둘레:%1f \n", radius, radius * 2 * PI);

	return 0;
}