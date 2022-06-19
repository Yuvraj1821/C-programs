// wap to check whether the file is available or not 
#include<stdio.h>  
main()  
{  
	    int id;  
	    
	    FILE *fptr;  
	    fptr=fopen("emp.txt","r");
	    
	    if(fptr == NULL)  
	    {  
	        printf("File does not exists \n");  
	        return 0;  
	    }  
	    printf("Enter the id\n");  
	    scanf("%d", &id);  
		fprintf(fptr," Id : %d",id);
	    fclose(fptr);  
	}  


