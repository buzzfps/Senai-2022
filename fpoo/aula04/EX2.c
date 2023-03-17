#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	float salario, salfamilia;
	int filhos;
	
	printf("Digite o seu salário:\n");
	scanf("%f", &salario);
	
	printf("Digite a quantidade de filhos:\n");
	scanf("%d", &filhos);
	
	if(salario < 1655.58){
		salfamilia = 56.47 * filhos;
	}
	
	printf("O seu salario é R$ %.2f \n", salario);
	printf("O salário família é R$ %.2f \n", salfamilia);
	printf("O salário final é de R$ %.2f \n", salario + salfamilia);
}
