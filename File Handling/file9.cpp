// wap for fputs
	
	#include<stdio.h>  
	main()
	{
	FILE *fp;  
	fp=fopen("fputs.txt","w");

	fputs("10 C programming ",fp);  
	
	fclose(fp);  
	}  

