#include<stdio.h>
void swap(int *, int * );
void main(){
    int a=12,b=15;
    swap(&a,&b);
    printf("a=%d\n b=%d",a,b);
}
void swap(int * a, int * b){
    int t;
    t=*a;
    *a=*b;
    *b=t;
}