// pointers

/*

 // size of different variables 

#include <stdio.h>
int main()
{
    int *iptr;
    float *fptr;
    char *cptr;
    double *dptr;

    printf("%lu  %lu  %lu  %lu\n", sizeof(iptr),sizeof(fptr),sizeof(cptr),sizeof(dptr));

    return 0;
}

*/

/*

#include <stdio.h>
int main()
{
    // int *iptr;
    int num;
    // iptr=&num;
    int *iptr = &num; // referencing 
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("%d   %d\n", num,*iptr); // deferencing

    printf("%p    %p\n", &num, iptr);

    return 0;
}

*/

/*

#include <stdio.h>
void fun(int *n1);
int main()
{
    int n=5;
    printf("%d \n",n);

    fun(&n);
    printf("%d\n", n);

    return 0;
}
void fun(int *n1)
{
    *n1=10;
    printf("%d \n", *n1);
}

*/


// call by value and call by reference

#include <stdio.h>
int swap(int *p1,int *p2);
int main()
{
    int n1=10,n2=20;
    printf("%d   %d\n", n1,n2);

    swap(&n1,&n2);

    printf("%d    %d\n",n1,n2);

    return 0;

}

int swap(int *p1, int *p2)
{
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}



