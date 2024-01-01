#include <stdio.h>
#include <stdbool.h>
// find if the array is sorted using recursion
bool isSorted(int arr[], int i)
{
    int arrLength = sizeof(arr) / sizeof(arr[0]);
    if (i == arrLength)
    {
        return true;
    }

    return arr[i] < arr[i + 1] && isSorted(arr, i + 1);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    bool ans = isSorted(arr, 0);
    ans == 0 ? printf("Not sorted!") : printf("Sorted!");
    return 0;
}