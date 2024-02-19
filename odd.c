#include<stdio.h>
int main()
{
	int a=1;
	int sum;
	for(a=1;a++;a<=7)
	{
		sum=a+a++;
	}
	printf("%d",a+a);
}