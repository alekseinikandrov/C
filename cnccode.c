#include <stdio.h>

void gcode(float x, float y, float w, float h){
        printf("G X GoTo %f\n", x);
        printf("G Y GoTo %f\n", y);
        printf("G Z Down\n");
        printf("G X Move %f\n", w);
        printf("G Y Move %f\n", h);
        printf("G X Move %f\n", -w);
        printf("G Y Move %f\n", -h);
        printf("G Z Up\n");
}

void cnc(float y, int n){
		float x;
		int i;
		for(i=0; i<(n); i++){
			gcode(145, y, 44, 33);
		}
}

int main(int argc, char *argv[]){
        cnc(200, 6);
        return 0;
}
