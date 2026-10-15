/* #include <stdio.h>
#include <stdarg.h>

int add(int count, ...)
{
    int sum=0;
    va_list ap;
    va_start(ap,count);

    for(int i=0;i<count;i++)
    {
        sum = sum + va_arg(ap, int);
    }
    va_end(ap);
    return sum;
}

int main()
{
    printf("Addition is %d\n", add(2,10,20));
    printf("Addition is %d\n", add(3,10,20,30));
    printf("Addition is %d\n", add(4,10,20,30,40));
}
    
 */




// FUNCTION POINTER

/* 
#include <stdio.h>

int fun1(int num)
{
    printf("%d\n", num);
}
int main()
{
    printf("Address of fun1 -> %p\n", fun1);

    // datatype (*ptr_name)(arg);

    int (*ptr)(int); // wild pointer
    ptr = fun1;
    printf("ptr is -> %p\n", ptr);

    ptr(10);
}
 */


/* 

#include <stdio.h>

int add(int n1, int n2)
{
    return n1+n2;
}
int sub(int n1, int n2)
{
    return n1-n2;
}
int operation(int n1, int n2, int (*ptr)(int,int))
{
    return ptr(n1, n2);
}
int main()
{
    printf("Addition -> %d\n", operation(10,20, add));

    printf("Subtraction -> %d\n", operation(24,8,sub));

}
 */


// qsort function 

#include <stdio.h>
#include <stdlib.h>

int ascend(const void *v1, const void *v2)
{
    return *(int*)v1 > *(int*)v2;
}
int descend(const void *v1, const void *v2)
{
    return *(int*)v1 < *(int*)v2;
}
int main()
{
    int arr[8] = {3, -1, 0, 2, 9, 7, -5, -7};

    qsort(arr, 8, 4,ascend);
    qsort(arr, 8, 4,descend);

    printf("Sorted array -> %d ",arr);
}





