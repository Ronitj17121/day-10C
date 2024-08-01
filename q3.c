#include<stdio.h>
//Write a Program to print even numbers from 1 to N using a do-while loop.
void main()
{
	int i=1,n;
	printf("Enter n  :");
	scanf("%d",&n);
	
	
	do
	{
	if(n%2==0)
	{
		printf("%d  ",n);
		}
		n--;	
	}while(1<=n);
	
}
