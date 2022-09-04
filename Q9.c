#include<stdio.h>
void main(){
    int n;
    float p,r,si;
    printf("enter the value of p=");
    scanf("%f",&p);
    printf("\nenter the value of n=");
    scanf("%d",&n);
    printf("\n enter the value of r=");
    scanf("%f",&r);
    si=p*n*r/100;
    printf("\n si= %f",si);

}