#include<stdio.h>
int main()
{
	int marks=0;
	printf("Enter marks:");
	for(;;)
{
	scanf("%d",&marks);
 if(marks==-1){break;}
	 else if(marks>69 && marks<=100){printf("A -well done\n");}
     else  if(marks>59 && marks<=70){printf("B -trial\n");}
		else if(marks>49 && marks<=60){printf("C -fair\n");}
		else if(marks>39 && marks<=50){printf("D -improve\n");}
		else if(marks<40 && marks >=0){printf("FAILED\n");}

	
	else{printf("You have entered invalid marks!\n");}
	printf("Enter the next mark:");
    }
    printf("You have finished entering the marks!");
    return 0;
}