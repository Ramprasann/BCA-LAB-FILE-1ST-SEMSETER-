#include<stdio.h>
void main(){
     int a,b;
    printf("enter the first value");
    scanf("%d",&a);
    printf("\n enter the second no");
    scanf("%d",&b);
   a=a+b;
   b=a-b;
   a=a-b;
    printf("a=%d",a);
    printf("\nb=%d",b);
}