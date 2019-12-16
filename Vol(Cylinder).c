/*Programme to calculate the volume of Cylinder*/
#include<stdio.h>
main8()
{
	//float r, h;
	float p = 3.1415, r, h, v;
	printf("Enter the Radius of Cylinder\n");
	scanf_s("%f", &r);
	printf("Enter the Height of Cylinder\n");
	scanf_s("%f",&h);
	v = p*r*r*h;
	printf("Volume of Cylinder is %f", v);
	return 0;
}
