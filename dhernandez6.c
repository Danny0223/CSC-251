//Danny Hernandez
//CSC-251
//2-19-2020


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void arrprint(int arrp[], int arrsoze);

int main(void)
{
	int firstArray[5] = {0,2,4,6,8};
	int secondArray[5] = {1,3,5,7,9};
	int firstArray2[5];
	int secondArray2[5];

	printf("Before Swap\n");

	for (int i=0;i<5;i++)
	{
		printf("firstArray[%d] = %d,secondArray[%d] = %d \n", i,firstArray[i],i,secondArray[i]);
		secondArray2[i]=firstArray[i];
		firstArray2[i]=secondArray[i];
		firstArray[i]=firstArray2[i];
		secondArray[i]=secondArray2[i];
	}

	printf("After Swap\n");

	for (int i=0;i<5;i++)
	{
		printf("firstArray[%d] = %d,secondArray[%d] = %d \n",i, firstArray2[i],i,secondArray2[i]);
	}
}
