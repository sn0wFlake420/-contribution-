
#include<stdio.h>  
#include<conio.h>
main()
 {
 	int n,i;
 	long int s=0;
    
	printf("Enter a number\n");
    scanf("%d",&n);
    
	i=1;

    while (i <= n) 
	{
        s+=i; ++i;
    }

    printf("sum of first %d natural numbers is = %ld", n, s);
    getch();
}
