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

*/


/*
// LITTLE ENDIAN AND BIG ENDIAN

#include <stdio.h>
int main()
{
    unsigned int num=0x12345678;
    char *ptr = (char *)&num;

    if(*ptr == 0x78)
    printf("LITTLE ENDIAN\n");
    else
    printf("BIG ENDIAN\n");

    return 0;
}

*/

/*

// sum and product of 2 numbers using 1 function

#include <stdio.h>
int sumpro(int n1,int n2,int *p1,int *p2);
int main()
{
    int n1,n2;
    int sum=0,pro=0;
    printf("Enter the number: ");
    scanf("%d%d",&n1,&n2);
    sumpro(n1,n2,&sum,&pro);
    printf("sum and product of two numbers is %d and %d\n",sum,pro);
}
int sumpro(int n1,int n2,int *p1,int *p2)
{
    *p1 = n1+n2;
    *p2 = n1 * n2;
}

*/


/*

// array using pointers and function

#include <stdio.h>
void display(int *ptr, int p);
int main()
{
    int arr[3]={10,20,30};
    display(arr,3); // pass by reference
    return 0;
}
void display(int *ptr, int p)
{
    for(int i=0;i<p;i++)
    {
        printf("%d \n", ptr[i]);
    }
}

*/

/*


// square of the each array element

#include <stdio.h>
void input(int *ptr,int s);
void square(int *ptr,int s);
void print(int *ptr, int s);

int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d", &size);

    int arr[size];
    input(arr,size);
    square(arr,size);
    print(arr,size);

}
void input(int *ptr,int s)
{
    printf("Enter the array elements: ");
    for(int i=0;i<s;i++)
    {
        scanf("%d",(ptr+i));
    }
}
void square(int *ptr,int s)
{
    for(int i=0;i<s;i++)
    {
        *ptr = *ptr * *ptr;
        ptr++;
    }
}
void print(int *ptr, int s)
{
    for(int i=0;i<s;i++)
    {
        printf("%d \n", ptr[i]);
    }
}

*/

/*

// AVERAGE OF ARRAY ELEMENTS

#include <stdio.h>
void average(int *ptr, int s);
int main()
{
    int size;
    printf("Enter the size : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements : ");
    for(int i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }
    
    average(arr,size);
    return 0;
}
void average(int *ptr, int s)
{
    float sum=0,average;
    for(int i=0;i<s;i++)
    {
        sum = sum + ptr[i];
        average = sum/s;

    }
    printf("Average is %g\n",average);

}

*/


// void pointer function

#include <stdio.h>
void swap(void *v1, void *v2 , int size);
int main()
{
    int n1=10 , n2=20;

    swap(&n1,&n2, sizeof(int));
    printf("n1 = %d, n2 = %d\n", n1, n2);

    double d1=1.5, d2=2.5;
    swap(&d1,&d2, sizeof(double));
    
    printf("d1 = %g, d2 = %g\n", d1, d2);

    return 0;
}

void swap(void *v1, void *v2 , int size)
{
    char temp = 0;
    for(int i=0;i<size;i++)
    {
        temp = *((char *)v1 + i);
        *((char *)v1 + i) = *((char *)v2 + i);
        *((char *)v2 + i) = temp;
    }

}
