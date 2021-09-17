#include <stdio.h>
#include <conio.h>
int power(int,int);
main()
{
	int n,p,a;
	printf("enter interger");
	scanf("%d",&n);
	printf("enter power");
	scanf("%d",&p);
	
	a=power(n,p);
	printf("answer = %d",a);
	return 0;
}

int power (int n , int p )
{
	if(p==0)
	return 0;
	
	else
	return n * power(n,p-1); 

getch();
}
