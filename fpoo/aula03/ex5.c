#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int a,b,c,d;
	
	printf("Digite um número: ");
	scanf("%d", a);
	b = 1;
	c = 1;
	
	d = a + b;
	
	printf("resultado:%d", d);
	
}
