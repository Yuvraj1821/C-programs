// wap to print the date and time of the system

#include<stdio.h>
#include<time.h>

main()
{
	struct tm *ptr;
	
	time_t T=time(NULL);
	
	printf(" \n Time in second from 1st jan 1970 : %ld",T);	
}
