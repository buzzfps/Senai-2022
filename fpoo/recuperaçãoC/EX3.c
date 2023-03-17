#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	char nome[5][10];
	int notas1[5];
	int notas2[5];
	float media[5];
	int i;
	
	for(i = 0; i < 5; i++){
		printf("Digite seu nome e suas duas notas:\n", nome, notas1, notas2);
		scanf("%s", &nome[i]);
		scanf("%d", &notas1[i]);
		scanf("%d", &notas2[i]);
	}
	
	for(i = 0; i < 5; i++){
		media[i] = (float)(notas1[i] + notas2[i]) / 2;
		
		if(media[i] >= 5)
			printf("Aprovado ");
		else
			printf("Reprovado ");
		
		printf("%s %d %d %.1f\n",nome[i],notas1[i],notas2[i],media[i]);
	}	
}
