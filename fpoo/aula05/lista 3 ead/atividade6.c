#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int valor, cem, cinquenta, dez, cinco, um;
	
	printf("Digite o valor desejado de saque (R$10 - R$600): ");
	scanf("%i", &valor);
	
	if (valor < 10 && valor > 600){
		printf("Valor desejado inválido!");
	}else{
		cem = valor / 100;
		valor -= cem * 100;
		cinquenta = valor / 50;
		valor -= cinquenta * 50;
		dez = valor / 10;
		valor -= dez * 10;
		cinco = valor / 5;
		valor = cinco * 5;
		um = valor;
	}

	
	if(cem > 0){
		printf("\n%i nota(s) de cem", cem);
	}if(cinquenta > 0){
		printf("\n%i nota(s) de cinquenta", cinquenta);
	}if(dez > 0){
		printf("\n%i nota(s) de dez", dez);
	}if(cinco > 0){
		printf("\n%i nota(s) de cinco", cinco);
	}if(um > 0){
		printf("\n%i nota(s) de um", um);
	}


}
