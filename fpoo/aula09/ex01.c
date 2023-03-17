#include <stdio.h>
#include <locale.h>
#include <time.h>

int sorteio();

int main(){
	setlocale(LC_ALL,"");
	srand(time(NULL));
	char nomes [10][10];
	int i;
		for(i = 0; i < 10; i++){
		printf("Digite o seu nome: ");
		scanf("%s", &nomes[i]);
	}int sorteado =sorteio();
	system("cls");
	printf("O nome sorteado é: %s", nomes[sorteado]);
}
int sorteio(){
	srand(time(NULL));
	return rand()%10;
}
