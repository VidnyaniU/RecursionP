#include <stdio.h>

// print triangle pattern using recursion
void Triangle(int r, int c)
{
    if (r == 0)
    {
        return;
    }
    if (c < r)
    {
        Triangle(r, c + 1);
        printf("* ");
    }
    else
    {
        Triangle(r - 1, 0);
        printf("\n");
    }
}
void invertedTriangle(int r, int c)
{
    if (r == 0)
    {
        return;
    }
    if (c < r)
    {
        printf("* ");
        invertedTriangle(r, c + 1);
    }
    else
    {
        printf("\n");
        invertedTriangle(r - 1, 0);
    }
}
int main()
{
    Triangle(4, 0);
    printf("\n");
    invertedTriangle(4, 0);
    return 0;
}