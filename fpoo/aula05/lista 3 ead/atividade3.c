#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	float area, rendimento = 3, litros = 18, preco = 80, total;
	int latas;
	
	printf("Digite a area da parede (metros quadrados): ");
	scanf("%f", &area);
	
	latas = (area / (rendimento * litros));
	total = latas * preco;
	
	printf("Você devera comprar %i latas que custaram R$%.2f",  latas, total); 
}

