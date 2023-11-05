#include<stdio.h>
main()
{
	int num1[5],num2[5],add[5],i;
	printf("Enter 5 numbers for the first array = ");
		for(i=0;i<5;i++)
			scanf("\n%d" ,&num1[i]);
	printf("Enter 5 numbers for the secound array = ");
		for(i=0;i<5;i++)
			scanf("\n%d" ,&num2[i]);
	for(i=0;i<5;i++)
		add[i]=num1[i]+num2[i];
			printf("\n\n The addition of the two array = ");
				for(i=0;i<5;i++)
				printf("%d" ,add[i]);
}
