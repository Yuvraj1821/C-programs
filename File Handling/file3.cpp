// wap to demonstrate file 
// Reading data in file using fgets()
#include<stdio.h>
main()
{
	char data[100];
	FILE *p;
	 p=fopen("File1.txt","r");
	 fgets(data,100,p);		// fgets will store data in character format 
	 printf("\n Data : %s",data);
	 fclose(p);
}

/*
syntax for fgets() :
	
	fgets(variable_name,range,file_pointer);
	
*/
