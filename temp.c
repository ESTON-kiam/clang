#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i=0,*ptr=&i;
	*ptr=*ptr ?12:21;
	printf("%d\n",i );
	return 0;
}

/*#include <stdio.h>
int main()
{
	float i,j,temp;
	printf("Enter two positive integers:");
	scanf("%f %f",&i,&j);
	temp=i;
	i=j;
	j=temp;
	printf("%f %f",i,j);
}*/


/*#include<stdio.h>
int main(int argc, char const *argv[])
{
   int a=1,b=4,c=4;
   printf("%d\n",(a<1)^(b--==c));
   printf("%d",!(a>b)&&(a-1==b-3)&&(c%2 || (a+b-c)));
	return 0;
}*/


/*#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int *intptr=NULL,a=7,square,cube;
    intptr=malloc(sizeof(int));
    //printf("Enter  a number");//if it is read a number we assume this part//
    ///scanf("%d",&a);
    if(intptr==NULL)
    {
    	printf("memory is not available");
    	exit(0);
    }
    {
     square=a*a;
     cube=a*a*a;
    }
    {
    	printf("%d %d",square,cube);
    	free(intptr);
    }
	return 0;
}*/




/*#include<stdio.h>
int main(int argc, char const *argv[])
{
	int a,b,c;
	printf("Enter three numbers");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && b>c)
	{
		printf("a is the largest number");
	}
	else if(b>c)
	{
		printf("b is the largest number");
	}
	else
	{
		printf("c is the largest");
	}
	return 0;
}
*/

















