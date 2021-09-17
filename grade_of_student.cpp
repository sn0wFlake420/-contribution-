#include<stdio.h>
#include<conio.h>
int main()
{
	int  marks , i;
	long int roll;

	for(i=1 ; i<5 ; i++) {
		printf("enter roll number :");
		scanf("%ld",&roll);

		printf("enter marks :");
		scanf("%d", &marks);

	printf("Roll number : %d\n", roll);

	if (marks>=85)
	printf("GRADE = A+\n");
	else if (marks>=75 && marks<85)
	printf("GRADE = A\n");
	else if (marks>=65 && marks<75)
	printf("GRADE = B\n");
	else if (marks>=50 && marks<65)
	printf("GRADE = C\n");
	else if (marks>=40 && marks<50)
	printf("GRADE = D\n");
	else
	printf("GRADE = F\n");
}
getch();
}
