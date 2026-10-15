/*

#include <stdio.h>
int main()
{
    int num; //0x47;
    printf("Enter a number : ");
    scanf("%x", &num);

    int mask =1;

    printf("After setting : %#x\n",num | mask); // 0x47
    printf("After clear : %#x\n",num & ~mask); // 0x46
    printf("to get lsb : %#x\n",num & mask); // 0x1
    printf("After toggle : %#x\n",num ^ mask); // 0x46

    if(num&mask)
    printf("LSB is set\n");
    else
    printf("LSB is clear\n");

    return 0;
}


 */

/*
// to set a bit at a given position

 #include <stdio.h>

 int main()
 {
    int num , n;
    printf("Enter a number : ");
    scanf("%x", &num);
    printf("Enter the position of the bit : ");
    scanf("%d", &n);

    int mask = 1 << n;
    printf("Mask : %#x\n", mask);
    printf("After setting : %#x\n",num | mask); // 0x47
    printf("After clearing : %#x\n",num & ~mask); // 0x46
    printf("To get lsb : %#x\n",num & mask); // 0x1
    printf("After toggle : %#x\n",num ^ mask); // 0x46
    return 0;
 } */

/*
 // to check even or odd number using bitwise operator

 #include <stdio.h>

 int main()
 {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    if(num & (1 << 0))
        printf("The number is odd.\n");
    else
        printf("The number is even.\n");

    return 0;
 }
  */

/*  // to check number of set bits in a number

 #include <stdio.h>

 int main()
 {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    int count = 0;

    for(int i=0; i<32; i++)
    {
        if(num & (1 << i))
            count++;
    }

    printf("Number of set bits : %d\n", count);

    return 0;
 }
 */
/*

 // to check series of 2's power comes in a given number

 #include <stdio.h>

 int main()
 {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    if(num & (num - 1))
        printf("The number is not a power of 2\n");
    else
        printf("The number is a power of 2\n");

    return 0;
 } */

/*  // WAP to print the binary representation of a number using bitwise operator

 #include <stdio.h>

int main()
{

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    printf("Binary representation of %d is : ", num);
    for(int i=31; i>=0; i--)
    {
        if(num & (1 << i))
            printf("1");
        else
            printf("0");
    }
    printf("\n");

    return 0;
} */

/*
// print the double of a number using bitwise operator

#include <stdio.h>

int main()
{

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    printf("Double of %d is : %d\n", num, num << 1);

    return 0;
}

 */

/*  // use mask to perform multiple operations on a number

 #include <stdio.h>

 int main()
 {
    int num , n;
    printf("Enter a number :  ");
    scanf("%d", &num);
    printf("Enter the position of the bit : ");
    scanf("%d", &n);

    int mask = (1<<n)-1;

    printf("Mask is : %d\n", mask);

    printf("After setting : %d\n", (num | mask)); //0x39
    printf("After clearing : %d\n", (num & ~mask)); //0x32
    printf("To get lsb : %d\n", (num & mask)); //0x03
    printf("After toggle : %d\n", (num ^ mask)); // 36

 } */

/*
 // check both the numbers are equal or not using bitwise operator

 #include <stdio.h>

 int main()
 {

    int num1 , num2;
    printf("Enter the first number : ");
    scanf("%d", &num1);
    printf("Enter the second number : ");
    scanf("%d", &num2);

    if((num1 ^ num2))
        printf("Both numbers are not equal\n");
    else
        printf("Both numbers are equal\n");

    return 0;
 } */

/*
// WAP to check the number is divisible by 8 or not using bitwise operator

#include <stdio.h>

int main()
{

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    if((num & 7) == 0)
        printf("The number is divisible by 8\n");
    else
        printf("The number is not divisible by 8\n");

    return 0;
}
 */
/* 
// WAP to print a number in its binary form using recursion and bitwise operator

#include <stdio.h>
void binary(int num, int i);
int main()
{
    int num = 7;
    printf("Enter a number : ");
    scanf("%d", &num);

    binary(num, 8);
}
void binary(int num, int i)
{
    if (i == 0)
        return;
    binary(num >> 1, i - 1);
    printf("%d", num & 1);
}
 */

