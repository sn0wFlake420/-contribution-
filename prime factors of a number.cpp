#include <stdio.h>
#include <conio.h>
main()
   {
    int i, j, n, p;

    
    printf("Enter a number\n");
    scanf("%d", &n);

    printf("Prime Factors of %d are\n", n);

    
    for(i=2; i<=n; i++)
    {
        
        if(n % i==0)
        {
            
            p = 1;
            
			for(j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    p = 0; 	
                    break;
                }
            }

            
            if(p==1)
            {
                printf("%d, ", i);
            }
        }
    }

    getch();
}
