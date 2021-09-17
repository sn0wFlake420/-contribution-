#include <stdio.h>
#include <conio.h>
main()
{
   int rows=5, i, j, gap;

   for (i = rows; i >= 1; --i)
   {
      for (gap = 0; gap < rows - i; ++gap)
		{
			 printf("  ");
		}
     for (j = i; j <= 2 * i - 1; ++j)
        {
        	 printf("* ");
		}
      for (j = 0; j < i - 1; ++j)
        {
        	 printf("* ");
		}

	  printf("\n");
   }
   getch();
}
