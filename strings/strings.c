// STRINGS

/*

#include <stdio.h>
int main()
{
    char str[100]="Hello world happy morning!";
    printf("%s\n",str);
    return 0;
}

*/

/*

// INPUT FROM  USER

#include <stdio.h>
int main()
{
    char name[100];
    printf("Enter the name : ");

    //scanf("%s",name); // print only first string and donot print next string

    scanf("%[^\n]",name);  // selective scanf that prints the strings after spacing

    printf("Name : %s\n",name);

    return 0;
}


*/

/*

// to calculate length of the string

#include <stdio.h>
int str_len(char *s);
int main()
{
    char str[100];
    printf("Enter the character : ");

    scanf("%[^\n]",str);  // selective scanf that prints the strings after spacing
    int len = str_len(str );
    printf("Length : %d\n",len);

    return 0;
}
int str_len(char *s)
{
    int l=0;
    while(*s !=0)
    {
        l++;
        s++;
    }
    return l;
}

*/

/*


// copy the string from 1 to another

#include <stdio.h>
void my_strcpy(char *dest , char * src);
int main()
{
    char src[100];
    char des[100];
    printf("Enter the source : ");
    scanf("%[^\n]",src);

    my_strcpy(des,src);

    printf("Destination is : %s\n",des);
    return 0;

}
void my_strcpy(char *dest , char *src)
{
    while( *src !='\0')
    {
       *dest = *src;
       src++;
       dest++;
    }
    *dest='\0';
}

*/

/*

// small to cap and cap to small

#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter the string : ");
    scanf("%[^\n]",str);

    for(int i=0; str[i]!='\0';i++)
    {
        if(str[i] >='A' && str[i]<='Z')
        str[i]=str[i]+32;
        else if(str[i] >='a' && str[i]<='z')
        str[i]=str[i]-32;
    }
    printf("%s \n",str);

}

*/

/*

// to print 2 different strings

#include <stdio.h>
int main()
{
    char str1[100];
    char str2[100];
    printf("Enter the string 1 : ");
    scanf("%[^\n]",str1);
    // getchar();  // used to read one character from standard input buffer
    printf("Enter the string 2 : ");
    scanf(" %[^\n]",str2);  // 1 space before %[^\n]

    printf("String 1 is : %s\n",str1);
    printf("String 2 is : %s\n",str2);

    return 0;
} 
    
*/

/*

// to print 2 different strings

#include <stdio.h>
int main()
{
    char str1[100];
    char str2[100];
    printf("Enter the string 1 : ");
    fgets(str1 , 100, stdin); // using fgets instead of scanf function
    //scanf("%[^\n]",str1);
    printf("Enter the string 2 : ");
    fgets(str2 , 100 , stdin);  // // using fgets instead of scanf function
    //scanf("%[^\n]",str2);

    printf("String 1 is : %s\n",str1);
    printf("String 2 is : %s\n",str2);

    return 0;
} 
    
*/

/*


// comparing 2 strings and returning smallest and largest

#include <stdio.h>
int my_strcmp(char *s1 , char *s2);
int main()
{
    char str1[100];
    char str2[100];
    printf("Enter string 1 : ");
    fgets(str1 , 100 , stdin);
    printf("Enter string 2 : ");
    fgets(str2 , 100 , stdin);

    int res = my_strcmp(str1 , str2);

    if(res<0)
    //str1<str2;
    printf("String 1 is smaller \n");
    else if(res>0)
    //str1>str2;
    printf("String 2 is greater \n");
    else
    //str1==str2;
    printf("Both strings are equal \n");

    return 0;
}
int my_strcmp(char *s1 , char *s2)
{
    while(*s1!='\0' && *s2!='\0')
    {
        if(*s1 != *s2)
        return *s1-*s2;

        s1++;
        s2++;
    }
    return *s1-*s2;
}

*/

