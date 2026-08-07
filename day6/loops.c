/*

#include <stdio.h>
int main()


{
   int i;
   for ( i = 1; i <=3; i++)
   {
    printf("hello\n");
   }

   printf("outside \n");
 
   return 0;
}

*/


/*

// reverse n natural numbers

#include <stdio.h>
int main()

{
    int i , n;
    printf("Enter n: ");
    scanf("%d", &n);

    for ( i=n ; i >= 1; i--)
    {
        printf("%d\n", i);
    }
    
    return 0;

}

*/

/*


// positive even numbers upto limit


#include <stdio.h>
int main()

{
    int i,n;
    printf("Enter a n: ");
    scanf("%d", &n);

    for ( i = 2; i <= n; i=i+2)
    {
        printf("%d\n", i);
        
    }
    
    return 0;
}

*/

/*

// reverse odd numbers for any number


#include <stdio.h>
int main()

{
    int i,n;
    printf("Enter a n: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        n--;
    }
    

    for ( i = n; i >= 1; i=i-2)
    {
        printf("%d\n", i);
        
    }
    
    return 0;
}

*/

/*


// multiply 2 numbers without using '*'

#include <stdio.h>
int main()

{
    int i,n1,n2;
    printf("enter 2 numbers: ");
    scanf("%d%d", &n1,&n2);

    int pro=0;

    for ( i =0; i < n2 ; i++)
    {
        pro = pro+n1 ;
    }

    printf("%d\n", pro);
 
    return 0;

}


*/

/*



// finding the average of n natural numers

#include <stdio.h>
int main()

{
    int i,n;
    printf("enter any numers: ");
    scanf("%d", &n);

    int sum=0;

    for ( i = 1; i <=n; i++)
    {
        sum=sum+i;
    }

    printf("Avg= %g\n",(float) sum/n);

    return 0;
    
}


*/

/*

//  powers of number 


#include <stdio.h>
int main()

{
    int i,n;
    printf("enter n value: ");
    scanf("%d",&n);
     
    for ( i = n; i<=n ; i++)
    {
        printf("%d\n",i*i);
    
    }
return 0;
    
}

*/

/*



// power of 2

#include <stdio.h>
int main()

{
    int i,n,power=1;
    printf("enter n value: ");
    scanf("%d",&n);
     
    for ( i = 1; i<=n ; i++)
    {
        printf("%d \n",power);
        power=power*2;
    
    }
return 0;
    
}

*/




