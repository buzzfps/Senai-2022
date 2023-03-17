#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int cor, alcool;
	
	printf("Digite a cor do semáforo \n[1.verde  ]\n[1.amarelo ]\n[1.vermelho]\n");
	scanf("%d",&cor);
	printf("Você ingeriu bebida alcoólica?\n[1. Sim]\n[2.Não]\n");
	scanf("%d",&alcool);
	
	switch(cor){
		case 1:
			printf("Você escolheu verde então pode ir.\n");
			break;
		case 2:
			printf("Você escolheu amarelo então pode ir.\n");
			break;
		case 3:
			printf("Você escolheu vermelho então pode ir.\n");
			break;
		default:
			printf("Opção inválida\n");
	}
	printf("Fim.");
}
