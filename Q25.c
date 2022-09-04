#include<stdio.h>
void main(){
    int n,d,p=0,r;
    printf("enter the no");
    scanf("%d",&n);
    r=n;
    while(n>0){
        d=n%10;
        p=p*10+d;
        n=n/10;
    }
    if(p==r){
        printf("palindrome");

    }
    else{
        printf("not palindrome");
    }
}