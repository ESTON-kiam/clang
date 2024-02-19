#include<stdio.h>
int main()
{
	int input;
    printf("1. play game\n");
	printf("2. load game\n");
	printf("3. play multi_player\n");
	printf("4. Exit\n");
	scanf("%d",&input);
	printf("\n");

	switch(input)
	{
		case 1:
		printf("play game called FOOTBALL");
		break;
		case 2:
		printf("play game called Table game");
		break;
		case 3:
		printf("play multi-player Netball");
		break;
		case 4:
		printf("Thanks for playing\n");
		break;
		default:
		printf("Bad input,quitting\n");
        break;
	}
	return 0;
}