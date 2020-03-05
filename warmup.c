#include <stdio.h>
#include <stdlib.h>
#define SIZE 30

void printer(int rname[SIZE]);
void filleven(int ename[SIZE]);
void fillodd(int oname[SIZE]);

int main (void)
{
	int arr[SIZE]={0};
	printer(arr);
	filleven(arr);
	int arr2[SIZE]={0};
	fillodd(arr2);
/*
	int arr3[SIZE]={0};

	swapp(arr, arr2, arr3);

	return EXIT_SUCCESS;
*/

}

void printer(int rname[SIZE])
{
	int i = 0;
	for(i=0;i< SIZE; i++)
	{
		printf("Array[%d]=%d\n",i,rname[i]);
	}
}


void filleven(int ename[SIZE])
{
	int i=0, a = 0;
	for(i=0;i<SIZE;i++)
	{
		ename[i] = a;
		printf("Even Array[%d]=%d\n",i,ename[i]);
		a=a+2;
	}
}

void fillodd(int oname[SIZE])
{
	int i=0, b=1;
	for(i=0;i<SIZE;i++)
	{
		oname[i]=b;
		printf("Odd Array[%d]=%d\n",i,oname[i]);
		b=b+2;
	}
}

/*
void swap(int ename1[SIZE], int oname1[SIZE])
{
	int i=0;

}
*/
