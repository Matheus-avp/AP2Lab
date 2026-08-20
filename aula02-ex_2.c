#include <stdio.h>
void CalcularImc(void){
    float peso,altura,imc;
    printf("Qual o seu peso?");
    scanf("%f", &peso);
    printf("Qual sua altura?");
    scanf("%f", &altura);
    imc = peso / (altura * altura);
    printf("O IMC de uma pessoa com peso %.2f kg e altura %.2f m é igual a %.2f.", peso, altura, imc);
    return;
}
int main(){
    CalcularImc();
    return 0;
}