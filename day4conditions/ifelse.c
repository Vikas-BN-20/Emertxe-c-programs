/*

#include <stdio.h>

int main()

{

    int age;
    printf("enter your age: ");
    scanf("%d", &age);

    if(age>=18)
    {
        printf("you are eligible to vote \n");
    }

    else
    {
        printf("you are not eligible \n");
    }

    return 0;


}

*/

/*

// which number is greater of 2 numbers

#include <stdio.h>

int main()

{

    int num1,num2;
    printf("enter a number: ");
    scanf("%d%d", &num1,&num2);
    if(num1>num2)
    {
        printf("num1 is greater\n");
    }

    else if(num1<num2)
    {
        printf("num2 is greater\n");
    }

    else
    {
        printf("both numbers are equal\n");
    }

    return 0;
}

*/

/*

// uppercase alphabets , lower case , digit , its a symbol


#include <stdio.h>

int main()

{

    char ch;

    printf("enter any alphabet: ");
    scanf("%c", &ch);

    if(ch>= 'A' && ch <= 'Z')
    {
        printf("its a uppercase alphabet\n");
    }

    else if(ch>= 'a' && ch<= 'z')
    {
        printf("its a lowercase alphabet\n");
    }

    else if(ch >= '0' && ch <= '9')
    {
        printf("its a digit\n");
    }

    else
    {
        printf("its a punchuation\n");

    }

    return 0;

}

*/


/*
// print character as well as integer

#include <stdio.h>

int main()

{
    char ch = 100;
    printf("%c   %d\n", ch,ch);

    return 0;

}

*/





/*

// grade of a student

#include <stdio.h>

int main()

{
    int marks;
    printf("enter a marks: ");
    scanf("%d", &marks);

    if(marks >= 25 && marks<= 90)
    {
        printf("your grade is A\n");
    }

    else if(marks >= 75 && marks <= 84)
    {
        printf("your grade is B\n");
    }

    else if(marks >= 55 && marks <= 74)
    {
        printf("your grade is C\n");
    }

    else if(marks >= 40 && marks <=54)
    {
        printf("yoyur grade is D\n");

    }

    else if(marks < 40 && marks >= 0)
    {
        printf("you are failed\n");
    }

    else
    {
        printf("invalid input\n");
    }

    return 0;


}



*/


/*

// which is largest number b/w 3 numbers


#include <stdio.h>

int main()

{

    int num1,num2,num3;
    printf("enter a numbers: ");
    scanf("%d%d%d", &num1,&num2,&num3);

    if (num1>num2 && num1>num3)
    {
        printf("num1 is largest\n");
    }
     else if (num2>num3)
     {
        printf("num2 is largest\n");
     }
     
     else
     {
        printf("num3 is largest\n");
     }

    return 0;

}


*/


/*

// whether the number is positive or negative

#include <stdio.h>

int main()

{

    float num;
    printf("enter any numbers: ");
    scanf("%f", &num);

    if (num > 0)
    {
        printf("the number is positive\n");
    }

    else if(num < 0)
    {
        printf("the number is negative\n");
    }
    
    else 
    {
       printf("the number is zero\n");
    }

    return 0;    
}


*/



/*



// grade of the student optimized version

#include <stdio.h>

int main()

{
    int marks;
    printf("enter your marks: ");
    scanf("%d", &marks);

   if (marks > 100 || marks < 0)
   {
     printf("invalid input\n");
   }

   else if (marks >= 90)

    {
        printf("your grade is A\n");
    }

    else if(marks >=75)
    {
        printf("your grade is B\n");
    }

    else if (marks >=55)
    {
        printf("your grade is C\n");
    }

    else if (marks >=40)
    {
        printf("your grade is D\n");
    }
    
    else
    {
        printf("you are failed\n");
    }
    

}



*/


/*

// grade of the student using TERNARY (? :) operator

#include <stdio.h>

int main()

{
    int marks;
    printf("enter your marks: ");
    scanf("%d", &marks);

    printf("%s",                                        // to print a string %s
        (marks <0 || marks > 100)? "invalid input\n" :
        (marks >= 90 ) ? "your grade is A \n" :
        (marks >= 75 ) ? "your grade is B \n" :
        (marks >= 55 ) ? "your grade is C \n" :
        (marks >= 40 ) ? "your grade is D \n" :
        "your are failed\n");
}


*/



