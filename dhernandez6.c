//Danny Hernandez
//CSC-251
//2-10-2020


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int x = 0, y = 0, z = 0;
	//printf("Enter a Seed \n");
	//scanf("%d",&y);
	srand(time(NULL));
	//x = rand()%10;
	//printf("z = %d,y = %d,x = %d\n ",z,y,x);

	for(int a = 0; a<=10;a++)
	{
		x=rand()%31;
		x=x+50;
		printf("\n%d",x);
	}
	return EXIT_SUCCESS;
}






