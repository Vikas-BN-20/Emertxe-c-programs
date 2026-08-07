
/*



// nested for day 9

#include <stdio.h>
int main()
{
    int i,j;

    for ( i = 1; i <= 3; i++) // number of lines
    {
        for ( j = 1 ; j <= 5 ; j++) // number of characters
        {
            printf(" * ");
        }

        printf("\n");
        
    }
    
    return 0;
}


*/




/*


// 1234 4 times

#include <stdio.h>
int main()
{
    int i,j,n;
    printf("enter a numer of lines: ");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++) // number of lines
    {
        for ( j = 1 ; j <= n ; j++) // number of characters
        {
            printf(" %d ",j);
        }

        printf("\n");
        
    }
    
    return 0;
}


*/



/*


// ABC DEF GHI IN 3 LINES


#include <stdio.h>
int main()
{
    int i,j,n;
    printf("enter a numer of lines: ");
    scanf("%d", &n);

    char ch='A';

    for ( i = 1; i <= n; i++) // number of lines
    {
        for ( j = 1 ; j <= n ; j++) // number of characters
        {
            printf(" %c ",ch++);
        }

        printf("\n");
        
    }
    
    return 0;
}


*/



/*


// ABCD ABCD ABCD in 4 LINES

#include <stdio.h>
int main()

{
    int i,j,n;
    printf("enter a number of lines: ");
    scanf("%d", &n);

    for ( i = 0; i <=n; i++)
    {
        char ch='A';

        for ( j = 1 ; j <= n ; j++)
        {
            printf(" %c ", ch++);
        }
        
        printf("\n");
    }
    
    return 0;

}


*/




/*


// 1, 12, 123, 1234 in 4 lines

#include <stdio.h>
int main()

{
    int i,j,n;
    printf("enter a number of lines: ");
    scanf("%d", &n);

    for ( i = 1; i <=n ; i++)
    {
        for ( j = 1; j <= i ; j++)
        {
            printf(" %d ", j);
        }
        
        printf("\n");
    }

    return 0;
    
}


*/


/*



// A, BC,DEF,GHIJ in 4 LINES

#include <stdio.h>
int main()

{
    int i,j,n;
    printf("enter a number of lines: ");
    scanf("%d", &n);
    char ch='A';

    for ( i = 1; i <=n ; i++)
    {
        for ( j = 1; j <= i ; j++)
        {
            printf(" %c ", ch++);
        }
        
        printf("\n");
    }

    return 0;
    
}


*/

/*

// 4321, 432, 43, 4 in 4 lines in reverse

#include <stdio.h>
int main()

{
    int i,j,n;
    printf("enter a number of lines: ");
    scanf("%d", &n);

    for ( i = 1; i <=n ; i++)
    {
        for ( j = n ; j >= i ; j--)
        {
            printf(" %d ", j);
        }
        
        printf("\n");
    }

    return 0;
    
}


*/


/*

// Asignment 7


#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the number: ");
    scanf("%d", &n);

    // Top half: n down to 1
    for (i = n; i >= 1; i--) {
        for (j = i; j <= n; j++) {
            printf("%d", j);
            if (j != n)
                printf(" ");
        }
        printf("\n");
    }

    // Bottom half: 2 back up to n
    for (i = 2; i <= n; i++) {
        for (j = i; j <= n; j++) {
            printf("%d", j);
            if (j != n)
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
    

*/



/*


// check its prime number or not


#include <stdio.h>
int main()
{
    int n,prime=1;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n<0)
    {
        printf("Invalid input!\n");

        return 1;
    }

    if(n==0 || n==1)
    {
        prime=0;
    }

    for(int i=2;i<n; i++)
    {
        if(n % i==0)
        {
            prime=0;
            break;
        }
    }

    if(prime==1)
    {
        printf("%d is a prime number\n",n);
    }
    else
    {
        printf("%d is not a prime number\n",n);
    }
    return 0;
}

*/

/*

// prime numbers upto limit

#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Enter a limit: ");
    scanf("%d", &n);

    for(i=2;i<=n;i++)
    {
        
   int prime=1;

    for(j=2;j<i;j++)
    {
        if(i % j == 0)
        {
            prime=0;
            break;
        }
    }

    if(prime==1)
    printf("%d, ", i);
    }

    printf("\n");
    return 0;
}
    */

/*
// print Rhombus

#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Enter n value: ");
    scanf("%d", &n);

    // upper half of Rhombus

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }    

            for(j=1;j<=(2*i-1);j++)
            {
                printf("*");
            }
            printf("\n");   

    }

    // lower half

     for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }    

            for(j=1;j<=(2*i-1);j++)
            {
                printf("*");
                
            }
             printf("\n"); 
         
    }

    return 0;

}

*/