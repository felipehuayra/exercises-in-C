/*Atividade 04.4 – Potência
Dado N >= 0 inteiro e X real, 
calcular X elevado a potência N 
(sem usar pow).*/

#include <stdio.h>
int main(){
    int x; 
    float n, y = 1;
    printf("Digite um número e um expoente: ");
    scanf("%f %d", &n, &x);
    while (x > 0){
        y = y * n;
        x--;
    }
    printf("\nResultado: %.2f", y);
    return 0;
}