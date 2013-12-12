#include <stdio.h>

float gcode(float x, float y, float w, float h){
	printf("G X GoTo %f\n", x);
	printf("G Y GoTo %f\n", y);
	printf("G Z Down %f\n", z);
	printf("G X Move %f\n", w);
	printf("G Y Move %f\n", h);
	printf("G X Move %f\n", -w);
	printf("G Y Move %f\n", -h);
	printf("G Z Up   %f\n", Z);
}

int main(int argc, char *argv[]){
	gcode(100, 200, 44, 33);
	return 0;
}
