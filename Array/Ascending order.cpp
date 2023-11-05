#include<stdio.h>
main()
{
	int num[10],i,j,temp;
	printf("\nEnter those 10 numbers = ");
	
	for(i=0;i<10;i++)
		scanf("\n\n%d" ,num[i]);
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(num[i]>num[j])
			{
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	}
	printf("\n The array after sorting is = ");
	for(i=0;i<10;i++)
		printf("%d" ,num[i]);
}
