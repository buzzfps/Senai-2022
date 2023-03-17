#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	float preco;
	char nome[20];
	
	printf("Digite o nome da merdacoria:\n");
	scanf("%s", &nome);
	printf("Digite o preço do produto:\n");
	scanf("%f", &preco);
	
	if(preco < 1000){
		preco = preco + preco * (float) 5 / 100;
	}else{
		preco = preco + preco * (float) 7 / 100;
	}
	
	printf("O novo preço da mercadoria %s é de R$ %2.f", nome,preco);
	
}
	
