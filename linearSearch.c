#include <stdio.h>

// linear search using recursion
int linearS(int arr[], int size, int index, int target)
{
    if (index == size)
        return -1;
    if (arr[index] == target)
        return index;
    else
        return linearS(arr, size, index + 1, target);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("%d", linearS(arr, size, 0, 4));

    return 0;
}