


/*


include <stdio.h>
int main()

{
    int i,j;
    for ( i = 0; i < 5; i++)  // i=10
    
        printf("from for loop\n");
    

    j=10;  // j=10
    do
    {
        printf("from do-while loop\n");
        j++;
    } while (j<5);
    
    return 0;
}



*/



// break

//#include <stdio.h>
//int main()

//{
  //  int i;
    //for ( i = 0; i < 10; i++)  // i=10
  //  {
       // if (i==3)
         // break;
        
      //  printf("%d\n",i);

      //  if(i==3)
        //break;


//    }

/*

i=0;
while(i<10)
{
   if (i==4)
     break; 

   printf("%d\n",i++);

}


}

*/

/*

// continue

#include <stdio.h>
int main()

{
    int i;
    for ( i = 0; i < 10; i++)  
    {
        if (i==3)
        continue;   // skips 3 and print rest of the numbers 0 1 2 4 5 6 7 8 9
        
       printf("%d\n",i);
    }
}   

*/

/*

#include <stdio.h>
int main()
{
   int i=0;
while(i<10)
{
   if (i==4)
     continue; // 0 1 2 3 , continue loop

   printf("%d\n",i++);

}

}


*/



/*


// primr numbers

#include <stdio.h>
int main()

{
    int num=83;
    int fact=0;

    for ( int i = 2; i*i < num; i++)
    {
        if (num % i == 0)
        {
            fact = 1;
            break;
        }
        
    }

    if (fact==0)
    {
        printf("its a prime number\n");
    }
    else
    {
        printf("its not a prime number\n");
    }

    return 0;
    
    
}

*/

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



// 
