#include<stdio.h>
#include<conio.h>

int main()
{
	int a,pos;
	printf("Enter the number :");
	scanf("%d",&a);
	printf("\nEnter the position.");
	scanf("%d",&pos);
	a=a^(1<<pos);
	printf("%d",a);
	
}
