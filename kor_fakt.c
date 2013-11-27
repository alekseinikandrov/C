#include <stdio.h>
int main (int argc, char *argv[]) {

	int i;
	int a;
	for(i = 1; i < 6; i = i + 2){
		for(a = 1; a < 6; a = a + 2){
			if(a * i < 10)
			{
				printf(" 0%d", a * i);
			} else
			{
				printf(" %d", a * i);
			}
		}
		printf("\n");
	}
	return 0;
}
