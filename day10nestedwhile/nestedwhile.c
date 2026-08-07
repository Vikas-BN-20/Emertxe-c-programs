


/*

// 4321, 432,43,4

#include <stdio.h>
int main()

{
    int n ;
    int i = 1;
    printf("enter a number n :");
    scanf("%d", &n);
    while(i <= n)
    {
        int num=n;
        int j=n;
        while(j>0)
        {
            if(i+j > n+1)
            {
                printf("   ");
            }
            else
            {
                printf(" %d ", num--);
            }

            j--;

        }

        printf("\n");
        i++;

    }
}


*/



/*


// criss cross numbers 

#include <stdio.h>
int main()

{
    int n ;
    int i = 1;
    printf("enter a number n :");
    scanf("%d", &n);
    while(i <= n)
    {
        int j=1;
        while(j<=n)
        {
            if(i==j || i+j==n+1)
            {
                printf(" %d ", j);
            }
            else
            {
                printf("   ");
            }

            j++;

        }

        printf("\n");
        i++;

    }
}


*/

/*

// box using dashes

#include <stdio.h>
int main()

{
    int n ;
    int i = 1;
    printf("enter a number n :");
    scanf("%d", &n);
    while(i <= n)
    {
        int j=1;
        while(j<=n)
        {
            if(i==1 || i==n)
            {
                printf(" - ");
            }
            else if(j==1 || j==n)
            {
                printf(" | ");
            }
            else
            {
                printf("    ");
            }

            j++;

        }

        printf("\n");
        i++;

    }
}


*/



/*


// print stars



#include <stdio.h>
int main()

{
    int n ;
    int i = 1;
    printf("enter a number n :");
    scanf("%d", &n);
    while(i <= n)
    {
        int j=1;
        while(j<=n)
        {
            if(i==1 || i==n || j==1 || j==(n/2))
            {
                printf(" * ");
            }
            
            else
            {
                if(j>n/2)
                break;

                printf("   ");
            }

            j++;

        }

        printf("\n");
        i++;

    }
}


*/



/*



// Fibonacci sequence

#include <stdio.h>
int main()

{
    int n;
    int n1=0 , n2=1 , next;
    printf("enter a number: ");
    scanf("%d", &n);


    if(n<0)
    {
        printf("Invalid Input!\n");
    }  

    else
    {

     while (n1<=n)
     {
       printf("%d ",n1);
       next=n1+n2;
       n1=n2;
       n2=next;
     }

     printf("\n");

    }

    return 0;

}


*/


/*


// using while loop printing digits in box pattern from largest outside to lowest inside


#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int size = 2 * n - 1;
    int i = 0;

    while (i < size) {
        int j = 0;
        while (j < size) {
            // Find minimum distance from any of the 4 borders
            int min_dist = i;
            if (j < min_dist) min_dist = j;
            if (size - 1 - i < min_dist) min_dist = size - 1 - i;
            if (size - 1 - j < min_dist) min_dist = size - 1 - j;

            printf("%d ", n - min_dist);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}


// using for loop

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int size = 2 * n - 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // Find distance from top, bottom, left, and right borders
            int min_row = i < size - 1 - i ? i : size - 1 - i;
            int min_col = j < size - 1 - j ? j : size - 1 - j;
            int min_dist = min_row < min_col ? min_row : min_col;

            printf("%d ", n - min_dist);
        }
        printf("\n");
    }

    return 0;
}


*/



/*

// practice for loop printing digits

#include <stdio.h>
int main()
{
    int i,j;
    int n;
    printf("Enter maximum lines: ");
    scanf("%d", &n);

    for ( i = 1; i <=n; i++)
    {
        for ( j = 1; j<=i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
        
    }

    return 0;
    
}

*/


/*

// print arrow format using stars

#include <stdio.h>
int main()
{
    int i,j,n;
    printf("enter a number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
        printf(" * ");
        }

         printf("\n");
    }

for( i=n-1;i>=1;i--)
{
    for(j=1;j<=i;j++)
    {
    printf(" * ");
    }

    printf("\n");
}

return 0;


}


*/



