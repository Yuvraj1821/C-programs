// wap to demonstrate file 
// Writing data in file using fprintf()
#include<stdio.h>
main()
{
	int a=10;
	
	FILE *p;
	 p=fopen("File1.txt","w");
	 
	 fprintf(p," File handling in c language A : %d",a);
	 
	 fclose(p);
}
/*
syntax for fprintf() :
	
	1.	fprintf(file_pointer,"statement");
		
	2.	fprintf(file_pointer," format of var.",name_of_variable);
	
*/
