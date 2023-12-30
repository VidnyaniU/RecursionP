#include <stdio.h>

// count the occurrence of k in a digit
int countK(int n, int k)
{

    if (n == 0)
    {
        return 0;
    }

    int lastDigit = n % 10;
    if (lastDigit == k)
    {
        return 1 + countK(n / 10, k);
    }

    return countK(n / 10, k);
}
int main()
{
    printf("%d", countK(21205450, 1));

    return 0;
}