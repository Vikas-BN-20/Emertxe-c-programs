// RECURSSION 

/*

#include <stdio.h>
void fun(int);
int main()
{
    fun(3);
}
void fun(int n)
{
    if(n<1)
    return;

    fun(n-1);
    printf("HELLO\n");
}



#include <stdio.h>
void fun(int);
int main()
{
    fun(4);
}
void fun(int n)
{
    if(n<=0)
    return;
    
    printf("%d\n",n);
    fun(n-1);
    printf("%d\n",n); // OP = 4 3 2 1 1 2 3 4
 
}
*/

/*

#include <stdio.h>
int sum(int);
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("Sum of first %d natural number is: %d\n",n,sum(n));
    return 0;
}
int sum(int n)
{
    //Base Case
    if(n==1)
    return 1;
    return n + sum(n-1);
}


*/

