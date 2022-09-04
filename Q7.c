#include<stdio.h>
void main(){
    int a,b,t;
    printf("enter the first value");
    scanf("%d",&a);
    printf("\n enter the second no");
    scanf("%d",&b);
    t=a;
    a=b;
    b=t;
    printf("a=%d",a);
    printf("\nb=%d",b);
}