#include<stdio.h>
main()
{
	int i,j,a[100],n,temp=0;
	
	printf("Enter Value of Array Elements : ");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	printf("\nAfter Sorting\n\n");
	
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	
	
}
