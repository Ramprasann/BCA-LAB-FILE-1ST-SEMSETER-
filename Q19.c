#include<stdio.h>
void main(){
    int n,d,sum=0;
    printf("enter the number=");
    scanf("%d",&n);
    while(n>0){
        d=n%10;
        sum+=d;
        n=n/10;

    }
    printf("sum of digit = %d", sum);
}