#include<stdio.h>
main()
{
	int num[10],i;
	printf("\n\nEnter the 10 numbers = ");
	for(i=0;i<10;i++)
	{
		scanf("%d" ,&num[i]);
	}
	for(i=9;i>=0;i--)
	{
		printf("\n\n%d" ,num[i]);
	}
}
