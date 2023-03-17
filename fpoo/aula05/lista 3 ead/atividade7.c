#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	char resposta;
	int positivamente = 0;
	
	printf("Telefonou para a vítima? ");
	getchar();
	scanf("%c", &resposta);
	
	if (resposta == 'sim' || 'sim'){
		(positivamente ++);
	}
	
	printf("Esteve no local do crime? ");
	getchar();
	scanf("%c", &resposta);
	
	if (resposta == 'sim' || 'sim'){
		positivamente ++;
	}
	
	printf("Mora perto da vítima? ");
	getchar();
	scanf("%c", &resposta);
	
	if (resposta == 'sim' || 'sim'){
		positivamente ++;
	}
	
	printf("Devia para a vítima? ");
	getchar();
	scanf("%c", &resposta);
	
	if (resposta == 'sim' || 'sim'){
		positivamente ++;
	}
	
	printf("Já trabalhou com a vítima? ");
	getchar();
	scanf("%c", &resposta);
	
	if (resposta == 'sim' || 'sim'){
		positivamente ++;
	}
	
	if (positivamente < 2){
		printf("Inocente");
	}	
	else if (positivamente == 2){
		printf("Suspeita");
	}	
	else if (positivamente < 5){
		printf("Cúmplice");
	}
	else{
		prinft("Assassino");
	}
}
