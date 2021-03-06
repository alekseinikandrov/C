#include <stdio.h>

void gcode(float x, float y, float w, float h){
    printf("G X GoTo %f\n", x);
    printf("G Y GoTo %f\n", y);
    printf("G Z Down\n");
    printf("G X Move %f\n", w);
    printf("G Y Move %f\n", h);
    printf("G XY Move %f %f\n", -w, -h);
    printf("G Z Up\n\n");
}

void cnc(float x0, float x1, float y0, float y1, float w, float h, float dx, float dy){
    float x;
    float y;

    for(y = y0; y + h <= y1; y = y + h + dy){
        for(x = x0; x + w <= x1; x = x + w + dx){
            gcode(x, y, w, h);
        }
    }
}

int main(int argc, char *argv[]){
    cnc(2, 110, 2, 100, 20, 30, 2, 2);
    return 0;
}
