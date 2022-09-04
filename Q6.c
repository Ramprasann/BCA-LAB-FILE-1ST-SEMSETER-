#include<stdio.h>
void main(){
    float r,pi,ar,cr;
    printf("enter the value--");
    scanf("%f",&r);
    pi=3.14;
    ar=pi*r*r;
    cr=2*pi*r;
    printf("\n area of circle = %2f",ar);
    printf("\n circumference of circle = %2f",cr);
}