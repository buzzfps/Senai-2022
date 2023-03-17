#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <stdbool.h>

float calcular (float f, float c);

int main (int argc, char *argv[]){
	printf("%.2f", calcular (200,0));
}
float calcular (float f, float c){
	c = (f - 32) * 5/9;
	return c;
}
