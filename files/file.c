/*

    if (scanf("%d", &count) != 1 || count < 0)
    {
        return 1;
    }

#include <stdio.h>
    if (fp == NULL)
    {
        perror("name.txt");
        return 1;
    }
int main()
{
    FILE *fptr = fopen("file.txt" , "r");

    if(fptr==NULL)
        scanf(" %19[^\n]", name);
        perror(""); // inbuilt function to print errors 
        return 1;
    }

    char ch;

    while((ch=getc(fptr)) != EOF) // EOF is End of the file OR we cane use (-1 instead of EOF) // getc is used to read only 1 character so here we have used loop to read multiple character
    {
        putchar(ch); // putchar is used to print characters
    }

    fclose(fptr);
}

*/


/*

#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("putc.txt" , "a");

    putc('O', fp);

    fclose(fp);
}

*/


/*

// to print inputs in TERMINAL and to store that input in the file // to terminate the terminal after typing input press cntrl+d

#include <stdio.h>

int main()
{
    FILE *fptr = fopen("write.txt" , "a");

    char ch = getchar();

    while(ch!= EOF)
    {
        putc(ch,fptr);
        ch=getchar();
    }

    fclose(fptr);

}

*/

/*

// WAP to read and write from the file

#include <stdio.h>

int main()
{
    int count;
    printf("Enter the number of names : ");
    scanf("%d", &count);

    FILE *fp = fopen("name.txt" , "w+");

    while(count--)
    {
        char name[20];

        printf("Enter the name : ");
        scanf(" %[^\n]", name);

        int i=0;
        while(name[i])
        {
            putc(name[i], fp);
            i++;
        }
        putc('\n', fp);
    }

    rewind(fp);
    int ch;

    while((ch = getc(fp)) != EOF)
    {
        putchar(ch);
    }

    fclose(fp);

}

*/

/*

// TO check whether the program is illegal or legal 

#include <stdio.h>

int main()
{
    FILE *fp = fopen("fileerror.txt" , "w");

    putc('A' ,  fp);

    if(ferror(fp))    // used to check illegal things 
    printf("1st time\n");

    char ch = getc(fp);

    if(ferror(fp))
    printf("2nd time\n");

    clearerr(fp);   // inbuilt function to use clear the illegal things happening internally

    if(ferror(fp))
    printf("3rd time\n");

    fclose(fp);

}

*/

/* 
// WAP to store heterogenous values and print the values

#include <stdio.h>

int main()
{
    FILE *fp = fopen("fprintf.txt" , "w+");

    fprintf(fp , "Hello %d %f %g %s %lf \n", 12, 1.5 , 1.4 , "world" , 2.55);

    char str1[10];
    char str2[10];
    int num;
    float fnum;
    double dnum1;
    double dnum2;

    rewind(fp);

    fscanf(fp , "%s %d %f %lf %s %lf", str1, &num , &fnum, &dnum1 , str2 , &dnum2);

    printf(" %s %d %f %lf %s %lf\n", str1, num , fnum, dnum1 , str2 , dnum2);

} */

/* 
// TO CHECK THE SIZE OF THE FILE

#include <stdio.h>

int main()
{
    FILE *fp = fopen("fprintf.txt" , "a");

    printf("Size of the file is -> %lu\n", ftell(fp));

    fclose(fp);

} */

/* 
// to change position of the index of the file 

#include <stdio.h>

int main()
{
    FILE *fp = fopen("fseek.txt" , "r");

    printf("1st time -> %lu\n", ftell(fp));

    fseek(fp , 5 , SEEK_SET);

    printf("2nd time -> %lu\n", ftell(fp));

    fseek(fp, 12, SEEK_CUR);

    printf("3rd time -> %lu\n", ftell(fp));

    fseek(fp , -20 , SEEK_END);

    printf("4th time -> %lu\n", ftell(fp));

    fclose(fp);

} */

/* // WRITE AND READ IN BINARY VALUES IN FILES

#include <stdio.h>

int main()
{
    FILE *fp = fopen("fwrite.txt" , "w+");

    int n1=12;
    int n2;

    fwrite(&n1 , 1,4, fp);
    fseek(fp , 0,SEEK_SET); // rewind(fp);
    fread(&n2, 2,2, fp);
    printf("n2 = %d\n", n2);

    char str1[10]="Hello";
    char str2[10];

    fwrite(str1 , 3,4 , fp ); // 1,sizeof(str1)
    fseek(fp , 0,SEEK_SET);
    fread(str2 , 2,4 , fp); // sizeof(str2), 1
    printf("str2 = %s\n",str2); // puts(str2);

} */

/* // using structures in files

#include <stdio.h>
struct Structure
{
    int n;
    char str[10];
    float f;
};

int main()
{
    FILE *fp = fopen("fwrite.txt" , "w+");
    struct Structure s1 = {12, "Hello" , 1.5};
    struct Structure s2;

    fwrite(&s1, 2,sizeof(s1)/2 , fp);
    rewind(fp);
    fread(&s2 , 1,sizeof(s2), fp);

    printf("n -> %d\nstr -> %s\nf ->%g\n", s2.n,s2.str,s2.f);

    fclose(fp);

} */


/* 
// copy and paste from 1 file to another file 

#include <stdio.h>

int main()
{
    FILE *fp1 = fopen("source.jpg" , "r");

    FILE *fp2 = fopen("dest.jpg" , "w");

    fseek(fp1 , 0, SEEK_END);

    unsigned long int size = ftell(fp1);
    char buffer[size];

    rewind(fp1);

    fread(buffer, 1,size , fp1);
    fwrite(buffer , 1,size , fp2);

    printf("size of source file -> %lu\n", size);

    fclose(fp1);
    fclose(fp2);
    
}

 */


 // STAGES OF FILES

 #include <stdio.h>

 int main()
 {
    int num;
    printf("enter a number : ");
    scanf("%d", &num);

    printf("%d\n",num);

    return 0;
 }


 