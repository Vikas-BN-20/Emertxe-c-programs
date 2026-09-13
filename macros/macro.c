/* // SUM OF 2 NUMBERS USING MACRO'S


#include <stdio.h>

#define SUM(a,b) a+b

int main()
{

    printf("sum = %d\n", SUM(1,3));

    return 0;
}

//

#include <stdio.h>

#define my main
#define pf printf
#define f ;
#define ret return

int my()
{
    pf("Hello\n")f
    ret 0;
}
 */

/* 
 #include <stdio.h>
 #define INC_BY_2(a) a+2

 int main()
 {
    int n=5;
    printf("n=%d" ,INC_BY_2(n) );
    printf("d=%g",INC_BY_2(10.5));

    return 0;
 }
 */

/* 
 // swapping numbers using MACROS

#include <stdio.h>

#define SWAP(x,y)  \
{                  \
    int temp=x;    \
    x=y;           \
    y=temp;        \
}                  \

int main()
{
    int n1 = 2, n2 = 5;

    printf("%d   %d\n", n1,n2);

    SWAP(n1,n2);

    printf("%d   %d\n", n1,n2);

} */

// DIFFERENT TYPES OF ,MACROS

#include <stdio.h>

int main()
{
    #line 5000"macro.c"
    printf("Line number -> %d\n",__LINE__);
    printf("Date -> %s\nTime -> %s\n", __DATE__,__TIME__);
    printf("File -> %s\n", __FILE__);
    printf("Function -> %s\n",__func__);
}