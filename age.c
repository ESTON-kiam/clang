#include<stdio.h>
int main()
{
	int currentYear=2022,yearOfBirth,age;
	printf("Enter year of Birth:");
	scanf("%d",&yearOfBirth);
	//printf("Enter current year:");
	//scanf("%d",&currentYear);
	age=currentYear-yearOfBirth;
	printf("%d\n",age);
	if(age>18)
	{
		printf("YOU CAN VOTE IN THIS YEAR GENERAL ELECTION");
	}
	else
	{
		printf("You have %d more years remaining for you to vote:",18-age);
	}
} 