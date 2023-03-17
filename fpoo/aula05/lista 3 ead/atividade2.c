#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	float salarioH, horastrabalhadas, ir, inss, sindicato, salarioL, salarioB;
	
	printf("Digite o quanto você recebe por horas trabalhadas: ");
    scanf("%f", &salarioH);
    
    printf("Digite quantas horas você trabalhou esse mês: ");
    scanf("%f", &horastrabalhadas);

    salarioB = salarioH * horastrabalhadas;
    
    ir = salarioB * (11.0 / 100);
    
    inss = salarioB * (8.0 / 100);
    
    sindicato = salarioB * (5.0 / 100);
    
    salarioL = salarioB - ir - inss - sindicato;
    

    printf("+ Salario Bruto: R$%.2f\n", salarioB);
    printf("- IR (11%): R$%.2f\n", ir);
    printf("- INSS (8%): R$%.2f\n", inss);
    printf("- Sindicato (5%): R$%.2f\n", sindicato);
    printf("= Salario Liquido: R$%.2f", salarioL);
    
    
}