/* // perform the operation on set, get,clear,toggle using MACRO

#include <stdio.h>

#define SET(num,n)  num | (1<<n)
#define CLEAR(num,n) num & ~(1<<n)
#define GET(num,n) num & n
#define TOGGLE(num,n) num ^ n

int main()
{

}
 */



/* 
// swap 2 numbers using bitwise operator

#include <stdio.h>

int main() 
{
    int n1 = 10, n2 = 20;

    printf("Before Swap: n1 = %d, n2 = %d\n", n1, n2);

    // Swap using XOR
    n1 = n1 ^ n2;
    n2 = n1 ^ n2;  // (n1 ^ n2) ^ n2 = n1
    n1 = n1 ^ n2;  // (n1 ^ n2) ^ n1 = n2

    printf("After Swap: n1 = %d, n2 = %d\n", n1, n2);

    return 0;
}
 */
/* 


 //WAP to perform the multiple operation on set, get,clear,toggle from specific position using bitwise operator

 #include <stdio.h>

 int main()
 {
    int num , n , pos;

    printf("Enter the number : ");
    scanf("%d",&num);
    printf("Enter the n value : ");
    scanf("%d", &n);
    printf("Enter the position : ");
    scanf("%d",&pos);

    // Create mask of n bits starting at position
    int mask = ((1 << n) - 1) << (pos - n + 1);
    printf("Mask = %d\n", mask);

    // Perform operations
    printf("After SET: %d\n", num | mask);
    printf("After CLEAR: %d\n", num & ~mask);
    int get = (num & mask) >> (pos - n + 1);
    printf("GET value of %d bits from pos %d = %d\n", n, pos, get);
    printf("After TOGGLE: %d\n", num ^ mask);

    return 0;
 } */

/* 
 // WAP to extract the binary forn the number using bitwise operator

 #include <stdio.h>

 int main()
 {
    unsigned num=0x12345678;

    int mask = 0x00ff0000;
    unsigned extracted = (num & mask) >> 16;
    printf("Bits extracted are : %#x\n", extracted);

    // Print binary form of extracted value (8 bits)
    printf("Binary form: ");
    for(int i = 7; i >= 0; i--) {
        unsigned bitmask = 1 << i;
        if(extracted & bitmask)
            printf("1");
        else
            printf("0");
    }
    printf("\n");

    return 0;

} */

/* 
// swap nibbles using bitwise operator

#include <stdio.h>

int main() {
    unsigned char num = 0xAB; // Example number (10101011 in binary)
    printf("Original: %#X\n", num);

    // Swap nibbles using simple logic
    int res = (num >> 4) | (num << 4);

    printf("Swapped: %#X\n", res & 0xFF); // mask to keep only 8 bits
    return 0;
}
 */

 

#include <stdio.h>
unsigned int rotateRight(unsigned int num, unsigned int n);
void print(unsigned n);
int main() 
{
    unsigned int num, n;

    // Take input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter number of bits to rotate right: ");
    scanf("%d", &n);

    // Use your requested line
    int result = rotateRight(num, n);

    // Display results
    printf("Original number: %d (%#X)\n", num, num);
    printf("After rotating right by %d bits: %d (%#X)\n", n, result, result);

    print(result);

    return 0;
}

unsigned int rotateRight(unsigned int num, unsigned int n) 
{
    unsigned int temp;

    // Step 1: extract lowest n bits
    temp = num & ((1 << n) - 1);

    // Step 2: shift num right
    num = num >> n;

    // Step 3: shift temp left
    temp = temp << (32 - n);

    // Step 4: combine
    return num | temp;
}

void print(unsigned n)
{
    for(int i=31;i>=0;i--)
    {
        if(n & (1<<i))
        printf("1");
        else
        printf("0");
    }
}



