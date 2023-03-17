#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
    int maiorIdade;
    int X, Y, Z, A, P;
    
    printf("Digite a sua idade:\n");
    scanf("%d", &X);
    maiorIdade = X;
    
    printf("Digite a sua idade:\n");
    scanf("%d", &Y);
    if (Y > maiorIdade) maiorIdade = Y;
    
    printf("Digite a sua idade:\n");
    scanf("%d", &Z);
    if (Z > maiorIdade) maiorIdade = Z;
    
    printf("Digite a sua idade:\n");
    scanf("%d", &A);
    if (A > maiorIdade) maiorIdade = A;
    
    printf("Digite a sua idade:\n");
    scanf("%d", &P);
    if (P > maiorIdade) maiorIdade = P;
    
    
    
    printf("A maior idade é: %d\n", maiorIdade);
}
