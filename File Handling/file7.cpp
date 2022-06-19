	// wap for fputc
	#include <stdio.h>  
	main()
	{  
   	FILE *fp;  
	   fp = fopen("file2.txt","w");//opening file  
	   fputc('S',fp);			   //writing single character into file  
	   fclose(fp);				   //closing file  
	}  

