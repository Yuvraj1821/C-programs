// wap to print the date and time of the system

#include<stdio.h>
#include<time.h>

main()
{
	struct tm *ptr;
	
	time_t T=time(NULL);
	
	ptr=localtime(&T);
	
	printf(" \n %s",asctime(ptr));	//asctime function use to print the date and time
}
