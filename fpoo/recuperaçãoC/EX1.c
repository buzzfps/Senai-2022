#include <stdio.h>
#include <locale.h>

int main(){
	int a;
	int b;
	int c;
	
	printf("Digite o valor de a:");
	scanf("%d", &a);
	printf("Digite o valor de b:");
	scanf("%d", &b);
	
	c = a + b;
	
	printf("O total da soma é: %d", c);
	
}
