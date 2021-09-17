#include <stdio.h>
#include <conio.h>
main()
{
	int a, b, c;
	
	printf("enter a b c\n");
	scanf("%d%d%d", &a, &b, &c);
	
	if (a>b&&a>c)
	{
		printf("%d is the greatest number", a);
	}
	else if (b>a&&b>c)
	{
		printf("%d is the greatest number", b);
	}
	else if (c>a&&c>b)
	{
		printf("%d is the greatest number", c);
	}
    getch();
}

