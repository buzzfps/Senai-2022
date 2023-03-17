#include <stdio.h>
#include <locale.h>

int main(){
	int a;
	int b;
	int c;
	int d;
	
	printf("Digite o valor de a:");
	scanf("%d", &a);
	printf("Digite o valor de b:");
	scanf("%d", &b);
	printf("Digite o valor de c:");
	scanf("%d", &c);
	
	d = (a + b + c) / 3;
	
	printf("A média é: %d"), d;
	
}
