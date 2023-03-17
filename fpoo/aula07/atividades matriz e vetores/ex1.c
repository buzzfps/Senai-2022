#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(){
	setlocale(LC_ALL,"");
	char nomes[5][10];
	float salario[5];
	float percentual;
	int i;
	
	printf("Digite o nome dos 5 funcionário:\n");
	for(i=0; i < 5; i++){
		scanf("%s", &nomes[i]);
	}
	
	printf("Digite os 5 salários respectivamente:\n");
	for(i = 0; i < 5; i++){
		do{
			scanf("%f", &salario[i]);	
		}while(salario[i]<0 || salario[i] > 10000000);
	}
	printf("Digite percentual(%%) de reajuste:\n");
	for(i=0;i<5;i++){
		do{
		scanf("%f", &percentual);	
		}while(percentual < 0 || percentual>1000000);
	}
	
	for(i=0;i<5;i++){
		salario[i] = salario[i] * percentual / 100 + salario[i];
		printf("%s novo salário R$%.2f\n", nomes[i], salario[i]);
	}
}
