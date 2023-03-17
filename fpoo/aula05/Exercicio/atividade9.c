#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"");
	int cont;
	int valor = -1;
	int acumulador = 0;
	int valores = -1;
	for(cont = 0; cont < 15; cont++){
		valores = -1;
		while(valores < 0 || valores > 32767){
			printf("Digite %d valor: ", cont + 1);
			scanf("%d", &valores);
		}
		acumulador += valores;
	}
	printf("A soma dos 15 valores digitados é de %d", acumulador);
}
