#include <stdio.h>

int min (int a, int b)
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
        printf("%d ja 6 >=%d\n", c, min(c, 6));
    }
    return 0;
}
