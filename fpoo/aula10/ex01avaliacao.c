#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	char nomes[7][10];
	int idade;
	int i;
	
	/*for (i = 0; i < 7; i++){
	printf("Digite o seu nome e idade: ");
	scanf("%s", &nomes[i]);
	scanf("%d", &idade[i]);
	}
	
	if(idade[i] <=12){
		printf("%s criança", nomes[i], idade[i]);
	}else if(idade[i] <= 17){
		printf("%s jovem", nomes[i], idade[i]);
	}else if(idade[i] <= 30){
		printf("%s adulto", nomes[i], idade[i]);
	}else if(idade[i] <= 31){
		printf("%s meia idade", nomes[i], idade[i]);
	}else if (idade[i] <= 65){
		printf("%s idoso", nomes[i], idade[i]);
	}*/
	
	printf("Digite o seu nome e idade: ");
	scanf("%s", &nomes[i]);
	scanf("%d", &idade);
	
	if(idade <=12){
		printf("%s criança", nomes);
	}else if(idade <= 17){
		printf("%s jovem", nomes);
	}else if(idade <= 30){
		printf("%s adulto", nomes);
	}else if(idade <= 31){
		printf("%s meia idade", nomes);
	}else if (idade <= 65){
		printf("%s idoso", nomes);
	}
}
