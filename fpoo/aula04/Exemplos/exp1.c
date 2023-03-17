#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int cor;
	
	//entrada
	printf("Digite a cor do semáforo \n[1.verde]\n[2.amarelo]\n[3.vermelho]");
	scanf("%d", &cor);
	
	if (cor == 1){
		printf("Você escolheu verde então pode ir.");
	}
}
