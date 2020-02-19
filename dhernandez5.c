//Danny Hernandez
//CSC-251
//2-12-20

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generator(void);
int prompt();
void result();

int main(void)
{

	int x = 0, c1 = 0, c2 = 0, c3 = 0,c4 = 0,c5 = 0,c6 = 0,c7 = 0,c8 = 0,c9 = 0,c10 = 0;
	srand(time(NULL));
	int y = 0;
	x = prompt();


	for(int a = 1; a <= x; a++)
	{
		y = generator();
		switch(y)
		{
			case 1:
				c1++;
			break;
			case 2:
				c2++;
			break;
			case 3:
				c3++;
			break;
			case 4:
				c4++;
			case 5:
				c5++;
			break;
			case 6:
				c6++;
			break;
			case 7:
				c7++;
			break;
			case 8:
				c8++;
			break;
			case 9:
				c9++;
			break;
			case 10:
				c10++;
			default:
			break;
		}
	}
	result(c1, c2, c3, c4, c5, c6, c7,  c8,  c9, c10);
}

int generator(void)
{
	int x = rand()%10+1;
	return x;
}

int prompt(void)
{
	printf("How many times would you like to roll the 10 sided die? ");
	int x;
	scanf("%d",&x);
	return x;
}

void result(int c1,int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int c10)
{
	printf("You had:\n %d ones\n %d twos\n %d threes\n %d fours\n %d fives\n %d sixes\n %d sevens\n %d eights\n %d nines\n %d tens\n",c1,c2,c3,c4,c5,c6,c7,c8,c9,c10);
}
