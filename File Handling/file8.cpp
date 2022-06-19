// fgetc
	
	#include<stdio.h>  
	#include<conio.h>  
	main()
	{  
	char c;  
	
	FILE *fp;  
	fp=fopen("file1.txt","r");  
	  
//	c=fgetc(fp);  printf(" %c",c);		// reading and printing single character  

	while((c=fgetc(fp))!=EOF)
	{  
		printf("%c",c);  
	}  
	fclose(fp);
	
	}  

