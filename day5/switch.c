

//switch case


/*


#include <stdio.h>
int main()

{
    int num;
    printf("enter a number: ");
    scanf("%d", &num);

    switch (num)
    {
    case 10:
        printf("num is 10\n");
        break;

    case 20:
       printf("num is 20\n");
       break;

    case 30:
       printf("num is 30\n");
       break;
    
    default:
       printf("invalid input\n");
       break;

    }

    return 0;

}

*/


/*

// COMPAS

#include <stdio.h>
int main()

{
    char dir;
    printf("enter the character: ");
    scanf("%c", &dir);

    switch (dir)
    {
        case 'N':
        case 'n':                    // for small letter we can use another CASE 
        printf("north direction\n");
        break;

         case 'W':
         case 'w':                   // for small letter we can use another CASE 
        printf("west direction\n");
        break;

         case 'E':
         case 'e':                   // for small letter we can use another CASE 
        printf("east direction\n");
        break;

         case 'S':
         case 's':                   // for small letter we can use another CASE 
        printf("south direction\n");
        break;
    
        default:
        printf("invalid\n");
        break;
    }

    return 0;

}


*/



/*

// what type of character it is

#include <stdio.h>
int main()

{
    char ch;
    printf("enter a character: ");
    scanf("%c", &ch);

    switch (ch)
    {
        case 'A' ... 'Z':                // ... is called ELLIPSE used to declare range 
        printf("Uppercase alphabet\n");
        break;

         case 'a' ... 'z':
        printf("lowercase alphabet\n");
        break;

         case '0' ... '9':
        printf("its a digit\n");
        break;
    
        default:
        printf("its a symbol\n");
        break;
    }

    return 0;

}


*/


/*


// simple calculator


#include <stdio.h>
int main()

{
    int n1,n2;
    char op;
    printf("enter expression: ");
    scanf("%d%c%d",&n1,&op,&n2 );

    if (n2 == 0 && op == '/')
    {
        printf("we cannot divide a number by zero\n");
        return 1;
    }
    

    switch (op)
    {
        case '+':
        printf("addition is %d\n", n1+n2);
        break;

        case '-':
        printf("subtraction is %d\n", n1-n2);
        break;

        case '*':
        printf("multiplication is %d\n", n1*n2);
        break;

        case '/':
        printf("division is %g\n",(float) n1/n2);
        break;
    
        default:
        printf("invalid expression\n");
        break;
    }

    return 0;


}



*/
