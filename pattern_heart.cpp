#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j;
    char name[50];
    int len;
    printf("Enter the Name : ");
    gets(name);
    printf("Enter the number :");
    scanf("%d",&n);
    len=strlen(name);
    for(i=n/2;i<=n;i+=2)
	{
    	printf("\t\t\t");
        for(j=1;j<=n-i;j+=2)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
        for(i=n;i>=1;i--)
        {printf("\t\t\t");
            for(j=i;j<n;j++)
            {
                printf(" ");
            }
            if(i==n)
            {
            	printf(" ");
                for(j=1;j<=(n*2-len)/2;j++)
                {
                    printf("*");
                }
                printf("%s",name);
                for(j=1;j<=(n*2-len)/2;j++)
                {
                    printf("*");
                }
            }
            else
			{printf(" ");
                for ( j = 1; j <= i*2-1; j++)
                {
                    printf("*");
                }
            }
            printf("\n");
        }
    return 0;
}

