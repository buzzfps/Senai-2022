#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int i = 2;
	//Contar até 10 com o laço enquanto
	while (i <= 10){
		printf("%d\n", i);
		i++;
	}
}
