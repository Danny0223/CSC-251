//Danny Hernandez
//CSC-251
//2-10-2020


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generator(void);
int prompt();
int main(void)
{
	int x = 0, y = 0, z = 0, count = 0;
	//printf("Enter a Seed \n");
	//scanf("%d",&y);
	srand(time(NULL));
	//x = rand()%10;
	//printf("z = %d,y = %d,x = %d\n ",z,y,x);

	for(int a = 0; a<=10;a++)
	{
		x=generator();
		if(x==9)
		{
			count++;
		}
	}
	printf("%d",count);
	return EXIT_SUCCESS;
}

int generator(void)
{
	int x =rand()%10+1;
	return x;
}

int prompt(void);
{

}


