
// COMMAND LINE ARGUMENT 

/* #include <stdio.h>

int main(int argc, char *argv[])
{
    printf("Argc -> %d\n", argc);

    for(int i=0;argv[i] != NULL;i++)
    {
        printf("%s\n", argv[i]);
    }

    return 0;
}
 */

/* 
// find the average of the numbers using command line argument

#include <stdio.h>
#include <stdlib.h>  // for atoi()

int main(int argc, char *argv[])
{
    if (argc < 2) {
        printf("Usage: %s num1 num2 num3 ...\n", argv[0]);
        return 1;
    }

    int sum = 0;
    for (int i = 1; i < argc; i++) {
        sum = sum + atoi(argv[i]);  // convert string to integer
    }

    float avg = (float)sum / (argc - 1);
    printf("Average = %.2f\n", avg);

    return 0;
}
 */
/* 
// without using ATOI and other functions

#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc < 2) {
        printf("Usage: %s num1 num2 num3 ...\n", argv[0]);
        return 1;
    }

    int sum = 0, num;

    for (int i = 1; i < argc; i++) {
        // Read integer from string using sscanf
        sscanf(argv[i], "%d", &num);
        sum =  sum + num;
    }

    float avg = (float)sum / (argc - 1);
    printf("Average = %.2f\n", avg);

    return 0;
}

 */



// environmental variables

#include <stdio.h>

int main(int argc, char **argv, char **env)
{
    for(int i=0; env[i] != NULL; i++)
    {
        printf("%s\n", env[i]);
    }

    // char *res = getenv("OLDPWD");  // getenv is use to get particular environmental variable
    // printf("%s\n", res);

}




