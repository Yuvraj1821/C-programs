	// program for ftell()
	#include <stdio.h>  
	 main()
	 {  
	 	int n;
	   FILE *fp;  
	   fp = fopen("myfile.txt","r");  
	   fseek( fp, 0, SEEK_END );
		n=ftell(fp);
	  printf("\n The  length of file : %d byte",n);
	  fclose(fp);  
	  
	}
