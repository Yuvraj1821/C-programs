// wap to demonstrate file 
// Writing data in file using fscanf()
#include<stdio.h>
main()
{
	char data[100];
	FILE *p;
	 p=fopen("File1.txt","r");
	 while(fscanf(p,"%s",data)!=EOF)		// fgets will store data in character format 
	 {
		 printf(" %s",data); 	
	 }
	 fclose(p);
}
/*
syntax for fscanf() :
	
	for other types:	
		fscanf(file_pointer,"format",variable_name)
	
	for string:	
	while(fscanf(file_pointer,"format",variable_name)!=EOF)		
	 {
		 output instruction
	 }
*/
