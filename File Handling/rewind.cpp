	// rewind()

	#include<stdio.h>  
	main()
	{  
	FILE *fp;  
	char c;  
	
	fp=fopen("file1.txt","r");  
	while((c=fgetc(fp))!=EOF)
	{  
	printf("%c",c);  
	}  
	
	rewind(fp);//moves the file pointer at beginning of the file  
	
	printf("\n");
	while((c=fgetc(fp))!=EOF)
	{  
	printf("%c",c);  
	}
	
	fclose(fp);       
	}    

