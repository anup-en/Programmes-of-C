//Programme to find entered nuimber is Even or Odd
#include<stdio.h>
int main12()
{
	int a;
	printf("Programme to calculate the entered number is EVEN or ODD\n");
	printf("Enter number\n");
	scanf_s("%d", &a);
	if (a % 2 == 0)
		printf("Entered number is EVEN!");
	else
		printf("Entered number is ODD!");
	return 0;
}