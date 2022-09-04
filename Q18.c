#include<stdio.h>
void main(){
    int n,e,i,p=1;
    printf("enter the number");
    scanf("%d",&n);
    printf("enter the exponential");
    scanf("%d",&e);
    for(i=1;i<=e;i++){
        p=p*n;
    }
    printf("\n result is = %d",p);
    
}