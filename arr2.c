#include <stdio.h>

int main()
{
    int A[3][3], B[3][3], Sum[3][3];
    int i, j;

    // Input first matrix
    printf("Enter elements of first 3x3 matrix:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Input second matrix
    printf("\nEnter elements of second 3x3 matrix:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // Calculate sum of matrices
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }

    // Display result
    printf("\nSum of the matrices:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", Sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}