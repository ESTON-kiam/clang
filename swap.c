/*#include<stdio.h>//swaping two numbers example 6 and 9 to be 9 and 6
int main()
{
	int i,j,temp;
	printf("Enter two numbers:");
	scanf("%d %d",&i,&j);
	temp=i;
	i=j;
	j=temp;
	printf("%d %d",i,j);
}*/





/*#include<stdio.h>//two digit number//swapping a two digit number exaple 29 to be 92
int main()
{
	int i;
	printf("Enter a two digit number:");
	scanf("%d",&i);
	i=10*(i%10)+(i/10);
	printf("%d\n",i);
}*/




#include<stdio.h>//swapping a three digit number example 987 to be 789
int main()
{
	int i;
	printf("Enter a three digit number:");
	scanf("%d",&i);
	i=100*(i%10)+10*(i%100/10)+(i/100);
	printf("%d",i);
}
