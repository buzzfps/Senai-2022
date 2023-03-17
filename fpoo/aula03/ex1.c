/*
Desenvolva um programa que leia três variáveis (a, b, c) e resolva a expressão: ( a + b ) / c.
*/

#include <stdio.h>
#include <locale.h>
int main(){
	int a,b,c,d;
	printf("Digite um número inteiro: ");
	scanf("%d",&a);
	printf("digite outro número inteiro: ");
	scanf("%d",&b);
	printf("digite outro número inteiro: ");
	scanf("%d",&c);
	d = (a + b) / c;
	printf("o resultado é: %d",d);
}
