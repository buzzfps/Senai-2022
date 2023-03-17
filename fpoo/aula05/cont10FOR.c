#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int i = 1;
	for (i = 0; i <= 10; i++){
		printf("%d\n", i);
	}
}