/*

// ABCD pyramid

#include <stdio.h>
int main()
{
    int i,j,k,n;
    printf("enter a number : ");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
         char ch='A';

        for(j=1;j<=n;j++)
        {
            if(i+j<=n)
            {
                printf("   ");
            }
            else
            {
                printf(" %c ", ch++);
            }

        }
        ch--;

        for(k=i;k>1;k--)
        {
            printf(" %c ",--ch);
        }

        printf("\n");
    }
}


*/




/*

// size of operators

#include <stdio.h>
int main()
{
    int num;
    double dnum;

    printf("size of int is %lu", sizeof(int));
    printf("size of num is %lu", sizeof(num));
    printf("size of dnum is %lu", sizeof dnum);
    printf("size of num is %p", &num);

    return 0;
    
}

*/

/*


// ASSIGNMENT 4 perfect number

#include <stdio.h>
int main()

{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);

    if(n<=0)
    {
        printf("Error : Invalid Input, Enter only positive number\n");

        return 1;
    }

    int sum = 0;

    for(int i=1;i<=n/2;i++)
    {
        if(n%i == 0)
        sum = sum+i;
    }

    if(sum==n)
    {
        printf("Yes, entered number is perfect number\n");
    }
    else
    {
        printf("No, entered number is not a perfect number\n");
    }

    return 0;

}

*/

/*

// reverse arrow using stars

#include <stdio.h>
int main()
{
    int i,j,n;
    printf("enter a number: ");
    scanf("%d", &n);
    // upper star pattern
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        printf("   ");
       
    for ( j = 1; j<=i; j++)
    
        printf(" * ");
        printf("\n");
    }

    // lower star pattern
     for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)
        printf("   ");
       
    for ( j = 1; j<=i; j++)
 
        printf(" * ");
        printf("\n");
    }

    return 0;
}

*/



/*

// pyramid shape ABCD pattern

#include <stdio.h>
int main()
{
    int i,j,n;
    printf("enter a number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        
        for(j=1;j<=n-i;j++)
        
            printf("   ");

            char ch='A';

            for(j=0;j<i;j++)
            {
                printf(" %c ", ch);
                ch++;
            }
             
            ch-=2;
            for(j=i-2;j>=0;j--)
            {
              printf(" %c ", ch);
              ch--;

            }
             printf("\n");
    }


     for(i=n-1;i>=1;i--)
    {
        
        for(j=1;j<=n-i;j++)
        
            printf("   ");

            char ch='A';

            for(j=0;j<i;j++)
            {
                printf(" %c ", ch);
                ch++;
            }
             
            ch-=2;
            for(j=i-2;j>=0;j--)
            {
              printf(" %c ", ch);
              ch--;

            }
             printf("\n");
    }

    return 0;

}

*/

/*

#include <stdio.h>
int main()
{
    int i,j,n;
    printf("enter a number: ");
    scanf("%d",&n);
    char ch='A';
    for ( i = 0; i <=n ; i++)
    {
        
        for(j=n;j>i;j--)
        {
        printf(" %c ",i+65);
        }
        printf("\n");

    }
    
    
}


*/


// assignment 5 AP HP GP

#include <stdio.h>
int main()
{
    int a,r,n,i;
    int temp;
    printf("Enter the first term: ");
    scanf("%d", &a);
    printf("Enter the common difference/ratio: ");
    scanf("%d", &r);
    printf("Enter the number of terms'N': ");
    scanf("%d", &n);

    if(a<=0||r<=0||n<1)
    {
        printf("Invalid input");
        return 1;
    }

    printf("AP = ");
    temp=a;
    for ( i = 1; i <=n; i++)
    {
        printf("%d, ",temp);
        temp=temp+r;
      
    }
    printf("\n");

    printf("GP = ");
    temp=a;
    for ( i = 1; i <=n; i++)
    {
        printf("%d, ",temp);
        temp=temp*r;
       
    }
    printf("\n");

    printf("HP = ");
    temp=a;
    for ( i = 1; i <=n; i++)
    {
        printf("%f, ",(float)1/temp);
        temp=temp+r;
       
    }
    printf("\n");
    return 0;   
}