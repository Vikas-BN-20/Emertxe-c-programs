#include <stdio.h>

int main()

{
    char ch;
    int num;
    float fnum;
    double dnum;

    printf("enter the character: ");
    scanf("%c", &ch);
    printf("enter the integer:");
    scanf("%d", &num);
    printf("enter float:");
    scanf("%f",&fnum);
    printf("enter double:");
    scanf("%lf",&dnum);

    printf(" %d  %f  %c  %lf\n", num,fnum,ch,dnum);
    return 0;

}