//Programme for swapping of two numbers
#include<stdio.h>
float main9()
{
	float a, b, c;
	printf("Enter First number \n");
	scanf_s("%f", &a);
	printf("Enter Second number\n");
	scanf_s("%f", &b);
	c = a;
	a = b;
	b = c;
	printf("The number obtained after swapping is %f and %f", a, b);
	return 0;
}