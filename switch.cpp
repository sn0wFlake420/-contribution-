#include <stdio.h>
#include <conio.h>
main()
{
	int a,b,c;
	char operation;
	
	
	printf("enter 1st number :");
	scanf("%d, &a");
	printf("enter 2nd number ");
	scanf("%d", &b);
	printf("enter operation ");
	scanf("%c", &operation);
	
	switch(operation) 
	{
	    case '+' :
			c=a+b;
			printf("%d = %d + %d",c,a,b);
			break;
		
		case '-' :
			c=a-b;
			printf("%d = %d - %d",c,a,b);
		    break;
		
		case '*' :
			c=a*b;
			printf("%d = %d * %d",c,a,b);
			break;
		
		case '/' :
			c=a/b;
			printf("%d = %d / %d",c,a,b);			
	        break;
	    
		default :
		    printf("wrong operator entered");    
	}
	getch();
}