/*

// comparing 2 strings and returning smallest and largest

#include <stdio.h>
int my_strcasecmp(char *s1 , char *s2);
int main()
{
    char str1[100];
    char str2[100];
    printf("Enter string 1 : ");
    fgets(str1 , 100 , stdin);
    printf("Enter string 2 : ");
    fgets(str2 , 100 , stdin);

    int res = my_strcasecmp(str1 , str2);

    if(res<0)
    //str1<str2;
    printf("String 1 is smaller \n");
    else if(res>0)
    //str1>str2;
    printf("String 2 is greater \n");
    else
    //str1==str2;
    printf("Both strings are equal \n");

    return 0;
}
int my_strcasecmp(char *s1 , char *s2)
{
    while(*s1 && *s2)
    {
        if((*s1 != *s2) && (*s1+32 != *s2) && (*s2+32 != *s1))
        return *s1-*s2;

        s1++;
        s2++;
    }
    return *s1-*s2;
}


*/

/*

// UPTO LIMIT

#include <stdio.h>
int my_strncmp(char *s1 ,char  *s2 , int n);
int main()
{
    char str1[100];
    char str2[100];
    int n;
    printf("Enter string 1 : ");
    fgets(str1 , 100 , stdin);
    printf("Enter string 2 : ");
    fgets(str2 , 100 , stdin);
    printf("Enter the size : ");
    scanf("%d", &n);
    
    int res=my_strncmp(str1 , str2 , n);

    if(res<0)
    {
        printf("string 1 is smaller\n");
    }
    else if(res>0)
    {
        printf("string 2 is greater\n");
    }
    else
    {
        printf("Both strings are equal\n");
    }

    return 0;
}
int my_strncmp(char *s1 ,char *s2 , int n)
{
    while(*s1 && *s2 && --n)
    {
        if(*s1 != *s2)
        return *s1-*s2;

        s1++;
        s2++;
    }
    return *s1-*s2;
}

*/

/*

//MERGING 2 STRINGS AND PRINT IN 1ST STRING

#include <stdio.h>
void mergeStrings(char *str1, char *str2, char *merged) 
{
    
    while (*str1 != '\0') {
        *merged = *str1;
        str1++;
        merged++;
    }

    
    while (*str2 != '\0') {
        *merged = *str2;
        str2++;
        merged++;
    }

    *merged = '\0';
}

int main() {
    char str1[100], str2[100], merged[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);


    mergeStrings(str1, str2, merged);

    printf("Merged string: %s\n", merged);

    return 0;
}

*/

/*

// to find the character in the string and print the string from that character

#include <stdio.h>
char *my_strchr(char *str, char ch);
int main()
{
    char str[100];
    printf("Enter the string : ");
    scanf(" %[^\n]",str);
    char ch;
    printf("Enter the character to search : ");
    scanf(" %c",&ch);

    char *res=my_strchr(str,ch);

    if(res!=NULL)
    {
        printf(" %s\n", res);
    }
    else
    {
        printf("Character not found\n");
    }
    
    return 0;

}
char *my_strchr(char *str, char ch)
{
    while (*str)
    {
        if (*str == ch)
        {
            return str;
        }
        str++;
    }
    return NULL;
}

*/

/*

// to find the character in the string and print the string from that character from the end of the string

#include <stdio.h>
char *my_strrchr(char *str, char ch);

int main()
{
    char str[100];
    printf("Enter the string : ");
    scanf("%[^\n]",str);
    char ch;
    printf("Enter the character to search : ");
    scanf(" %c",&ch);

    char *res = my_strrchr(str, ch);

if (res != NULL)
{
    while (res >= str)
    {
        printf("%c", *res);
        res--;
    }
    printf("\n");
}
else
{
    printf("Character not found\n");
}

}
char *my_strrchr(char *str, char ch)
{
    char *last = NULL;
    while (*str)
    {
        if (*str == ch)
        {
            last = str;
        }
        str++;
    }
    return last;
}

*/

/*

// Reverse the string 

#include <stdio.h>
void reverse(char *str);
int main()
{
    char str[100];
    printf("Enter the string : ");
    scanf("%[^\n]",str);

    reverse(str);
    printf("Reversed string is : %s\n", str);

}
void reverse(char *str)
{
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    for (int i = 0; i < len / 2; i++)
    {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

*/

