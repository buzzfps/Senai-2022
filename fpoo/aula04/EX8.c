#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int a,b;
	
	printf("Digite 2 números inteiros separados por espaço:\n");
	scanf("%d", &a);
	scanf("%d", &b);
	
	if(a > b){
		printf("O maior número é %d\n", a);
		printf("O menor número é %d\n", b);
	}else if(b > a){
		printf("O maior número é %d\n", b);
		printf("O maior número é %d\n", a);
	}
}
