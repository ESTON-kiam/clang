#include<stdio.h>
int main()
{
	int number;
	printf("Enter a number:");//not using the if statement//
	scanf("%d",&number);
	(number>5) ? printf("One"):printf("Zero");
	return 0;
}