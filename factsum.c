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

int fact_sum(int n)
{
	int s;
	int i;
	s = 0;
	for (i = 1; i <= (n); i++)
	{
		s = s + fact(i);
	}
	
	return s;
}

main()
{
    
    printf("Faktoriaalide summa = %d\n", fact_sum(5));
    
    return 0;
}
