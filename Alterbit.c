#include<stdio.h>
#include<conio.h>

int main()
{
	int a,pos;
	printf("Enter the no.");
	scanf("%d",&a);
	printf("Enter the position.");
	scanf("%d",&pos);
	a=a^(1<<pos);
	printf("%d",a);
	
}
