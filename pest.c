#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
	int *intptr=NULL,j,k,sum,multi,div,sub;
	printf("Enter two numbers:");
	scanf("%d %d",&j,&k);
	intptr=malloc(sizeof(int));
	if(intptr==NULL)
	{
		printf("Memory is not available");
		exit(0);
	}
	{
		sum=j+k;
		multi=j*k;
		div=k/j;
		sub=k-j;
	}
	{
      printf("%d\n",sum);
      printf("%d\n",div);
     printf("%d\n",multi); 
     printf("%d\n",sub);
	}
	free(intptr);
	return 0;
}