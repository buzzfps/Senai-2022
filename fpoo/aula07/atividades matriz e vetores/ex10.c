#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(){
	setlocale(LC_ALL,"");
	char nomes[5][10];
	int nota1[5], nota2[5];
	float media[5];
	int i;
	
	printf("Digite o nome e notas dos 5 alunos:\n");
	printf("Nome\tNota 1\tNota 2\n");
	for(i = 0; i < 5; i++){
		scanf("%s", &nomes);
		scanf("%d", &nota1);
		scanf("%d", &nota2);
	}
	
	printf("[Aluno][Nota 1][Nota 2][Média]\n");
	for(i = 0; i < 5; i++){
		media[i] = (float)(nota1[i] + nota2[i]) / 2;
		printf("[%s][%d][%d][%.1f]\n", nomes[i], nota1[i], nota2[i], media[i]);
	}
}
