#include<stdio.h>
void read(int matrix[10][10], int row, int cols)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}
void display(int matrix[10][10], int row, int cols)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void transpose(int matrix[10][10], int row, int cols)
{
    int a[10][10], i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < cols; j++)
        {
            a[j][i] = matrix[i][j];
        }
    }
    display(a, row, cols);
}
void multiply(int matrix[10][10], int mat2[10][10], int r1, int c1, int c2)
{
    int a[10][10], i, j, k;
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            a[i][j] = 0;
            for (k = 0; k < c1; k++)
            {
                a[i][j] = (a[i][j] + (matrix[i][k] * mat2[k][j]));
            }
        }
    }
    printf("\nProduct of matrix.... ");
    display(a, r1, c2);
}
void addition(int matrix[10][10], int mat2[10][10],int row, int cols)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < cols; j++)
        {
            matrix[i][j] += mat2[i][j];
        }
    }
    display(matrix, row, cols);
}

void main()
{
    int matrix[10][10], mat2[10][10], r1, c1, r2, c2, ch;
    printf("Enter row size and coloumn size of matrix 1 \n ");
    scanf("%d%d", &r1, &c1);
    printf("Enter row size and coloumn size of matrix 2 \n ");
    scanf("%d%d", &r2, &c2);
    printf("\nEnter elements of matrix 1 :");
    read(matrix, r1, c1);
    printf("\nEnter elements of matrix 2 :");
    read(mat2, r2, c2);
    printf("\nMatrix 1\n");
    display(matrix, r1, c1);
    printf("\nMatrix 2\n");
    display(mat2, r2, c2);
    printf("\nMATRIX OPERATIONS ARE");
    printf("\n 1.Matrix addition\n 2.Matrix multiplication\n 3.Matrix transpose\n");
    printf("Enter your option: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        if ((r1 == r2) && (c1 == c2))
        {
            addition(matrix, mat2, r1, c1);
        }
        else
        {
            printf("\naddition is not possible");
        }
        break;
    case 2:
        if (c1 == r2)
        {
            multiply(matrix, mat2, r1, c1, c2);
        }
        else
        {
            printf("\nMatrix multiplication is not possible");
        }
        break;
    case 3:
        printf("\nTranspose of matrix 1 ");
        transpose(matrix, r1, c1);
        printf("\nTranspose of matrix 2 ");
        transpose(mat2, r2, c2);
        break;
    default:
        printf("\n**invalid value*");
    }
}
