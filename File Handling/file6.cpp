// wap to check whether the file is available or not and writing data in file 
#include <stdio.h>  
main()  
{  
	    FILE *fptr;  
	    int id;  
	    char name[30];  
	    float salary;  
	    fptr=fopen("emp.txt", "a");/*  open for writing  */  
	    if (fptr == NULL)  
	    {  
	        printf("File does not exists \n");  
	        return 0;  
	    }  
	    printf("Enter the id ");  
	    scanf("%d", &id);  
	    fprintf(fptr, "Id= %d\n", id); 
		 
	    printf("Enter the name ");  
	    scanf("%s", &name);  
	    fprintf(fptr, "Name= %s\n", name);  
	    
	    printf("Enter the salary ");  
	    scanf("%f", &salary);  
	    fprintf(fptr, "Salary= %f\n", salary); 
		  
	    fclose(fptr);  
	}  


