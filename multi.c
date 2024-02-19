#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a=1,b=1;
	for(int a=1;a<=10;a++)
	{
		for(int b=1;b<=10;b++)

			printf("\n%dX%d=%d",a,b,a*b );
	}
	//printf("%d X %d=%d\n",a,b,a*b);
	
	return 0;
}