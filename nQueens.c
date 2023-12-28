#include <stdio.h>
#include <stdbool.h>

bool isSafe(int arr[4][4], int x, int y, int n)
{
    // for column
    for (int row = 0; row < x; row++)
    {
        if (arr[row][y] == 1) // if queen is already there in the column
        {
            return false;
        }
    }

    // for left diagonal
    int row = x;
    int col = y;

    while (row >= 0 && col >= 0)
    {
        if (arr[row][col] == 1)
        {
            return false;
        }

        row--;
        col--;
    }

    // for right diagonal
    row = x;
    col = y;

    while (row >= 0 && col < n)
    {
        if (arr[row][col] == 1)
        {
            return false;
        }

        row--;
        col++;
    }

    return true;
}

bool nQueen(int arr[4][4], int x, int n) // no need of col(i.e. y)
{
    if (x >= n) // all queens are placed
    {
        return true;
    }
    for (int col = 0; col < n; col++)
    {
        if (isSafe(arr, x, col, n))
        {
            arr[x][col] = 1; // place the queen

            // for next rows
            if (nQueen(arr, x + 1, n))
            {
                return true;
            }

            arr[x][col] = 0; // backtracking
        }
    }
    return false;
}
int main()
{
    int n;
    scanf("%d", n);

    int arr[4][4] = {{0, 0, 0, 0},
                     {0, 0, 0, 0},
                     {0, 0, 0, 0},
                     {0, 0, 0, 0}};

    if (nQueen(arr, 0, n) == false)
    {
        printf("Solution does not exist");
        return false;
    }

    if (nQueen(arr, 0, n))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
