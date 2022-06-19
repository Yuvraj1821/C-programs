// time header file 

#include<stdio.h>
#include<time.h>		// time header file
#include<unistd.h>
main()
{
	//time(null) - returns the current time in second 
	time_t now= time(NULL);
	
//	printf(" Time in seconds : %ld",now);
//	
//	// it sleeps the program for 5 sec
//	sleep(5);	
//	
//	time_t fivesec= time(NULL);
//	printf("\n Time after 5 seconds : %ld",fivesec);
//
//	// difftime returns the difference between two times 	
//	double diff= difftime(now,fivesec);
//	printf("\n Difference between two times : %lf",diff);	
//	
	
	char *ptr= ctime(&now);
	printf("%s",ptr);
}

