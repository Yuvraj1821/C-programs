// wap to demonstrate file 
// creating an file using fopen()
#include<stdio.h>
main()
{
	FILE *p;
	 p=fopen("File1.mp3","w");
	 
	 fclose(p);
}


// file ends with EOF
// to open created file we can use (ctrl+b)
// if file has not been created compiler will return NULL
