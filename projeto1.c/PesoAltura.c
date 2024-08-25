#include <stdio.h>

typedef struct{
int peso; // peso em quilogramas
int altura; //altura em centímetros

} PesoAltura;



int main() {
    PesoAltura pessoa;
    pessoa.peso = 70;
    pessoa.altura = 170;
    printf("Peso: %i, Altura: %i\n ", pessoa.peso, pessoa.altura);
    return 0;

}