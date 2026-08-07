// ARRAYS
/*

#include <stdio.h>
int main()
{
    int array[5] = {10,20,30,40,50};
    //printf("size of array is : %lu\n", sizeof(array));
    //printf("array : %p\n", array);

    for(int i=0;i<5;i++)
    {
        printf("&array[%d] : %d\n", i,array[i]);
    }

    return 0;
} */

/*

// update the value of arrays

#include <stdio.h>
int main()
{
    int array[5] = {10,20,30,40,50};
    //printf("size of array is : %lu\n", sizeof(array));
    //printf("array : %p\n", array);

    for(int i=0;i<5;i++)
    {
        printf("&array[%d] : %d\n", i,array[i]);
    }

array[1]=25; // before array[1] is 20 

for(int i=0;i<5;i++)
    {
        printf("&array[%d] : %d\n", i,array[i]);
    }
}


*/

/*


// print N number of elements

#include <stdio.h>
int main()
{
    int size;
    printf("Enter the size of array : ");
    scanf("%d", &size);

    int arr[size];
    
    printf("Enter the elements of array : ");
    
    for(int i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("OUTPUT : ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

*/



/*


// SUM AND AVERAGE OF ARRAY

#include <stdio.h>
int main()
{
    int size;
    printf("Enter a size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum = sum + arr[i];
    }
    float avg = (float) sum/size;
    printf("sum and average is : %d and %g\n", sum,avg);

    return 0;
}
    
*/


/*

// smallest number in array

#include <stdio.h>
int main()
{
    int size;
    printf("Enter a size of array: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the elements of the array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }

    int small=arr[0];
    for(int i=1;i<size;i++)
    {
        if(small>arr[i])
        small=arr[i];
    }
    printf("small number is : %d\n", small);
    return 0;

}



// largest 


#include <stdio.h>
int main()
{
    int size;
    printf("Enter a size of array: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the elements of the array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }

    int large=arr[0];
    for(int i=1;i<size;i++)
    {
        if(large<arr[i])
        large=arr[i];
    }
    printf("small number is : %d\n", large);
    return 0;

}



// print the elements is odd or even

#include <stdio.h>
int main()
{
    int size;
    printf("Enter a size of array: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the elements of the array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d is even \n",arr[i]);
        }
        else
        {
            printf("%d is odd \n", arr[i]);
        }
    }

    return 0;


}



// print 0 for even number and 1 for odd number

#include <stdio.h>
int main()
{
    int size;
    printf("Enter a size of array: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the elements of the array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            arr[i]=0;
        }
        else
        {
            arr[i]=1;
        }
    }

    for(int i=0;i<size;i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}


*/

/*

// convert binary to decimal

#include <stdio.h>
int main()
{
    int size;
    printf("Enter a size of array: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the elements of the array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            arr[i]=0;
        }
        else
        {
            arr[i]=1;
        }
    }

    for(int i=0;i<size;i++)
    {
        printf("%d ", arr[i]);
    }

    int flag=1,dec=0;

    for(int i=size-1;i>=0;i--)
    {
        if(arr[i]==1)
        {
            dec=flag+dec;
            flag=flag*2;
        }
        else
        flag=flag*2;
        
    }
    printf("Decimal number is : %d\n",dec);
    return 0;
}  

*/

/*

// check prime or not

#include <stdio.h>

int main()
{
    int size;

    printf("Enter a size of array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        int prime = 1;

        if (arr[i] <= 1)
        {
            prime = 0;
        }
        else
        {
            for (int j = 2; j < arr[i]; j++)
            {
                if (arr[i] % j == 0)
                {
                    prime = 0;
                    break;
                }
            }
        }

        if (prime == 1)
        {
            printf("%d is a prime number\n", arr[i]);
        }
        else
        {
            printf("%d is not a prime number\n", arr[i]);
        }
    }

    return 0;
}




/*

// sort ODD and EVEN numbers from the array

#include <stdio.h>

int main()
{
    int size;

    printf("Enter size of array: ");
    scanf("%d", &size);

    if (size <= 0)
    {
        printf("Invalid size\n");
        return 1;
    }

    int arr[size];
    int odd_arr[size], even_arr[size];
    int odd = 0, even = 0;

    printf("Enter %d elements: ", size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even_arr[even] = arr[i];
            even++;
        }
        else
        {
            odd_arr[odd] = arr[i];
            odd++;
        }
    }

    printf("EVEN array: ");
    for (int i = 0; i < even; i++)
    {
        printf("%d ", even_arr[i]);
    }

    printf("\nODD array: ");
    for (int i = 0; i < odd; i++)
    {
        printf("%d ", odd_arr[i]);
    }

    return 0;
}

*/

/*

// print once repeated number

#include <stdio.h>

int main()
{
    int size,i,j;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];
    int count;
    int repeat[size];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        repeat[i]=0;
    }

    for(i=0;i<size;i++)
    {
        int flag=1;
        for(j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            printf("%d ", arr[i]);
        }
    } 

    printf("\nRepetation of each element is : \n");
    for(i=0;i<size;i++)
    {
        if(repeat[i])
        continue;
        count=1;

        for(j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                repeat[j]=1;
            }
        }
        printf("%d occours %d times\n",arr[i],count);
    }
    return 0;

}

*/

