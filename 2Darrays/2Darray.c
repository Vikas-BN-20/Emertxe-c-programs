// 2D ARRAYS

/*
// printf 3x3 matrix

#include <stdio.h>

int main()
{
    int r1,c1;

    printf("Enter rows and columns : ");
    scanf("%d %d", &r1 , &c1);

    int arr[r1][c1];

    printf("Enter matrix elements : \n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Matrix : \n");

    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
} */

/*
// reverse matrix

#include <stdio.h>

int main()
{
    int r1, c1;

    printf("Enter number of rows: ");
    scanf("%d", &r1);

    printf("Enter number of columns: ");
    scanf("%d", &c1);

    int arr[r1][c1];

    printf("Enter matrix elements:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Matrix in reverse:\n");
    for (int i = r1 - 1; i >= 0; i--)
    {
        for (int j = c1 - 1; j >= 0; j--)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
 */

/*
// diagonals of matrix

#include <stdio.h>

int main()
{
    int r1, c1;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r1, &c1);

    int arr[r1][c1];

    printf("Enter matrix elements:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Both diagonals:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            if ((i == j) || (i + j == c1 - 1 && i != j))
            {
                printf("%d ", arr[i][j]);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}

*/

/*
// to find largest element in each row

#include <stdio.h>

int main()
{
    int r1, c1;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r1, &c1);

    int arr[r1][c1];

    printf("Enter matrix elements:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

     printf("Matrix : \n");

    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    printf("Largest element in each row:\n");
    for (int i = 0; i < r1; i++)
    {
        int largest = arr[i][0];

        for (int j = 1; j < c1; j++)
        {
            if (arr[i][j] > largest)
            {
                largest = arr[i][j];
            }
        }

        printf("Row %d max = %d\n", i + 1, largest);
    }

    return 0;
} */

/*
// to find smallest element in each column

#include <stdio.h>

int main()
{
    int r1, c1;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r1, &c1);

    int arr[r1][c1];

    printf("Enter matrix elements:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

     printf("Matrix : \n");

    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    printf("Smallest element in each column:\n");
    for (int j = 0; j < c1; j++)
    {
        int smallest = arr[0][j];

        for (int i = 1; i < r1; i++)
        {
            if (arr[i][j] < smallest)
            {
                smallest = arr[i][j];
            }
        }

        printf("Column %d min = %d\n", j + 1, smallest);
    }

    return 0;
}
 */

/*
// reverse each row

#include <stdio.h>

int main()
{
    int r1, c1;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r1, &c1);

    int arr[r1][c1];

    printf("Enter matrix elements:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Matrix : \n");

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // logic for reverse each row
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1 / 2; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[i][c1 - 1 - j];
            arr[i][c1 - 1 - j] = temp;
        }
    }

    printf("Matrix after reversing each row:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
 */

/*
 // transpose of matrix using swapping logic by keeping diagonal as it is

 #include <stdio.h>

int main()
{
    int r1, c1;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r1, &c1);

    int arr[r1][c1];

    printf("Enter matrix elements:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Matrix : \n");

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // transpose using swapping
    for (int i = 0; i < r1; i++)
    {
        for (int j = i + 1; j < c1; j++)
        {
            if (i != j)
            {
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }
        }
    }

    printf("Transpose matrix:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
} */

/*

// to print snake pattern

#include <stdio.h>

int main()
{
    int row, column;

    printf("Enter row and column: ");
    scanf("%d %d", &row, &column);

    int arr[row][column];

    printf("Enter elements:\n");

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Output:\n");

    for(int i = 0; i < row; i++)
    {
        if(i % 2 == 0)
        {
            // Even row: left to right
            for(int j = 0; j < column; j++)
            {
                printf("%d ", arr[i][j]);
            }
        }
        else
        {
            // Odd row: right to left
            for(int j = column - 1; j >= 0; j--)
            {
                printf("%d ", arr[i][j]);
            }
        }

        printf("\n");
    }

    return 0;
} */

/*
// to find average of 2D array

#include <stdio.h>
int main()
{
    int row, column;

    printf("Enter rows and columns: ");
    scanf("%d %d", &row, &column);

    if(row != column)
    {
        printf("Diagonal swap is possible only in square matrix\n");
        return 0;
    }

    int arr[row][column];

    printf("Enter matrix elements:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i=0;i<row;i++)
    {
        int temp = arr[i][i];
        arr[i][i] = arr[i][column - 1 - i];
        arr[i][column - 1 - i] = temp;
    }

    printf("Matrix after swapping both diagonals:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
{
    int row,column;
    int sum=0;
    printf("Enter the value of row and column : ");
    scanf("%d %d",&row,&column);

    int arr[row][column];

    printf("Enter %d elements: ", row * column);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }


    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            sum = sum + arr[i][j];
        }
    }

    float average = (float) sum/(row*column);

    printf("Average = %g\n", average);

    return 0;
}
 */

/*
// to find largest element in whole 2D array

#include <stdio.h>
int main()
{
    int row ,column;
    printf("Enter the value of row and column : ");
    scanf("%d %d",&row,&column);

    int arr[row][column];

    printf("Enter %d elements: ", row * column);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int largest = arr[0][0];

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            if(arr[i][j] > largest)
            {
                largest = arr[i][j];
            }
        }
    }

    printf("Largest element = %d\n", largest);

    return 0;
}
 */

