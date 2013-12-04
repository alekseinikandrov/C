#include <stdio.h>

int min (int a, int b)
{
    if (a < b)
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
    int c = 10;

    {
        printf("%d ja 5 <=%d\n", c, min(c, 5));
    }
    return 0;
}
