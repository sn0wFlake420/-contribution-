#include<stdio.h>
#include<conio.h>
main()
{
	int a=3 , b=4 ;
	
	do
	{
		if(b%2)
		b--;
	}
	while(b<=a++);
	printf("%d%d",a,b);
	
	getch();
}
