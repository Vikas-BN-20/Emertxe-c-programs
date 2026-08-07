// FUNCTIONS

/*
// modify a number

#include <stdio.h>
int modify(int);
int main()
{
    int num=10;
    
    printf("Enter a number: ");
    scanf("%d",&num);

    int result = modify(num);
    printf("After modifying num is %d\n",result);

    return 0;
}

int modify(int num)
{
    num=num+5;
    return num;
}


*/


/*
//addition 

#include <stdio.h>
int addition(int,int);
int main()
{
    int n1,n2;
    printf("Enter two numbers: ");
    scanf("%d%d", &n1,&n2);

    int sum = addition(n1,n2);
    printf("Addition is:  %d\n", sum);
    return 0;
}

int addition(int n1, int n2)
{
    return n1+n2;
}


*/

/*

// ADDITION SUBTRACTION MULTIPLICATION DIVISION

#include <stdio.h>

int addition(int, int);
int subtraction(int, int);
int multiplication(int, int);
float division(int, int);
int main()
{
    int n1,n2;
    printf("Enter two numbers: ");
    scanf("%d%d", &n1,&n2);

    int sum = addition(n1,n2);
    int sub = subtraction(n1,n2);
    int mul = multiplication(n1,n2);
    float div = division(n1,n2);
    printf("Addition is:  %d\n", sum);
    printf("Subtraction is: %d\n",sub);
    printf("Multiplication is: %d\n",mul);
    
    if (n2 != 0)
    printf("Division is: %f\n", div);
    else
    printf("Division is not possible by zero\n");
    return 0;
}

int addition(int n1, int n2)
{
    return n1+n2;
}
int subtraction(int n1, int n2)
{
    return n1-n2;
}
int multiplication(int n1, int n2)
{
    return n1*n2;
}
float division(int n1,int n2)
{
    return (float)n1/n2;
}

*/

/*

// average of 3 numbers

#include <stdio.h>

float average(int n1,int n2, int n3)
{
    return (float)(n1+n2+n3)/3;
}

int main()
{
    int n1,n2,n3;
    printf("Enter any 3 numbers: ");
    scanf("%d%d%d", &n1,&n2,&n3);


    float avg = average(n1,n2,n3);
    printf("Average is : %f\n", avg);
}

*/

/*

// smallest between 2 numbers

#include <stdio.h>
 int small(int n1,int n2)
 {
    return n1<n2;
 }

int main()
{
    int n1,n2;
    printf("Enter a number: ");
    scanf("%d%d", &n1,&n2);

    if (small(n1,n2))
    {
    printf("Smallest number is : %d\n", n1);
    }
    else
    printf("Smallest number is : %d\n", n2);

    return 0;

}

*/

/*

// check prime or not

#include <stdio.h>

int prime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
    if(n%i==0)
    return 0;
    }
    return 1;
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

   
    if(prime(num))
    {
        printf("%d is a prime\n",num);
    }
    else
    {
        printf("%d is not a prime\n",num);
    }

    return 0;

}

*/


/*
// check palindrome or not

#include <stdio.h>

int palindrome(int n)
{
    int reverse=0;
    while(n!=0)
    {
        reverse=reverse*10 + n%10;
        n=n/10;
    } 
    
    return reverse;
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num<0)
    {
        printf("Invalid input\n");
        return 0;
    }

    int result = palindrome(num);
    if(result==num)
    {
        printf("%d is a palindrome\n",num);
    }
    else
    {
        printf("%d is not a palindrome\n",num);
    }

    return 0;
}

*/

/*

// FACTORIAL

#include <stdio.h>
int factorial(int);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    int result=factorial(num);
    printf("Factorial is %d\n", result);

    return 0;
}

int factorial(int num)
{
    int fact=1;
    for(int i=1;i<=num;i++)
    {
        fact = fact*i;
    }
    return fact;
}

*/

// prime numbers upto limit

#include <stdio.h>
int is_prime(int);
void generate_prime(int);

int main()
{
    int limit;
    
    printf("Enter the limit: ");
    scanf("%d", &limit);
    
    if (limit > 1)
    {
        generate_prime(limit);
    }
    else
    {
        printf("Invalid input\n");
    }

    return 0;
}
int is_prime(int num)
{
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        return 0;
    }
    return 1;

}
void generate_prime(int limit)
{
    for(int i=2;i<=limit;i++)
    {
        if(is_prime(i))
        {
        printf("%d ",i);
        }
    }
    printf("\n");
    
}
