#include<stdio.h>  
#include<conio.h>
main()
 {
 	int x,s;
 	
 	do
 	{
 	  printf("enter a number\n");
 	  scanf("%d",&x);
 	  
 	  s=s+x;
	 }
	 
	 while(x !=0);
	 
	 printf("sum of numbers = %d",s);
	 
	 getch();
	 
 }
