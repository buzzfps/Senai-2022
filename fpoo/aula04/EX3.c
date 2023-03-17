#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");	
	float salario, inssreal, inssporcento = 0, salfinal;
	
	printf("Digite o seu salário:\n");
	scanf("%f", &salario);
	
	if(salario < 1212.01){
		inssporcento = 7.5 /100;
		inssreal = salario * inssporcento;
	}else if(salario < 2425.35){
		inssporcento = 9 / 100;
		inssreal = salario * inssporcento;
	}else if(salario < 3641.03){
		inssporcento = 12 / 100;
		inssreal = salario * inssporcento;
	}else if(salario < 7087.23){
		inssporcento = 14 / 100;
		inssreal = salario * inssporcento;
	}else{
		inssporcento = 14 / 100;
		inssreal = 7087 .22 * inssporcento
	} 
	salfinal = salario - inssreal;
	
	printf("O desconto do INSS será de: R$ %2.f\n", inssreal);
	printf("O salário final será de R$ %2.f\n", salfinal);
		
}
	
	
	
		
	
	
	
