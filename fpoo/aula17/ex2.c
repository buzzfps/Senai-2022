#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"");
	char nome [5][10];
	int idade[5];
	float peso[5];
	int i;
	printf("Digite o nome e idade de 5 pessoas:\n ");
	for(i = 0; i < 5; i++){
		scanf("%s" "%d" "%f", &nome[i], &idade[i], &peso[i]);
	}
	for(i = 0; i < 5; i++){
		if(idade[i] >= 18 && idade[i] <= 79 && peso[i] > 50)
		printf("%s\t%d\t%.1f\tpode doar\n", nome[i], idade[i], peso[i]);
		else
			printf("%s\t%d\t%.1f\tNão pode doar", nome[i], idade[i], peso[i]);
	}
}
