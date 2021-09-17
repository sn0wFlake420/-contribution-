#include <stdio.h>
#include <conio.h>
main()
{
	int x,y,z;
	
	printf("enter the value of x and y\n");
	scanf("%d%d", &x, &y);
	
	z=x+y;
	printf("%d+%d=%d\n", x, y, z);
	
	getch();
}
