#include <stdio.h>

void SituacaoAcademica(int frequencia, float nota){
    if(frequencia >= 75 && nota >= 7.5){
        printf("Aluno aprovado, media %.2f e frequencia %d \n", nota, frequencia);
    }
    else if (frequencia < 75){
        printf("Aluno reprovado por falta, frequencia menor que 75: %d \n", frequencia);
    } else {
        printf("Aluno esta de exame, nota menor que 7.5: %.2f \n", nota);
    }
}
int main(){
    int frequencia;
    float nota;

    printf("Coloque a frequencia: ");
    scanf("%d", &frequencia);
    printf("Coloque a nota: ");
    scanf("%f", &nota);
    SituacaoAcademica(frequencia,nota);
    return 0;
}
