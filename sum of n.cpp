#include <stdio.h>
#include <conio.h>
main() 
    {
     int n, i, sum = 0;

    printf("Enter a number\n");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) 
	{
        sum = sum + i;
    }

    printf("sum = %d", sum);
    
    getch();
}
