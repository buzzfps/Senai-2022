#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int i;
	int tabulacao = 20;
	
	for (i = 11; i < 200; i++){
		if (i<100){
			printf("%d", 1);
		}
		printf("%d ", i);
		if(tabulacao == i){
			printf("\n");
			tabulacao += 10;
		}else{
			printf("\t");
		}
	}
		
}
