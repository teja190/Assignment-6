#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter numbers:");
	scanf("%d %d",&a,&b);
	printf("The numbers before swap are:%d %d\n",a,b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("The numbers after swap are:%d %d",a,b);
}
