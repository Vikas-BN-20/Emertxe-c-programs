/*

// 1. to Check Whether a Given Number is Even or Odd

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    /*
    if(num % 2 == 0)
    {
        printf("%d is EVEN number\n", num);
    }
    else
    {
        printf("%d is ODD number\n", num);
    }


   // using TERNARY operator
   (num % 2 == 0) ? printf("%d is EVEN number\n", num) : printf("%d is ODD number\n", num);

   // using BITWISE operator

   if(num &  1==1)
    {
        printf("%d is ODD number\n", num);
    }
    else
    {
        printf("%d is EVEN number\n", num);
    }

    return 0;
}

*/

/*

// 2. to Find the Sum of Even and Odd Numbers

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    int sumodd=0,sumeven=0;

    for (int i = 1; i <=n ; i++)
    {
        if(i % 2==0)
        {
            sumeven=sumeven +i;
        }
        else
        {
            sumodd=sumodd+i;
        }

    }
    printf("sum of all EVEN numbers = %d\n", sumeven);
    printf("sum of ODD numbers = %d\n", sumodd);

    return 0;

}

*/

/*

// 3. to Check Whether a Number is Positive or Negative

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num>0)
    printf("%d is a positive number\n", num);
    else if(num<0)
    printf("%d is a negative number\n", num);
    else
    printf("%d is neutral number\n", num);

    return 0;
}

*/

// 4. to Find the Largest Number Among Three Numbers

/*
// using nested-if
#include <stdio.h>
int main()
{
    int n1,n2,n3;
    printf("Enter any 3 numbers: ");
    scanf("%d%d%d", &n1,&n2,&n3);

    if(n1>n2)
    {
        if(n1>n3)
        {
        printf("%d is LARGEST\n",n1);
        }
        else
        {
        printf("%d is LARGEST\n",n3);
        }
    }
    else

        if(n2>n3)
        printf("%d is LARGEST\n",n2);
        else
        {
        printf("%d is LARGEST\n",n3);
        }
    return 0;

}

// using if
#include <stdio.h>
int main()
{
    int n1,n2,n3;
    printf("enter any 3 numbers: ");
    scanf("%d%d%d", &n1,&n2,&n3);

    if(n1>n2 && n1>n3)
    printf("%d is largest\n", n1);
    if(n2>n1 && n2>n3)
    printf("%d is largest\n", n2);
    if(n3>n1 && n3>n2)
    printf("%d is largest\n", n3);

    return 0;
}

*/

// 5. C Program to Add Two Numbers
/*
#include <stdio.h>
int main()
{
    int A,B,sum;
    printf("Enter any 2 numbers: ");
    scanf("%d%d", &A,&B);
    printf("The sum of %d and %d is : %d\n" ,A,B,sum=A+B);

    return 0;
}

// using for loop without using + operator
#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter Two Numbers: ");
    scanf("%d %d",&a,&b);

    int sum=a;

    //Incrementing b to a
    for(int i=0;i<b;i++)
    sum++;

    printf("Sum of %d and %d is: %d ",a,b,sum);
    return 0;
}

*/

/*

// 6. prime number in range of n1 to n2

#include <stdio.h>
int main()
{
    int i,j,num1,num2,prime=1,temp,count=0;
    printf("Enter a value of num1 and num2: ");
    scanf("%d%d", &num1,&num2);
if(num2<2)
{
    printf("There are no prime numbers upto %d\n", num2);
    return 1;
}

printf("prime numbers are : ");

temp=num1;
if(num1 % 2 ==1)
{
    num1++;
}
for(i=num1;i<=num2;i++)
{
    prime=1;
    for(j=2;j<i;j++)
    {
        if(i%j==0)
        {
            prime=0;
            break;
        }
    }
    if(prime==1)
    {
        printf("%d ,",i);
        count++;
    }
}

printf("\nNumber of primes between %d and %d = %d\n", temp,num2,count);
return 0;

}

*/

/*

// 7. check its prime number or not


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

// 8. perfect number

#include <stdio.h>
int main()
{
    int i,n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int sum=0;
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0)
        sum=sum+i;
    }

    if(sum==n)
    {
        printf("%d is a perfect number\n", sum);
    }
    else
    {
        printf("%d is not a perfect number\n", sum);
    }

    return 0;
}

// using WHILE LOOP

#include <stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter a number: ");
    scanf("%d",&n);

    i=1;
    while (i<=n/2)
    {
       if(n%i==0)
       sum=sum+i;
       i++;
    }
    if(sum==n)
    {
        printf("%d is a perfect number\n", sum);
    }
    else
    {
        printf("%d is not a perfect number\n", sum);
    }

    return 0;

}

*/

