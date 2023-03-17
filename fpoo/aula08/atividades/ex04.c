#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <stdbool.h>

int numero(int n1, int n2);
int qualeomaior(int n1, int n2);
	
int main (){
	int n1, n2;
	
	printf("Digite dois numeros inteiros:\n");
	scanf("%d", &n1);
	scanf("%d", &n2);
	printf("O maior numero é %d\n", qualeomaior(n1, n2));
	return 0;
}

int numero(int n1, int n2){
	if(n1 > n2) return n1;
	else n2;
}


