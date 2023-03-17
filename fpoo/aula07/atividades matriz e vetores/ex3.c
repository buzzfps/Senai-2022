#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(){
	setlocale(LC_ALL,"");
	char mercadoria[5][10];
	float preco[5], novopreco[5];
	float percentual[5];
	int i;
	
	printf("Digite o nome de 5 mercadorias e o seu preço: \n");
	for(i = 0; i < 5; i++){
		scanf("%s", &mercadoria[i]);
		scanf("%f", &preco[i]);
	}
	
	for(i = 0; i < 5; i++)
		if(preco[i] > 1000)
			novopreco[i] = preco[i] + preco[i] * (float)5/100;
		else
			novopreco[i] = preco[i] + preco[i] * 0.07;
		
	
	system("cls");
	
	printf("Mercadoria\tNovo preço\n");
	for(i = 0; i < 5; i++){
		printf("%s\t%2.f\n", mercadoria[i], novopreco[i]);
	}
}
