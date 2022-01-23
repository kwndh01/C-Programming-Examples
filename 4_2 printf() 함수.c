#include <stdio.h>

int main()
{
	int num;

	printf("/%d/ \n", 12345);
	printf("/%10d/ \n", 12345);
	printf("/%-10d/ \n", 12345);
	printf("/%010d/ \n\n", 12345);

	printf("/%f/ \n", 12345.678);
	printf("/%15f/ \n", 12345.678);
	printf("/%15.2f/ \n", 12345.678);
	printf("/%-15.2f/ \n\n", 12345.678);

	printf("%c %d \n", 'A', 'A', 97, 97);
	printf("/%s/\n/%10s/\n/%-10s/\n\n", "Campus", "Campus", "Campus");

	printf("%d %#o %#x \n", 67, 67, 67);
	printf("%d %#o %#x \n", 067, 067, 067);
	printf("%d %#o %#x \n\n", 0x67, 0x67, 0x67);
	
	num = 10;
	printf("%d %#o %#x \n", num, num, num);

	return 0;
}