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

include <stdio.h>

int main(int argc, char *argv[]) {
	
	int y;
	int i;
	int f;
	int x;

	for(y=1; y<=3; y++){
		for(x=1; x<=3; x++){
			f=1;
			for(i=x*y; i>1; i--){
				f=f*i;
			}
			printf("%03d ", f);
		}
		printf("\n");
	}
	
	return 0;
}
