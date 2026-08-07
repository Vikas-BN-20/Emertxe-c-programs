
/*



// nested if 

#include <stdio.h>

int main()

{

    int n1,n2,n3;

    printf("enter a number: n1 n2 n3 ");
    scanf("%d%d%d", &n1,&n2,&n3);

    if (n1<n2)
    {
        if (n1<n3)
        {
            printf("n1 is smallest\n");
        }
        else
        {
        printf("n3 is smallest\n");

        }
        
    }
    
    else
    {
        if (n2<n3)
        {
            printf("n2 is smallest\n");
        }
        
        else
        {
            printf("n3 is smallest\n");
        }

    
    }

    return 0;

}



*/




// pre and post increments

#include <stdio.h>

int main()

{
    int n1=10, n2=9;

    int get1, get2;

    get1= ++n1; //pre increment
    get2= n2++; //post

    printf("n1= %d     n2= %d\n", n1,n2);
    printf("get1= %d   get2= %d\n", get1,get2);

    return 0;


}