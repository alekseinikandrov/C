#include <stdio.h>

int fact(int i)
{
    int fact = 1;
    for (; i > 1; --i)
    {
        fact *= i;
    }
    return fact;
}

main()
{
    int c = 0;
    for (; c < 7; ++c)
    {
        printf("%d Faktoriaal = %d\n", c, fact(c));
    }
    return 0;
}
