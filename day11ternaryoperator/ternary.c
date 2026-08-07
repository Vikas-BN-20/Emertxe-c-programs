// TERNARY OPERATOR

/*
// smaller or greater

#include <stdio.h>
int main()
{
    int n;
    printf("enter a value of n : ");
    scanf("%d", &n);
    (n>5) ? printf("%d is greater than 5\n",n) : printf("%d is smaller than 5\n",n);
    return 0;
}

*/
/*
// find which is smaller

#include <stdio.h>
int main()
{
    int n1,n2;
    printf("enter any 2 numbers: ");
    scanf("%d%d", &n1,&n2);

    (n1<n2) ?  printf("%d is smaller\n",n1) : printf("%d is smaller\n", n2);
    return 0;
}


#include <stdio.h>
int main()
{
    int n1,n2,small;
    printf("enter any 2 numbers: ");
    scanf("%d%d", &n1,&n2);

    small = n1<n2 ?  n1 :  n2;
    printf("%d is smaller\n",small);
    return 0;
}

*/

/*
// EVEN OR ODD

#include <stdio.h>
int main()
{
    int num;
    printf("enter a number: ");
    scanf("%d", &num);
    (num % 2 ==0) ? printf("%d is EVEN\n",num) : printf("%d is ODD\n",num);
    return 0;
} */

/*
// check positive or negative

#include <stdio.h>
int main()
{
    int num;
    printf("enter a number: ");
    scanf("%d", &num);
    (num > 0) ? printf("%d is POSITIVE\n",num) : printf("%d is NEGATIVE\n",num);
    return 0;
}

*/



// NESTED TERNARY

// check positive or negative or ZERO

#include <stdio.h>
int main()
{
    int num;
    printf("enter a number: ");
    scanf("%d", &num);
    (num >= 0) ? (num==0 ? printf("%d is ZERO\n",num) : printf("%d is POSITIVE\n",num)) : printf("%d is NEGATIVE\n",num);
    return 0;
}


// POSITIVE EVEN OR ODD , NEGATIVE EVEN OR ODD

#include <stdio.h>
int main()
{
    int num;
    printf("enter a number: ");
    scanf("%d", &num);
    (num>0) ? (num % 2==0 ? printf("%d is positive and even\n", num) : printf("%d is positive and odd\n", num)):
              (num % 2 ==0 ? printf("%d is negative and even\n", num) : printf("%d is negative and odd\n", num));
    return 0;
}

// (num==0 ? printf("%d is ZERO\n", num)) : (num % 2 ==0 ? printf("%d is negative and even\n", num) : printf("%d is negative and odd\n", num));



