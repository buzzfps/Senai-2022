#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int num [6];
	int i = 0;
	
	for(i=0; i<6; i++){
		printf("Digite os números para o vetor: ");
		scanf("%d", &num[i]);
	}
	for(i = 5; i>=0; i--){
		printf("%d ", num[i]);
	}
	
}
