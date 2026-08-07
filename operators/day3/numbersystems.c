#include <stdio.h>

int main()

{
    int num;
    printf("enter any number: ");
    scanf("%d", &num);
    printf("decimal number is %d\n", num);
    printf("octal number is %#o\n", num);
    printf("hexa-decimal number is %#x\n", num);
    
    return 0;

}