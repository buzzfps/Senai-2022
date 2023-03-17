#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(){
	setlocale(LC_ALL,"");
	srand(time(NULL));
	int vetor[10];
	int i, num, encontrado = 0;
	
	for (i = 0; i < 10; i++){
		vetor[i] = rand();
		printf("[%d]%d\n", i, vetor[i]);
	}
	
	printf("\n\nDigite um número inteiro: \n");
	scanf("%d", &num);
	i = 0;
	while(!encontrado){
		if (vetor[i] == num)
			encontrado = 1;
			i++;
			if(i == 10) break;
	}
	if(encontrado) printf("Encontrei");
	else printf("Não encontrei");

}
