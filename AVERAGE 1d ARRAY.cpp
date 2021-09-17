#include <stdio.h>
#include <conio.h>
main()
{
int marks[1000], i, n, sum=0 ;
float average;

printf("Enter number of elements:");
scanf("%d", &n);
for(i=0; i<n; ++i)
{
printf("Enter number%d:",i+1);
scanf("%d", &marks[i]);
sum = sum+marks[i]; }
average =(float) sum/n;
printf("Average = %.2f", average);
getch();
}
