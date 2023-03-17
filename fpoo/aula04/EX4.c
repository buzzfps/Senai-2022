#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	float a,b,c;
	
	printf("Digite o comprimento do primeiro lado do triângulo:\n");
	scanf("%f", &a);
	printf("Digite o comprimento do primeiro lado do triângulo:\n");
	scanf("%f", &b);
	printf("Digite o comprimento do primeiro lado do triângulo:\n");
	scanf("%f", &c);
	
	if( a == b && b == c){
		printf("\nO triângulo é equilátero");
	}else if(a != b && a != c && b != c){
		printf("\nO triângulo é escaleno");
	}else{
		printf("\O triângulo é isósceles");
	}
	
}
