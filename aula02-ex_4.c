#include <stdio.h>
#include <stdbool.h>

bool verificar_triangulo(float a, float b,float c){
    if(a< b + c || b< a + c || c< b + a ){
        return true;
    } else {
        return false;
    }
}
void apresenta(bool triangulo){
    if(triangulo == true){
    printf("Esse triângulo existe.");
    }else {
    printf("Esse triangulo não existe.");
    }
}

int main(){
    
}