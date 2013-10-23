#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;
    int c;
   for (i = 0; i < 10; i++)
   {
       for (c = 0; c < 10; c++)
       {
           if ((c + i * 10) < 10)
           {
               printf("0%d ", c + i * 10);
           } else
           {
               printf("%d ", c + i * 10);
           }
       }
       printf("\n");
   }
}
