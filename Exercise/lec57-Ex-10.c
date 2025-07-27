// Matrix Multiplication in c

#include <stdio.h>
#include <stdlib.h>
// it takes no of rows and column of a matrix as a input from user
void read_matrix(int *a, int *b, int i)
{
    printf("Enter the number of rows and columns in matrix %d: ", i);
    scanf("%d %d", a, b);
    i++;
}
// it takes the values of elements of a matrix from user
void get_matrix(int m, int n, int Mat[m][n])
{

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &Mat[i][j]);
        }
        printf("\n");
    }
}
// it cheaks if given matrices are applicable for multiplication
int is_not_multiplicable(int a, int b)
{
    if (a != b)
        return 1;
    else
        return 0;
}
// it prints given matrix
void print_matrix(int a, int b, int mat[a][b])
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
// it multiplies given two matrices
void multiplication(int a, int b, int n, int mat1[a][b], int mat2[b][n], int result[a][n])
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < n; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < b; k++)
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}
int main()
{
    int a, b, m, n, cheak, cheak1;
    while (1)
    {
        int i=1;
        read_matrix(&a, &b,i);
        i++;
        read_matrix(&m, &n,i);
        i++;

        if (is_not_multiplicable(b, m))
        {
            printf("Matrix multiplication is not possible\n");
            printf("Retry? (1 = yes / 0 = exit): ");
            scanf("%d", &cheak);
            if (cheak == 0)
                break;
            else
                continue;
        }
        int mat1[a][b], mat2[m][n], result[a][n];
        printf("Enter 1st Matrix: \n");
        get_matrix(a, b, mat1);
        printf("Enter 2st Matrix: \n");
        get_matrix(m, n, mat2);

        multiplication(a, b, n, mat1, mat2, result);

        printf("Matrix 1: \n");
        print_matrix(a, b, mat1);
        printf("Matrix 2: \n");
        print_matrix(m, n, mat2);
        printf("Multiplication of matrix 1 and matrix 2 is: \n");
        print_matrix(a, n, result);
        printf("To get multiplication of another matrices enter 1 or 0 to Exit: ");
        
        scanf("%d", &cheak1);
        if (cheak1 == 0)
            break;
    }
    return 0;
}