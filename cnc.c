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

int main(int argc, char *argv[]){
        gcode(100, 200, 44, 33);
        return 0;
}
