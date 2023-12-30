#include <stdio.h>
#include <stdbool.h>
// to check if a number is palindrome or not?
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

bool palidrome(int n)
{
    int rev = reversedNum(n);
    if (rev == n)

        return true;

    return false;
}
int main()
{
    bool res = palidrome(133222331);
    res == 1 ? printf("Palindrome!") : printf("Not a Palindrome!");

    return 0;
}