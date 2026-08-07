#include <stdio.h>

int main()

{

    int n1,n2,n3;

    printf("enter 3 numbers: ");
    scanf("%d%d%d", &n1,&n2,&n3);
    float average = (float) (n1+n2+n3)/3 ;
     printf("the average = %g\n", average);

     return 0;
}