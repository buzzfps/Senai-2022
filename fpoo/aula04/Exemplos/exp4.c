#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	char nome1[3] = "Ana";
	char nome2[3] = "Ivo";
	
	
	if(nome1 == nome2){
		printf("Os nomes são iguais\n");
	}else{
		printf("Os nomes são diferentes\n");
	}
	

}
	
