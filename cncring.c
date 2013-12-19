#include <stdio.h>
#include <math.h>

void ring (float x0, float y0, float r, int n){
	
	int i;
	float x;
	float y;
	
	printf("G XY GoTo %f,%f\n", x0, y0+r);
    printf("G Z Down\n");
    
	for(i = 1; i <= n; i++){
		x = x0 + r * sin(2.0 * M_PI * i / n);
		y = y0 + r * cos(2.0 * M_PI * i / n);
		printf("G XY GoTo %f %f\n", x, y);
	}
    
    printf("G Z Up\n");
    printf("\n");
}

int main(int argc, char *argv[]){
    
    ring(100, 100, 5.0/2, 16);
    ring(100, 100, 25.0/2, 16);
    
    return 0;
}