/*
 // print transpose of 2D array using function (without extra spaces)


#include <stdio.h>

void readArray(int row, int column, int arr[row][column])
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}

void printTranspose(int row, int column, int arr[row][column])
{
    for(int j=0;j<column;j++)
    {
        for(int i=0;i<row;i++)
        {
            if(i > 0)
            {
                printf(" ");
            }
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int row, column;
    printf("Enter the value of row and column : ");
    scanf("%d %d", &row, &column);

    int arr[row][column];

    readArray(row, column, arr);
    printTranspose(row, column, arr);

    return 0;
}
 */

/*
// find the sum of 2 matrices (both dimesnsions exactly the same)


#include <stdio.h>

int main()
{
   int row, column;

   printf("Enter the value of row and column : ");
   scanf("%d %d", &row, &column);

   int matrix1[row][column], matrix2[row][column], sum[row][column];

   printf("Enter first matrix elements:\n");
   for(int i=0;i<row;i++)
   {
       for(int j=0;j<column;j++)
       {
           scanf("%d", &matrix1[i][j]);
       }
   }

   printf("Enter second matrix elements:\n");
   for(int i=0;i<row;i++)
   {
       for(int j=0;j<column;j++)
       {
           scanf("%d", &matrix2[i][j]);
       }
   }

   for(int i=0;i<row;i++)
   {
       for(int j=0;j<column;j++)
       {
           sum[i][j] = matrix1[i][j] + matrix2[i][j];
       }
   }

   printf("Sum of matrices:\n");
   for(int i=0;i<row;i++)
   {
       for(int j=0;j<column;j++)
       {
           printf("%d ", sum[i][j]);
       }
       printf("\n");
   }

   return 0;
} */

/*

// find the multiplication of 2 matrices (where c1=r2)

#include <stdio.h>

int main()
{
    int r1, c1, r2, c2;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    if(c1 != r2)
    {
        printf("Matrix multiplication is not possible\n");
        return 0;
    }

    int matrix1[r1][c1], matrix2[r2][c2], product[r1][c2];

    printf("Enter first matrix elements:\n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter second matrix elements:\n");
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            product[i][j] = 0;
            for(int k=0;k<c1;k++)
            {
                product[i][j] = product[i][j] + matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("Multiplication of matrices:\n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}

 */

/*
/*
 // find the sum of both diagonal elements


#include <stdio.h>

int main()
{
    int row, column;
    int sum = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &row, &column);

    if(row != column)
    {
        printf("Both diagonals are possible only in square matrix\n");
        return 0;
    }

    int arr[row][column];

    printf("Enter matrix elements:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i=0;i<row;i++)
    {
        sum = sum + arr[i][i];
        sum = sum + arr[i][column - 1 - i];
    }

    if(row % 2 != 0)
    {
        sum = sum - arr[row / 2][column / 2];
    }

    printf("Sum of both diagonal elements = %d\n", sum);

    return 0;
}
 */

/*
// WAP to swap both diagonal elements

#include <stdio.h>
int main()
{
    int row, column;

    printf("Enter rows and columns: ");
    scanf("%d %d", &row, &column);

    if(row != column)
    {
        printf("Diagonal swap is possible only in square matrix\n");
        return 0;
    }

    int arr[row][column];

    printf("Enter matrix elements:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i=0;i<row;i++)
    {
        int temp = arr[i][i];
        arr[i][i] = arr[i][column - 1 - i];
        arr[i][column - 1 - i] = temp;
    }

    printf("Matrix after swapping both diagonals:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
 */

/*
// sort each row of 2D array(ascending/descending)


#include <stdio.h>

int main()
{
    int row, column, choice;

    printf("Enter rows and columns: ");
    scanf("%d %d", &row, &column);

    int arr[row][column];

    printf("Enter matrix elements:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter 1 for ascending or 2 for descending: ");
    scanf("%d", &choice);

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column-1;j++)
        {
            for(int k=j+1;k<column;k++)
            {
                if(choice == 1)
                {
                    if(arr[i][j] > arr[i][k])
                    {
                        int temp = arr[i][j];
                        arr[i][j] = arr[i][k];
                        arr[i][k] = temp;
                    }
                }
                else
                {
                    if(arr[i][j] < arr[i][k])
                    {
                        int temp = arr[i][j];
                        arr[i][j] = arr[i][k];
                        arr[i][k] = temp;
                    }
                }
            }
        }
    }

    printf("Matrix after sorting each row:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
 */
/*

// rotate the 2D array by 90 degree(clockwise)

#include <stdio.h>

int main()
{
    int row, column;

    printf("Enter rows and columns: ");
    scanf("%d %d", &row, &column);

    int arr[row][column];
    int rotated[column][row];

    printf("Enter matrix elements:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            rotated[j][row - 1 - i] = arr[i][j];
        }
    }

    printf("Matrix : \n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("Matrix after 90 degree clockwise rotation:\n");
    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d ", rotated[i][j]);
        }
        printf("\n");
    }

    return 0;
}
 */


/* 
// rotate the 2D array by 90 degree(anticlockwise)

#include <stdio.h>

int main()
{
    int row, column;

    printf("Enter rows and columns: ");
    scanf("%d %d", &row, &column);

    int arr[row][column];
    int rotated[column][row];

    printf("Enter matrix elements:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            rotated[column - 1 - j][i] = arr[i][j];
        }
    }

    printf("Matrix : \n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("Matrix after 90 degree anticlockwise rotation:\n");
    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d ", rotated[i][j]);
        }
        printf("\n");
    }

    return 0;
} */


