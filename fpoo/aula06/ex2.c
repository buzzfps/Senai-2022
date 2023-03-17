#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int num [10];
	int i; 
	int somapar = 0, somaimpar = 0, qtdpar = 0, qtdimpar = 0; 
	int mediaimpar = 0, mediapar = 0;
	
	printf("Digite 10 números inteiros entre 0 e 1000\n");
	for (i = 0; i < 10; i++){
	do{
		printf("[%d]:", i);
		scanf("%d", &num[i]);
	}while(num[i] < 0 || num[i] > 1000);
}
	for(i = 0; i < 10; i++){
		if(num[i] % 2 == 0){
			somapar += num[0];
			qtdpar ++;
		}else{
			somaimpar += num[i];
			qtdimpar++;
		}
	}
	if(qtdpar != 0) mediapar = somapar / qtdpar;
	if(qtdimpar != 0) mediaimpar = somaimpar / qtdimpar;
	
	printf("A soma e média dos pares [%d] e [%d]\n", somapar, mediapar);
	printf("A soma e média dos impares [%d] e [%d]\n", somaimpar, mediaimpar);
	printf("O total de números pares [%d] e [%d]\n", qtdpar);
	printf("O total de números pares [%d] e [%d]\n", qtdimpar);
}
