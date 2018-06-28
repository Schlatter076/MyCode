#include <stdio.h>
#define PI 3.14

void main()
{
    float r,area,circ;
	printf("\nenter num:");
	scanf("%f",&r);
	circ=PI*(2*r);
	area=PI*(r)*(r);
	printf("周长是:%f\n",circ);
	printf("面积是:%f\n",area);
}