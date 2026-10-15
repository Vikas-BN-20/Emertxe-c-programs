/* // ARRAY OF POINTER

#include <stdio.h>
void fun(int **p , int s);
int main()
{
    int n1,n2,n3;
    printf("Enter the values of n : ");
    scanf("%d %d %d",&n1,&n2,&n3);

    int size=3;
    int *arr[size];

    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    fun(*(arr) , size);

}
void fun(int **p , int s)
{
    for(int i=0;i<s;i++)
    {
        printf("%d ", **p);
        p++;
    }
}

 */



#include <stdio.h>
#include <stdlib.h>

int **allocate_memory(int r, int c);
void input(int r, int c, int **ptr);
int main()
{
    int r,c;
    printf("Enter the rows and columns : ");
    scanf("%d%d", &r,&c);

    int **arr = allocate_memory(r,c);
    
    input(r,c,arr);

    square(r,c,arr);

    display(r,c,arr);

    deallocate(arr,r);

    display(r,c,arr);

}

int **allocate_memory(int r, int c)
{
    int **temp = malloc(r * sizeof(int *));

    for(int i = 0; i<r; i++)
    {
        temp[i] = malloc(c * sizeof(int));

    }
    printf("2D array created........!\n");
    return temp;
}

void input(int r, int c, int **ptr)
{
    printf("Enter %d x %d elements : ", r, c);

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d", &ptr[i][j]);
        }
    }
}




#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[2][8] = { "Hello" , "World"};

    char **str;

    str = malloc(2 * sizeof(char *));

    for(int i=0;i<2;i++)
    {
        str[i] = malloc(8);

        strcpy(str[0], "Hello");
        strcpy(str[1], "World");
    }
}