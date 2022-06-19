// wap to generate random number and print it in words
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void num_to_word(int num);

main()
{
	int x,i;
	srand(time(0));
	
	x=rand();
	printf("\nThe number : %d",x);
	num_to_word(x);
}

void num_to_word(int num)
{
	int d,rev=0;
	while(num!=0)
	{
		d=num%10;
		rev=rev*10+d;
		num=num/10;
	}
	
	printf("\n Number in words : \n\t\t\t");
	while(rev!=0)
	{
		d=rev%10;
		switch(d) 
		{
			case 0: printf(" Zero"); break;
			case 1:	printf(" One"); break;
			case 2:	printf(" Two");	break;
			case 3:	printf(" Three"); break;
			case 4:	printf(" Four"); break;
			case 5: printf(" Five"); break;
			case 6:	printf(" Six");	break;
			case 7:	printf(" Seven"); break;
			case 8:	printf(" Eight"); break;
			case 9:	printf(" Nine"); break;	
		}
		rev=rev/10;
	}
}
// seeding :- patching with time
