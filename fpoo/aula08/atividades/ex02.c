#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <stdbool.h>

float calcular (float c, float f);

int main (int argc, char *argv[]){
	printf("%.2f", calcular (23,0));
}
float calcular (float c, float f){
	f = (c * 9 / 5) + 32;
	return f;
}
