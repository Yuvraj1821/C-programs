//wap to print subarray 
#include<stdio.h>
main()
{
	int n,i,arr[100];
	printf("\n Enter the length of array : ");
	scanf("%d",&n);
	
	printf("\n Enter the %d elements of an array : ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(int s=0;s<n;s++)
	{
		for(int e=s;e<n;e++)
		{
			for(int k=s;k<=e;k++)
			{
				printf(" %d",arr[k]);
			}
			printf("\n");
		}
		printf("\n");
	}
}
