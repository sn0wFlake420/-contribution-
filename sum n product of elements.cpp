#include <stdio.h>
#include <conio.h>
main()
    {
      int m, n, i, j , a[4][4] , sum = 0 , product = 1;
     
      printf("Enter number of rows and columns of the matrix\n");
      scanf("%d%d", &m, &n);
    printf("Enter elements of matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("a[%d][%d] = ",i+1,j+1);
            scanf("%d",&a[i][j]);
            sum = sum + a[i][j];
            product = product*a[i][j];
        }
    }
    printf("Sum = %d",sum);
    printf("Product = %d",product);
    
    getch();
}

