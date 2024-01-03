#include <stdio.h>
// bubble sort using recursion
void bubbleS(int arr[], int i, int j)
{
    if (i == 0)
    {
        return;
    }
    if (j < i)
    {
        if (arr[j] > arr[j + 1])
        {
            // swap
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
        bubbleS(arr, i, j + 1);
    }
    else
    {
        bubbleS(arr, i - 1, 0);
    }
}
int main()
{
    int arr[] = {4, 3, 7, 2, 1};
    int length = sizeof(arr) / sizeof(arr[0]);
    bubbleS(arr, length - 1, 0);
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}