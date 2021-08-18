#include<stdio.h>
int main()
{
	int n,x,r;
	printf("Enter Number:");
	scanf("%d",&x);//input integer from user
	printf("enter nth bit:");
	scanf("%d",&n);//to set the nth bit
	r=x ^ (1<<n);//leftshift by 1
	printf("Number after toggle %d bit is:%d",n,r);
	return 0;
}
