#include <stdio.h>

int main()

{

    int num1, num2, sum;

    printf("enter 2 numbers: ");
    scanf("%d %d", &num1, &num2);
     sum = num1+num2;
     printf("sum = %d\n", sum);

     printf("difference= %d\n", num1-num2);
     printf("multiplication= %d\n", num1*num2);
     printf("division= %g\n", (float)num1/num2);

    return 0;


}