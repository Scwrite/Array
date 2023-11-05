#include<stdio.h>
main()
{
	int i,marks[5];
	float average, sum=0;
	for(i=0;i<5;i++)
	{
		scanf("%d" ,&marks[i]);
	}
	for(i=0;i<5;i++)
	{
		sum=sum+marks[i];		
	}
	average=sum/5;
	printf("sum = %0.2f" ,sum);
	printf("%average = 0.2f" ,average);
}
