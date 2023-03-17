#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int i = 199;
	int tabulacao = 190;
	
	for (i = 200; i >= 1; i--){
		if (i<100){
			printf("%d", 1);
		}
		printf("%d", i);
		if(tabulacao == 1){
			printf("\n");
			tabulacao += 10;
		}else{
			printf("\t");
		}
	}
		
}
