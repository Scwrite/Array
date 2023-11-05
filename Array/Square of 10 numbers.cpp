#include<stdio.h>
main()
{
	int num[10],i;
	printf(" Enter the 10 numbers = ");
		for(i=0;i<10;i++)
			scanf("\n%d" ,&num[i]);
	for(i=0;i<10;i++)
	{
		num[i]=num[i]*num[i];	
	}
	printf("\n\n The square of array is = ");
		for(i=0;i<10;i++)
			printf("\n%d" ,num[i]);
}
