#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265359
 
void point(int x, int y)
{
    if (x >= 0 && x < 79 && y >= 2 && y < 25)
        {
        printf("\033[%d;%dH", y, x);
        printf("#");
        }
}
void spiral()
{
    int c = 0, x, y;
    double angle;
    for (c = 1; c <= 600; ++c)
    {
        angle = PI * c / 100;
        x = angle * cos(angle);
        y = angle * sin(angle);
        point(40 + x, 13 + y);
    }
}
int main()
{
        printf("\n\n");
    spiral();
        printf("\033[%d;%dH", 25, 0);
    return 0;
}
