//Programme to find greatest among 3 numbers
#include<stdio.h>
int main11()
{
	int a, b, c;
	printf("Enter First number\n");
	scanf_s("%d", &a);
	printf("Enter Second number\n");
	scanf_s("%d", &b);
	printf("Enter Third number\n");
	scanf_s("%d", &c);
	if (a > b && a > c)
		printf("First number is Greatest");
	else if (a<b && b>c)
		printf("Second number is Greatest");
	else
		printf("Third number is Greatest");


	return 0;


}