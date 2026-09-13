/* 

// malloc() syntax

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = malloc(20); // int *ptr = malloc(5 * sizeof(int));

    for(int i=0 ; i<5;i++)
        scanf("%d", (ptr+i));

    for(int i=0; i<5;i++)
    {
      printf("%d ",ptr[i]);  
    }
    printf("\n");

    free(ptr);

    return 0;
} */



/* // malloc() retuned NULL if memory is not allocated

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = malloc(5 * sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory not allocated\n");
        return 1;
    }

}     */

/* // calloc() syntax

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = calloc(5 , sizeof(int));

    for(int i=0;i<5;i++)
    {
        scanf("%d" , (ptr+i));
    }

    for(int i=0;i<5;i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    free(ptr);

}

 */


/* 
// memory leakage in malloc() and calloc()

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *ptr;

    while(1)
    {
        ptr = (char*)malloc(1);
        free(ptr);
    }
} */

/* 
// realloc() syntax

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = malloc(5 * sizeof(int));

    for(int i=0;i<5;i++)
    {
        scanf("%d", (ptr+i));
    }

    ptr = realloc(ptr, 10 * sizeof(int));

    for(int i=5;i<10;i++)
    {
        scanf("%d", (ptr+i));
    }

    for(int i=0;i<10;i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    free(ptr);
}

 */


// to copy the string using dynamic memory allocation 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *my_strdup(char *str);
int main()
{
    char str[20];
    printf("Enter the string: ");
    scanf(" %[^\n]", str);

    char *r = my_strdup(str);
    printf("Copied string: %s\n", r);
    free(r); // r = reallocate(r , 0);

}

char *my_strdup(char *str)
{
    char *ptr = malloc(strlen(str)+1);
    if(ptr == NULL)
    {
        perror(" ");
        return NULL;
    }

    strcpy(ptr,str);
    return ptr;
}


