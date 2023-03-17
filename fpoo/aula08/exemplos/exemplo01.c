#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <stdbool.h>

bool calcularmedia(float n1, float n2);

int main (int argc, char *argv[]){
	printf("%d", calcularmedia (6,7));
	
	return 0;
}
bool calcularmedia(float n1, float n2){
	float media = (n1+n2) / 2;
	return media >=6;
}
