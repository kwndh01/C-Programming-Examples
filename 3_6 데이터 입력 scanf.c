#include <stdio.h>
int main()
{
	char gender;
	int age;
	double height;

	printf("����(��:m, ��:w)? ");
	scanf("%c", &gender);
	printf("���� ?");
	scanf("%d", &age);
	printf("���� ?");
	scanf("%1f", &height);
	printf("\n����: %c, ����: %d, ����: %1f \n", gender, age, height);

	return 0;
}