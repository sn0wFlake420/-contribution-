#include <stdio.h>
#include <conio.h>
main()
    {
      int m, n, i, j;
      int A[4][4];

      printf("Enter number of rows and columns of the matrix\n");
      scanf("%d%d", &m, &n);

	  printf("Enter elements of matrix\n");

      for (i = 0; i < m; i++)
      {
        for (j = 0; j < n; j++)
        {
		  scanf("%d", &A[i][j]);
      }
  }

  printf("required matrix:\n");

        for (i = 0; i < m; i++)
		{
          for (j = 0; j < n; j++)
	    printf("%d\t", A[i][j]);

          printf("\n");
        }

  getch();
}
