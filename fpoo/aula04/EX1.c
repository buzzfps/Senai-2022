#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	float preco;
	
	printf("Digite o preço do produto:\n");
	scanf("%f", &preco);
	
	if(preco > 1000){
		preco = preco - preco * 8 / 100;
	}
		
	printf("o preço final é R$ %.2f", preco);
		
}
