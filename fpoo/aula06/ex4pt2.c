#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(){
	setlocale(LC_ALL,"");
	srand(time(NULL));
	int vetor[50];
	int i, num, onde = -1;
	
	for (i = 0; i < 50; i++){
		vetor[i] = rand() %100;
		printf("[%d]%d\n", i, vetor[i]);
	}
	
	printf("\n\nDigite um número inteiro: \n");
	scanf("%d", &num);
	
	for (i = 0; i < 50; i++){
		if(vetor[i] == num){
				onde = i;
				break;
			}
	}
	
	if(onde != -1) printf("Encontrei na posição %d ", onde);
	else printf("Não encontrei");
}
