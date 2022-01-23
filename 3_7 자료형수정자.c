#include <stdio.h>
int main()
{
	short int result1, result2;
	unsigned short int result3;

	result1 = 32767;
	result2 = result1 + 1; /* 오버플로우 */
	result3 = result1 + 1;

	printf("short int result1: %d \n", result1);
	printf("short int : %d + %d = %d \n", result1, 1, result2);
	printf("unsigned short int : %d + %d = %d \n", result1, 1, result3);

	printf("sizeof(short int):%d, sizeof(int):%d, sizeof(log int):%d \n", sizeof(short int), sizeof(int), sizeof(long int));

	return 0;
}