/*

// reverse the string using recursion

#include <stdio.h>
void reverse(char *str, int start, int end);
int main()
{
    char str[100];
    printf("Enter the string : ");
    scanf("%[^\n]", str);
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    reverse(str, 0, len - 1);
    printf("Reversed string is : %s\n", str);
    return 0;
}
void reverse(char *str, int start, int end)
{
    if (start >= end)
    {
        return;
    }
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    reverse(str, start + 1, end - 1);
}

*/

/*

// Reverse the strings at there indexes and print the string

#include <stdio.h>
void rev_word(char *str);
void word(char *start , char *end);
int main()
{
    char str[100];
    printf("Enter the string : ");
    scanf("%[^\n]" , str);

    rev_word(str);

    printf("Reversed string is : %s",str);
    
}
void rev_word(char *str)
{
    char *temp=str;
    while(*str!='\0')
    {
        if(*str==' ')
        {
            word(temp,str-1);
            temp=str+1;
        }
        str++;
    }
    word(temp,str-1);

}
void word(char *start , char *end)
{
    while(start<end)
    {
        char temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
}

*/


/*


// Reverse the whole string 

#include <stdio.h>
void rev_word(char *str);
void word(char *start , char *end);
int main()
{
    char str[100];
    printf("Enter the string : ");
    scanf("%[^\n]" , str);

    int len =0;
    while(str[len]!='\0')
    {
        len++;
    }

    rev_word(str);
    word(str , &str[len-1]);

    printf("Reversed string is : %s\n",str);
}
void rev_word(char *str)
{
    
    char *temp=str;
    while(*str!='\0')
    {
        if(*str==' ')
        {
            word(temp,str-1);
            temp=str+1;
        }
        str++;
    }
    word(temp,str-1);
}
void word(char *start , char *end)
{
    while(start<end)
    {
        char temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
}

*/

/*


//WAP to replace each string of one or more blanks by a single blank

#include <stdio.h>

void replace(char str[])
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] == ' ' && str[i + 1] == ' ')
        {
            int j = i;

            while (str[j] != '\0')
            {
                str[j] = str[j + 1];
                j++;
            }
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    char str[100];

    printf("Enter the string: ");
    fgets(str, 100, stdin);

    replace(str);

    printf("Output String: %s", str);

    return 0;
}

*/

/*

// IN- BUILT FUNCTIONS IN STRINGS

#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100]="Hello world happy morning!";
    char str2[100];

    printf("%lu\n", strlen(str1));
    strcpy(str2, str1);
    printf("Copied string: %s\n", str2);

    printf("%s\n", strchr("string is this", 'i'));
    printf("%s\n", strrchr("string is this", 'i'));

    printf("%d\n", strcmp("string is this", "string is this"));
    printf("%d\n", strcasecmp("string is this", "STRING IS THIS"));

    printf("%d\n", strncmp("string is this", "string is this", 6));

    printf("%s\n", strcat(str1, " Have a nice day!"));

    printf("%s\n", strstr("string is this", "is"));
}

*/

/*

// WAP to implement atoi function
#include <stdio.h>
int my_atoi(const char *str);
int main()
{
    char str[100];
    
    printf("Enter a numeric string : ");
    scanf("%s", str);

    int res=my_atoi(str);
    printf("String to integer is %d\n", res);
}
int my_atoi(const char *str)
{
    int num = 0;
    int sign = 1;

    if (*str == '-') 
    {
        sign = -1;
        str++;
    } 
    else if (*str == '+') 
    {
        str++;
    }

    while (*str >= '0' && *str <= '9') 
    {
        num = num * 10 + (*str - '0');
        str++;
    }

    return sign * num;
}

*/

/*


//WAP to implement itoa function

#include <stdio.h>

void itoa(int num, char *str);

int main()
{
    int num;
    char str[10];
    
    printf("Enter the number:");
    scanf("%d", &num);
    
    itoa(num, str);
    
    printf("Integer to string is %s", str);
}
void itoa(int num, char *str)
{
    int i = 0;
    int isNegative = 0;

    if (num == 0) 
    {
        str[i++] = '0';
        str[i] = '\0';
        return;
    }

    if (num < 0) 
    {
        isNegative = 1;
        num = -num;
    }

    while (num != 0) 
    {
        str[i++] = (num % 10) + '0';
        num /= 10;
    }

    if (isNegative) 
    {
        str[i++] = '-';
    }

    str[i] = '\0';

    // Reverse the string
    for (int j = 0; j < i / 2; j++) 
    {
        char temp = str[j];
        str[j] = str[i - j - 1];
        str[i - j - 1] = temp;
    }
}

*/

