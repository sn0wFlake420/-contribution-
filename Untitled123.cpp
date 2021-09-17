#include<stdio.h>
#include<conio.h>
main()
{
short int mark,i;
long int rollnumber;

for(i=1;i<=5; i++)
{
printf("\nEnter your roll number : ");
scanf("%ld",&rollnumber);
printf("Enter your mark : ");
scanf("%hd",&mark);

printf("\n roll no = %ld \n",rollnumber);
if(mark>=85)
 printf("Grade = A+");
else if(mark>=75 && mark<85)
 printf("Grade = A");
 else if(mark>=65 && mark<75)
 printf("Grade = B");
 else if(mark>=50 && mark<65)
 printf("Grade = C");
else if(mark>=40 && mark<50)
printf("Grade = D");
 else
 printf("Grade = F");
 }
getch();
}

