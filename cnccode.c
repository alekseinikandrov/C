#include <stdio.h>

void gcode(float x, float y, float w, float h){
        printf("G X GoTo %f\n", x);
        printf("G Y GoTo %f\n", y);
        printf("G Z Down\n");
        printf("G X Move %f\n", w);
        printf("G Y Move %f\n", h);
        printf("G X Move %f\n", -w);
        printf("G Y Move %f\n", -h);
        printf("G Z Up\n\n");
}

void cnc(float x, float y, float w, float h, float dx,int n){
      
        int i;
        for(i = 0; i < n; i++){
			gcode(x, y, w, h);
			x = x + w + dx;
        }
}

int main(int argc, char *argv[]){
        cnc(10, 200, 44, 33, 1, 5);
        return 0;
}
#include <stdio.h>

void gcode(float x, float y, float w, float h){
        printf("G X GoTo %f\n", x);
        printf("G Y GoTo %f\n", y);
        printf("G Z Down\n");
        printf("G X Move %f\n", w);
        printf("G Y Move %f\n", h);
        printf("G X Move %f\n", -w);
        printf("G Y Move %f\n", -h);
        printf("G Z Up\n\n");
}

void cnc(float x0, float x1, float y, float w, float h, float dx){
		float x;
        for(x = x0; x + w < x1; x = x + w + dx){
			gcode(x, y, w, h);
        }
}

int main(int argc, char *argv[]){
        cnc(10, 100, 200, 44, 33, 1);
        return 0;
}
