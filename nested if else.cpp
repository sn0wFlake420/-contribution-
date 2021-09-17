#include <stdio.h>
#include <conio.h>
main( )
{
	float a, b, c;
	
	printf("enter the value of a b c\n");
	scanf("%f%f%f", &a, &b, &c);
	
	if(a > b)
	{
		if(a > c)
		{
			printf("a is the greatest number\n");
		}
		else
		{
			printf("c is the greatest number\n");
		}
	}
	else
	{
		if(b > c)
		{
			printf("b is the greatest number\n");
		}
		else
		{
			printf("c is the greatest number\n");
		}
	}
	getch();	
}

