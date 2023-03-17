#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int alqueires, caminhoes, voltas, totalalqueiras, totalcaminhao;
	
	printf("Digite a quantidade de alqueires que a fazenda possui: ");
	scanf("%d", &alqueires);
	
	printf("Digite a quantidade de caminhões que a fazenda possui: ");
	scanf("%d", &caminhoes);
	
	totalalqueiras = alqueires * 250;
	totalcaminhao = caminhoes * 18;
	voltas = totalalqueiras/totalcaminhao;
	printf("o total de voltas será de %d", voltas);
}
