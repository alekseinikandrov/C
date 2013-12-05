#include <stdio.h>

int max (int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main(int argc, char *argv[])
{
    int c = 12;

    {
        printf("%d ja 6 >=%d\n", c, max(c, 6));
    }
    return 0;
}
