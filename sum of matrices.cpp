#include <stdio.h>
#include <conio.h>
main()
    {
      int m, n, p, q, i, j;
      int A[3][3], B[3][3], C[3][3];
     
      printf("Enter number of rows and columns of first matrix\n");
      scanf("%d %d", &m, &n);
      
	  printf("Enter elements of first matrix\n");
     
      for (i = 0; i < m; i++)
      {
        for (j = 0; j < n; j++)
        {
          scanf("%d", &A[i][j]);
      }
  }
     
      printf("Enter number of rows and columns of second matrix\n");
      scanf("%d%d", &p, &q);
     
      if (m != p || n!=q)
      {
        printf("The matrices can't be ADDED with each other.\n");
    }
      else
      {
        printf("Enter elements of second matrix\n");
     
        for (i = 0; i < p; i++)
        {
          for (j = 0; j < q; j++)
          {
            scanf("%d", &B[i][j]);
        }
    }
     
        for (i = 0; i < m; i++) 
		{
          for (j = 0; j < n; j++) 
		   {
	      C[i][j]= A[i][j] +B[i][j];
            }
     
          }
      }
     
	printf("Addition of the matrices:\n");
     
        for (i = 0; i < m; i++) 
		{
          for (j = 0; j < n; j++)
	    printf("%d\t", C[i][j]);
     
          printf("\n");
        }
     getch();
    }

