#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"");
	int x, i = -1;
	
	while(x < 0 || x > 10){
		printf("Digite um número de 0 a 10:");
		scanf("%d", &x);
	}
	for(i = 0; i <= 10; i++)
		printf("%d x %d = %d", x, i, (x*i));
}
