#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int i = 0;
	for (i = 2; i <= 10; i+=2){
		printf("%d\n", i);
	}
}
