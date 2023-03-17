#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	char nome[10];
	int idade;
	
	printf("Digite o seu nome:\n");
	scanf("%s",&nome);
	printf("Digite a sua idade:\n");
	scanf("%d",&idade);
	
	if(idade < 10){
		printf("Olá %s você é criança \n", nome);
	}else if(idade < 19){
		printf("Olá %s você é adolescente \n", nome);
	}else if(idade <24){
		printf("Olá %s você é jovem \n", nome);
	}else if (idade < 45){
		printf("Olá %s você é adulto \n", nome);
	}else if (idade < 60){
		printf("Olá %s você é de meia idade \n", nome);
	}else{
		printf("Olá %s você é idoso \n", nome);
	}
	printf("Segundo o OMS (Organização Mundial de Saúde).");
	
}
