#include <stdio.h>

int main (int argc, char *argv[])
{
   printf("%c %c \n", 'a', 65);			//tähed
   printf("%d %ld\n", 1973, 750000L);		//decimalid
   printf("%10d \n", 1973);	//tühikutega arv
   printf("%010d \n", 1993);	// nullidega arv
   printf("%d %x %o \n", 110, 110, 110);	//Some different radices...?
   printf("%4.2f %+.0e %E \n", 3.1416, 3.1416, 3.1416);		//komadega arv
   printf("%*d \n", 10, 15);
   printf("%s \n", "A string");		//tekst
   
   return 0;
}
