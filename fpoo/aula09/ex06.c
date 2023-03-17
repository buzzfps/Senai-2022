#include <stdio.h>
#include <locale.h>

int calcule(int dia, int mes, int ano);

int main(){
	setlocale(LC_ALL,"");
	int dia, mes, ano, idade;
	
	printf("Digite a sua data de nascimento: ");
	scanf("%d", &dia);
	scanf("%d", &mes);
	scanf("%d", &ano);
	
	
	idade = calcule(dia, mes, ano);
	
	printf("A sua idade é: %d", idade);
}

int calcule(int dia, int mes, int ano){
	return ;
} 
