/*#include<stdio.h>
int main()
{
	int i,sum=0;
	while(i<=10)
	//{
		//printf("ESTON KIAMA\n");
		//printf("I LIKE PRESIDENT MWAI KIBAKI\n");
		//printf("%d\n",i);
	    i++;
	//}
	sum=sum+i;
	{
		printf("%d",sum);
	}
}*/
#include<stdio.h>
int main()
{
	int i,sum=0;
	for(i=0;i<=10;i+=2)
	{
		sum=sum+i;
	}
	printf("%d",sum);

}