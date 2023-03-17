#include <stdio.h>
#include <locale.h>

int calcule(int ano);

int main(){
	setlocale(LC_ALL,"");
	int ano, idade;
	
	printf("Digite o ano do seu nascimento: ");
	scanf("%d", &ano);
	
	idade = calcule(ano);
	
	printf("A sua idade é: %d", idade);
}

int calcule(int ano){
	return 2022 - ano;
} 
