#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <stdbool.h>

bool numero(int n1, int n2);

	
int main (int argc, char *argv[]){
	printf("%d", numero(2,2));
	
	return 0;
}

bool numero(int n1, int n2){
	if(n1 == n2) return true;
	else return false;
}
