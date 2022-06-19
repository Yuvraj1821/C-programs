#include<stdio.h>
main()
{
	FILE *ptr;
	
	ptr=fopen("file.txt","r");
	
	if(ptr==NULL)
	{
		printf("\n File not found ");
		return 0;
	}
	
	fclose(ptr);
}
