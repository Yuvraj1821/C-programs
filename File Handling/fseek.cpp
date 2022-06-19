	// program of fseek
	#include <stdio.h>  
	 main()
	 {  
	   FILE *fp;  
	  
	   fp = fopen("myfile.txt","w");  
	   fputs("This is java", fp);  
	   fseek( fp, 7, SEEK_SET );  
	   fputs(" Disha Computer", fp);  
	  fclose(fp);  
	}
