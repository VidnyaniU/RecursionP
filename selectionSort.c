#include <stdio.h>
// selection sort using recursion
void selectionS(int arr[], int i, int j, int max)
{
    if (i == 0)
    {
        return;
    }
    if (j < i)
    {
        if (arr[j] > arr[max])
        {
            selectionS(arr, i, j + 1, j);
        }
        else
        {
            selectionS(arr, i, j + 1, max);
        }
    }
    else
    {
        int temp = arr[max];
        arr[max] = arr[i - 1];
        arr[i - 1] = temp;
        selectionS(arr, i - 1, 0, 0);
    }
}
int main()
{

    int arr[] = {4, 3, 7, 2, 1};
    // int max = arr[0];
    int length = sizeof(arr) / sizeof(arr[0]);
    selectionS(arr, length, 0, 0);
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}