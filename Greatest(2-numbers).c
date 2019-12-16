//Programmes to find Greatest among two numbers
#include<stdio.h>
int main10()
{
	int a, b;
	printf("Programme to find greatest among two numbers\n");
	printf("Enter First number\n");
	scanf_s("%d", &a);
	printf("Enter Second number\n");
	scanf_s("%d", &b);
	if (a < b)
		printf("The greatest among entered two number is %d", b);
	else
		printf("The greatest among entered two number is %d", a);
	return 0;
}