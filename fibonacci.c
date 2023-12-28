#include <stdio.h>

int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }

    return fib(n - 1) + fib(n - 2);
}
int main()
{
    int n = 6;
    // printf("Fibonacci of %d is %d.\n", n, fib(n));
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", fib(i));
    }

    return 0;
}