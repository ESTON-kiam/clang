#include<stdio.h>
#include<stdlib.h>//due to malloc
int main()
{
	int *intptr=NULL,i,sum=0,n;
	printf("Enter number of elements:");
	scanf("%d",&n);
	intptr=malloc(sizeof(int));
	if(intptr ==NULL)
	{
		printf("Memory request not successful\n");
		exit(0);
	}
	printf("Enter element:");//only if the intprt is not NULL
	for(int i=0;i<n;++i)
	{
		scanf("%d",intptr+1);
		sum+=*(intptr+1);
	}
	printf("%d\n",sum);
	free(intptr);
	return 0;
}
