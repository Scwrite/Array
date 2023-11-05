#include<stdio.h>
main()
{
	int num[5],i,n=0;
	printf("Enter the five numbers = ");
		for(i=0;i<5;i++)
			scanf("\n\n%d" ,&num[i]);
	for(i=0;i<5;i++)
		{
			n=n*10+num[i];
		}
	printf(" The number is ");
		for(i=0;i<5;i++)
			printf("%d" ,num[i]);

}
