#include<stdio.h>
void main()
{
	int n,p=0,d=1,a,r;
	printf("Enter the any Number:-  ");
	scanf("%d",&n);
	while (n)
	{
		r=n%2;
		n=n/2;
		p=p+d*r;
		d=d*10;
	}
	printf("Binary number= %d",p);
}				