/*

// reverse elements of  the array

#include <stdio.h>

int main()
{
    int size,i;

    printf("Enter a size of array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size / 2; i++)
    {
       int temp = arr[i];
       arr[i] = arr[size - 1 - i];
       arr[size - 1 - i] = temp;
    }
    printf("Reversed array is: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}

*/


/*

// template 32

#include <stdio.h>
int main()
{
    int arr[5] = {10,20,30,40,50};
    printf("%d %d %d ",arr[0],arr[1],arr[4]);
    //printf("%d ",arr[1]);
    //printf("%d ",arr[4]);
    arr[3] = 99;
    printf("%d \n", arr[3]);
    return 0;
}


// template 33

#include <stdio.h>
int main()
{
    int arr[5];
    printf("Enter 5 elements: ");

    for(int i=0;i<5;i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i=0;i<5;i++)
    {
        printf("%d \n",arr[i]);
    }
    return 0;
}



// template 34

#include <stdio.h>
int main()
{
    int size,i;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the size of elements: ");

    for(i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<size;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}



// template 36 

#include <stdio.h>
int main()
{
    int size,i;
    printf("Enter a size of array: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the elements of the array: ");
    for(i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }

    int even_count=0,odd_count=0,count;

    for(i=0;i<size;i++)
    {
        if(arr[i]%2==0)
           even_count++;
        else
            odd_count++;
    }
     printf("Even count: %d \n",even_count);
     printf("Odd count: %d \n", odd_count);
    return 0;
}


// template 37

#include <stdio.h>
int main()
{
    int size,i;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the size of elements: ");

    for(i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<size;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}



// template 36 

#include <stdio.h>
int main()
{
    int size,i;
    printf("Enter a size of array: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the elements of the array: ");
    for(i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }

    int even_array[size],odd_array[size];
    int even=0,odd=0;

    for(i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
           even_array[even]=arr[i];
           even++;
        }
        else
        {
            odd_array[odd]=arr[i];
            odd++;
        }
    }
     printf("Even array elements: ");
     for(i=0;i<even;i++)
     {
        printf("%d ", even_array[i]);
     }
     printf("\nOdd array elements: ");
     for(i=0;i<odd;i++)
     {
        printf("%d ", odd_array[i]);
     }
     printf("\n");
    return 0;
}


*/


/*

 // C Program to remove duplicates from array using nested for loop
 
 
#include <stdio.h>
int main()
{
    int n,i,j,count = 0;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    
    if(n==0)
    {
        printf("No element inside the array.");
        return 1;
    }

    int arr[n], temp[n];

    printf("Enter elements in the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
 
    printf("\nArray Before Removing Duplicates: ");
    for ( i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
 
    for ( i = 0; i < n; i++)
    {
    
        for ( j = 0; j < count; j++)
        {
          if (arr[i] == temp[j])
          {
            break;
          }
        }
        if (j == count)
        {
          temp[count] = arr[i];
          count++;
        }
    }
 
    printf("\nArray After  Removing Duplicates: ");
    for ( i = 0; i < count; i++)
    {
        printf("%d ", temp[i]);
    }
    printf("\n");
 
    return 0;
}


*/


// 10 20 30 40     20 30 40 10


/*
// 1st print negative numbers then odd numbers then even numbers
// WAP  2 -1 0 9 7 -2 4 3 -7  output= -1 -2 -7 9 7 3 2 0 4


#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of array: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("output:");
    for(int i = 0; i < size; i++)
    {
    
     if(arr[i]<0)
      {
        printf("%d ",arr[i]); 
      }
    }
    for(int i=0;i<size;i++)
    {
        if(arr[i]>=0 && arr[i]%2==1)
        {
            printf("%d ",arr[i]);
        }
    }
    for(int i=0;i<size;i++)
    {
        if(arr[i]>=0 && arr[i]%2==0)
        {
            printf("%d ",arr[i]);
        }
    }
    printf("\n");
    return 0;
    
}

*/


/*

// Ascending order array sorting

#include <stdio.h>
int main()
{
    int size,i,j;
    printf("Enter a size of array: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the elements of the array: ");
    for(i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Before sorting: \n");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }

    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            int temp;
            if(arr[i]>arr[j])
            {
               temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
            }
        }
    }
    printf("\nAfter sorting: \n");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;

}



// BUBBLE SORTING

#include <stdio.h>
int main()
{
    int size,i,j;
    printf("Enter a size of array: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the elements of the array: ");
    for(i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Before sorting: \n");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }

    int temp;
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
               temp = arr[j];
               arr[j] = arr[j+1];
               arr[j+1] = temp;

            }
        }
    }

    printf("\nAfter sorting: \n");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}

*/


// median 
#include <stdio.h>
int main()
{
    int n1,n2,i;
    printf("Enter array size of A: ");
    scanf("%d", &n1);
    printf("Enter array size of B: ");
    scanf("%d", &n2);

    int arr1[n1],arr2[n2];
    printf("Enter array elements of A: ");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter array elements of B: ");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&arr2[n2]);
    }

    // sort for A
    int temp;
    for(i=0;)
}
