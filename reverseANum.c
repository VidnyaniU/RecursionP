#include <stdio.h>

int ans = 0;

int reversedNum(int n)
{
    if (n == 0)
    {
        return ans;
    }

    if (n > 0)
    {
        int temp = n % 10;

        ans = ans * 10 + temp;

        reversedNum(n / 10);
    }

    return ans;
}
int main()
{
    printf("%d", reversedNum(1234));
    return 0;
}