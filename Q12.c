#include<stdio.h>
void main(){
    int a,b;
    printf("enter the year");
    scanf("%d",&a);
    if(a%4==0){
        printf("%d is a leap year",a);
    }else{
        printf("%d not a leap year",a);
    }
}