/*


//WAP to implement strstr function

#include <stdio.h>
char *my_strstr(char *main_str, char *sub_str);
int main()
{
    char main_str[100];
    char sub_str[100];
    printf("Enter the main string: ");
    scanf(" %[^\n]", main_str);
    printf("Enter the substring: ");
    scanf(" %[^\n]", sub_str);

    char *ret = my_strstr(main_str, sub_str);

    if (ret != NULL) 
    {
        printf("%s\n", ret);
    } 
    else 
    {
        printf("Substring not found\n");
    }
}
char *my_strstr(char *main_str, char *sub_str)
{
    if (*sub_str == '\0') 
    {
        return main_str;
    }

    while (*main_str != '\0') 
    {
        char *m = main_str;
        char *s = sub_str;

        while (*m != '\0' && *s != '\0' && *m == *s) 
        {
            m++;
            s++;
        }

        if (*s == '\0') 
        {
            return main_str;
        }

        main_str++;
    }

    return NULL;
}

*/

/*

//You have to read a string from user and reverse each words in that string

//Sample Execution : 

//Test case 1 : 

//Enter the string: Hello how are you

//Reversed string: you are how Hello

#include <stdio.h>
void reverseWords(char *str);
void reverse(char *start, char *end);
int main()
{
    char str[100];
    printf("Enter the string: ");
    scanf(" %[^\n]", str);

    reverseWords(str);

    printf("Reversed string: %s\n", str);
    return 0;
}
void reverseWords(char *str)
{
    char *start = str;
    char *end = str;

    while (*end != '\0')
    {
        if (*end == ' ')
        {
            reverse(start, end - 1);
            start = end + 1;
        }
        end++;
    }
    reverse(start, end - 1);
}
void reverse(char *start, char *end)
{
    while (start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

*/

/*

//WAP to implement strtok function

#include <stdio.h>
#include <string.h>
char *my_strtok(char str[], const char delim[]);
int main()
{
    char str[50], delim[50];
    
    printf("Enter the string  : ");
    scanf("%s", str);
    
 
    printf("Enter the delimeter : ");
    scanf("\n%s", delim);
    
    char *token = my_strtok(str, delim);
    printf("Tokens :\n");
    
    while (token)
    {
        printf("%s\n", token);
        token = my_strtok(NULL, delim);
    }
}
char *my_strtok(char *str, const char *delim)
{
    static char *next_token = NULL;

    if (str != NULL)
    {
        next_token = str;
    }
    else if (next_token == NULL)
    {
        return NULL;
    }

    // Skip leading delimiters
    while (*next_token && strchr(delim, *next_token))
    {
        next_token++;
    }

    if (*next_token == '\0')
    {
        return NULL;
    }

    char *token_start = next_token;

    // Find the end of the token
    while (*next_token && !strchr(delim, *next_token))
    {
        next_token++;
    }

    if (*next_token != '\0')
    {
        *next_token = '\0'; // Null-terminate the token
        next_token++;       // Move to the next character for the next call
    }
    
    return token_start;
}

*/

/*

// WAP to check a given string is palindrome or not

#include <stdio.h>
int isPalindrome(char *str);
int main() 
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    if(isPalindrome(str))
        printf("The string is a palindrome.\n");
    else
        printf("The string is NOT a palindrome.\n");

    return 0;
}
//Function to check palindrome
int isPalindrome(char *str) 
{
    int len = 0, i;

    // Calculate length manually
    while(str[len] != '\0') 
    {
        len++;
    }

    // Compare characters
    for(i = 0; i < len / 2; i++) 
    {
        if(str[i] != str[len - 1 - i]) 
        {
            return 0;  // Not palindrome
        }
    }
    return 1;  // Palindrome
}

*/

