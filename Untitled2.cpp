#include <stdio.h>
main( )
{
	float S,p,r,t;
	
	printf("enter the value of p r t\n");
	scanf("%f%f%f",&p,&r,&t);
	
	S = (p*r*t)/100;
	
	printf("simple interest is %f\n",S);
	return 0;
	
}

