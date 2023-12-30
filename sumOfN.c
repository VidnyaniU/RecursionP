#include <stdio.h>
// to find sum of each digit in a number for ex 123 sum = 6
int sumOfnums(int n)
{
    if (n == 0)
    {
        return 0;
    }

    int temp = n / 10;
    n = n % 10;
    return n + sumOfnums(temp);
}
int main()
{
    printf("Sum of all the digits of the number is %d", sumOfnums(1234));
    return 0;
}