/*

// 9. palindrome number

#include <stdio.h>
int main()
{
    int n,reverse=0;
    printf("Enter a number: ");
    scanf("%d", &n);

    int temp=n;
    for(;n!=0;n=n/10)
    {
        reverse = reverse*10 + n%10;
    }
    if(reverse==temp)
    {
        printf("%d is a palindrome\n",temp);
    }
    else
    {
        printf("%d is not a palindrome\n",temp);

    }
    return 0;
}


// using WHILE LOOP

#include <stdio.h>
int main()
{
    int n,reverse=0;
    printf("Enter a number: ");
    scanf("%d", &n);

    int temp=n;

    while (n!=0)
    {
        reverse = reverse*10 + n%10;
        n=n/10;
    }
    if (reverse==temp)
    {
        printf("%d is a palindrome\n", temp);
    }
    else
    {
        printf("%d is not a palindrome\n", temp);

    }
    return 0;

}


*/

// 10. sum of N NATURAL numbers

// using FOR LOOP
/*
#include <stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    for (int i = 1; i <=n; i++)
    {
        sum = sum +i;
    }
   printf("sum of first %d numbers is: %d\n",n,sum);
   return 0;

}

// using WHILE LOOP
#include <stdio.h>
int main()
{
    int n,sum=0;
    printf("enter a number: ");
    scanf("%d", &n);
    int i=1;
    while(i<=n)
    {
        sum = sum +i;
        i++;
    }
    printf("sum of first %d numbers is: %d\n", n,sum);
    return 0;
}


// using DO WHILE LOOP
#include <stdio.h>
int main()
{
    int n,sum=0;
    printf("enter a number: ");
    scanf("%d", &n);

    int i=1;
    do
    {
        sum = sum +i;
        i++;
    } while (i<=n);
     printf("sum of first %d numbers is: %d\n", n,sum);


}  

// using formula
#include <stdio.h>
int main()
{
    int n, sum;
    printf("enter a number: ");
    scanf("%d", &n);
    sum = (n * (n + 1)) / 2;
    printf("sum of first %d numbers is: %d\n", n, sum);
    return 0;
}

*/

/*

// 11. SWAP 2 NUMBERS
#include <stdio.h>
int main()
{
    int n1,n2,temp;
    printf("enter a value of n1 and n2: ");
    scanf("%d%d", &n1,&n2);

    temp=n1;
    n1=n2;
    n2=temp;

    printf("the numbers after swaping is %d and %d \n", n1,n2);
    return 0;
}

*/

/*

// 11.to Find the Number of Integers Divisible by 5

#include <stdio.h>
int main()
{
    int i,n1,n2,sum=0,count=0;
    printf("Enter a value of n1 and n2: ");
    scanf("%d%d", &n1,&n2);
    printf("Integers divisible by 5 are: \n");


    for(i=n1;i<=n2;i++)
    {
        if(i%5==0)
        {
            printf("%d ,",i);
            count++;
            sum=sum+i;   
        }

    }
    printf("\nNumber of integers are divisible by 5 between %d and %d = %d\n",n1,n2,count);
    printf("Sum of all integers that are divisible by 5 = %d\n", sum);

    return 0;
}


*/

/*

// 12. to Check if Two Numbers are Equal

#include <stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the value of num1 and num2 : ");
    scanf("%d%d", &num1,&num2);

    if(num1==num2)
    {
        printf("The numbers are EQUAL!\n");
    }
    else
    {
        printf("The numbers are not equal!\n");
    }

    return 0;
}





// 13. Sum of Digits Program in C

#include <stdio.h>
 
int main(void)
{
    int num, sum = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
 
    // Keep dividing until the number is not zero
    while (num != 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    printf("Sum of digits of the number is : %d\n", sum);
    return 0;
}


*/

/*
#include <stdio.h>
int main()
{
    int num,factorial=1;
    printf("enter a number: ");
    scanf("%d", &num);
    for ( int i = 1; i <=num; i++)
    {
        factorial=factorial*i; 
    }
     printf("%d\n",factorial);

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


#include <stdio.h>

int main() {
    int n1, n2;
    int power = 1;

    printf("Enter base (x) and exponent (y): ");
    scanf("%d %d", &n1, &n2);
     int i=1;
    while (i<=n2) {
        power = power * n1;
        i++;
    }

    printf("Result = %d\n", power);

    return 0;
}



*/