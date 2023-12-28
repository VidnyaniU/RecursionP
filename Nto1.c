#include <stdio.h>
void NtoOne(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("%d", n);
    NtoOne(n - 1);
}
int main()
{
    NtoOne(5);
    return 0;
}