/*

//WAP to concatenate two strings

#include <stdio.h>
void my_strcat(char *dest, const char *src);
int main()
{
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    my_strcat(str1, str2);

    printf("Concatenated string: %s\n", str1);

    return 0;
}
void my_strcat(char *dest, const char *src)
{
    // Move dest pointer to the end of the first string
    while (*dest != '\0') 
    {
        dest++;
    }

    // Copy src to dest
    while (*src != '\0') 
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';  // Null-terminate the concatenated string
}

*/

/*


//Generate consecutive NRPS of length n using k distinct character

#include <stdio.h>
void nrps(char *str, int k, int n);
int main()
{
    int k, n;

    printf("Enter the number characters C : ");
    if (scanf("%d", &k) != 1) return 0;

    printf("Enter the Length of the string N : ");
    if (scanf("%d", &n) != 1) return 0;

    char str[k];
    printf("Enter %d distinct characters : ", k);
    for (int i = 0; i < k; i++)
    {
        scanf(" %c", &str[i]);
    }

    // Check if characters are distinct
    for (int i = 0; i < k; i++)
    {
        for (int j = i + 1; j < k; j++)
        {
            if (str[i] == str[j])
            {
                printf("Error : Enter distinct characters\n");
                return 0;
            }
        }
    }

    printf("Possible NRPS is ");
    nrps(str, k, n);

    return 0;
}
void nrps(char *str, int k, int n)
{
    for (int i = 0; i < n; i++)
    {
        // Cycle through the characters with shifted offsets to avoid repetition
        printf("%c", str[(i / k + i % k) % k]);
    }
    printf("\n");
}

*/

/*

//Squeeze the character in s1 that matches any character in the string s2

#include <stdio.h>
void squeeze(char *s1, const char *s2);
int main()
{
    char s1[100], s2[100];

    printf("Enter the first string: ");
    scanf("%s", s1);

    printf("Enter the second string: ");
    scanf("%s", s2);

    squeeze(s1, s2);

    printf("Resulting string after squeeze: %s\n", s1);

    return 0;
}
void squeeze(char *s1, const char *s2)
{
    for(int i = 0; s1[i] != '\0'; i++)
    {
        for(int j = 0; s2[j] != '\0'; j++)
        {
            if(s1[i] == s2[j])
            {
                // Shift the rest of the string left
                for(int k = i; s1[k] != '\0'; k++)
                {
                    s1[k] = s1[k + 1];
                }
                i--; // Adjust index to check the new character at this position
                break; // Break inner loop to check next character in s1
            }
        }
    }
}

*/

/*

//Squeeze the character in s1 that matches any character in the string s2

#include <stdio.h>
void squeeze(char *s1, const char *s2);
int main()
{
    char s1[100], s2[100];

    printf("Enter the first string: ");
    scanf("%s", s1);

    printf("Enter the second string: ");
    scanf("%s", s2);

    squeeze(s1, s2);

    printf("Resulting string after squeeze: %s\n", s1);

    return 0;
}
void squeeze(char *s1, const char *s2)
{
    int i=0, j=0, k;

    while(s1[i] != '\0')
    {
        for(k=0; s2[k] != '\0'; k++)
        {
            if(s1[i] == s2[k])
                break;
        }
        if(s2[k] == '\0') // Character not found in s2
        {
            s1[j++] = s1[i];
        }
        i++;
    }
    s1[j] = '\0'; // Null-terminate the resulting string
}


*/

//WAP to print all possible combinations of given string

#include<stdio.h> 

void combination(char *str, int start, int end);
int my_strlen(char *str);

int main()
{
        char str[100];
        int n;
        int res;
        printf("Enter a string: ");
        scanf("%100[^\n]",str);    
        n = my_strlen(str);
        combination(str,0,n-1);                       
        return 0;
}

void combination(char *str, int start, int end)
{
    if (start == end)
    {
        printf("%s\n", str);
        return;
    }
    for (int i = start; i <= end; i++)
    {
        // Swap characters at positions start and i
        char temp = str[start];
        str[start] = str[i];
        str[i] = temp;

        // Recur for the next position
        combination(str, start + 1, end);

        // Backtrack to restore the original string
        temp = str[start];
        str[start] = str[i];
        str[i] = temp;
    }
}
int my_strlen(char *str)
{
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return len;
}
