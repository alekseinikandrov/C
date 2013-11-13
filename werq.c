#include <stdio.h>
#include <stdlib.h>

//Print space
void print (int size)
{
    int c = 0;

    // If no space to print print just _* and return
    if (size == 0)
    {
        printf("_*\n");
        return;
    }

    // print _ + _*
    for (; c < size; ++c)
    {
        printf("_");
    }
    printf("_*\n");
}

void help ()
{
    // temp buffer
    char temp[256];
    //Space counter
    int count = 0;

    //While (true) endless loop
    while (1)
    {
        //User input
        scanf("%s", temp);

        //Clean screen (windows)
        //system("cls");
        //Clean screen (unix)
        //system("clear");

        // w - subtract, e - stay, r - add, q - quit, default do nothing
        switch (temp[0])
        {
        // subtract _*
        case 'w':
            if (count > 0)
            {
                --count;
            }
            print(count);
            break;
        // statys same
        case 'e':
            print(count);
            break;
        // add _
        case 'r':
            ++count;
            print(count);
            break;
        // quit
        case 'q':
            return;
        default:
            break;
        }
    }
}

// main Func
int main (int argc, char *argv[])
{
    //         ^
    // look up |
    help();

    return 0;
}
