#include <stdio.h>

double mid(double a , double b, double c)
{
    c = (a + b) / 2;
    return c;
}

int main(int argc, char *argv[])
{

    printf("%f\n", mid(5, 3, 0));

    return 0;
}
