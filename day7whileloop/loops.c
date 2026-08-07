/*

// n natural numbers


#include <stdio.h>
int main()

{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    
    int i=1;

    while(i<=n)
    {
        printf("%d\n", i);
        i++;
    }

    return 0;

}

*/



/*


// n even numbers

#include <stdio.h>
int main()

{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);

    int i=2;
    while(i<=n)
    {
    printf("%d\n", i);
    i=i+2;
    }
    return 0;

}

*/



/*



//reverse a number

#include <stdio.h>
int main()

{
    int n;
    int reverse=0;
    printf("enter a number: ");
    scanf("%d", &n);

    while(n!=0)
    {
        reverse = reverse*10 + n%10;
        n = n/10;
    }

    printf("Reverse number is %d\n", reverse);

    return 0;

}

*/


/*

// check whether a number is palindrome or not

#include <stdio.h>
int main()

{
    int n, reverse=0;
    printf("enter a number: ");
    scanf("%d", &n);
    int temp=n;
    while(n!=0)

    {
        reverse = reverse*10 + n%10;
        n = n/10;
    }

    if(reverse==temp)
    {
        printf("%d is Palindrome\n",temp);
    }
    else
    {
        printf("%d is Not a palindrome\n",temp);
    }

    return 0;
}


*/

/*


// palindrome using for loop

#include <stdio.h>
int main()
{
    int n,reverse=0;
    printf("enter the number: ");
    scanf("%d", &n);
    int temp=n;

    for( ; n!=0; n=n/10)
    {
        reverse = reverse*10 + n%10 ;
         
    }

    if(reverse==temp)
    {
        printf("its palindrome\n");
    }
    else
    {
        printf("its not a palindrome\n");
    }

    return 0;

}

*/

