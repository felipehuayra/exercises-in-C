/*Exercício 12.3
Distância entre dois pontos 
Defina um tipo de estrutura nomeada para representar pontos no plano através de suas coordenadas cartesianas (x, y). 
Em seguida, crie uma função para calcular a distância entre dois pontos e codifique um programa para testar seu funcionamento. 
*/

#include <stdio.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} Ponto;

float calcularDistancia(Ponto p1, Ponto p2) {
    float dx = p2.x - p1.x;
    float dy = p2.y - p1.y;

    return sqrt(dx * dx + dy * dy);
}

int main() {
    Ponto p1, p2;
    float distancia;

    printf("Digite as coordenadas do primeiro ponto:\n");
    printf("x: ");
    scanf("%f", &p1.x);

    printf("y: ");
    scanf("%f", &p1.y);

    printf("\nDigite as coordenadas do segundo ponto:\n");
    printf("x: ");
    scanf("%f", &p2.x);

    printf("y: ");
    scanf("%f", &p2.y);

    distancia = calcularDistancia(p1, p2);

    printf("\nDistancia entre os pontos: %.2f\n", distancia);

    return 0;
}

