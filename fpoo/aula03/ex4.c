#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	char nome[10];
	float salario, reajuste, novoSalario;
	
	//entradas
	printf("Digite o nome do funcionário:\n");
	scanf("%s", &nome);
	
	printf("Digite seu salário:\n");
	scanf("%s", &salario);
	
	printf("Índice percentual (%%) de reajuste: \n");
	scanf("%f", &reajuste);
	
	//processamento
	
	novoSalario = salario + salario + reajuste/100;
	
	//saida
	
	printf("o novo salario do funcionario %s é: \n R$ %.2f", nome, novoSalario);
}
