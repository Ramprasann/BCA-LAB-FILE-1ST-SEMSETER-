#include<stdio.h>
void main(){
    float km,cm,m,ft,in;
    printf("enter the distance in km: ");
    scanf("%f",&km);
    cm=km*1000*100;
    m=km*1000;
    ft=km*3280.839;
    in=cm*0.394;
    printf("\n distance in cm is %f",cm);
    printf("\n distance in m is %f",m);
    printf("\n distance in ft is %f",ft);
    printf("\n distance in inches is %f",in);




}