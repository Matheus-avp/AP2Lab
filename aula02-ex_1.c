#include <stdio.h>

int main(){
    int a,b,soma,subtracao,multiplicacao,divisao; 
    printf("Coloque dois numeros: ");
    scanf("%d", &a);
    scanf("%d", &b);
    soma = a + b;
    subtracao = a - b;
    multiplicacao = a * b;
    divisao = a / b;
    printf("Soma: %d \n", soma);
    printf("Subtracao : %d \n", subtracao);
    printf("Mulitplicacao: %d \n", multiplicacao);
    printf("Divisao: %d \n", divisao);
    return 0;
}
