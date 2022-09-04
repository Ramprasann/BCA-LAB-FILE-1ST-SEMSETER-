#include<stdio.h>
int area(float);
void main()
{
	float r,c;
	printf("Enter the radius:-  ");
	scanf("%f",&r);
    c =area(r);
    printf("%f is the area of the circle",c);
}
int area(float r)
{
	float c;
	c=3.14*r*r;
    printf("%f is the area of the circle",c);
	return(c);
}