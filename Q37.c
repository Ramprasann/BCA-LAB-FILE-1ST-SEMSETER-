#include<stdio.h>
void main(){
    printf("enter the no");
    scanf("%d%d",&a,&b);
    while(a!=b){
        if(a>b){
            a=a-b;
        }else{
            b=b-a;
        }

    }
    printf("gcd =%d",a);
}