/*Atividade 04.5 – Quadrado
O quadrado de um número natural n 
é dado pela soma dos n primeiros 
números ímpares consecutivos. 
Por exemplo, 12=1, 22=1+3, 32=1+3+5, 
42=1+3+5+7, etc. 
Dado um número n, calcule seu quadrado 
usando a soma de ímpares ao invés de produto. 
*/

#include <stdio.h>
int main(){
    int n, impar = 1, soma = 0;
    printf("Digite um número: ");
    scanf("%d", &n);
    while (n > 0){
        soma = soma + impar;
        impar = impar + 2;
        n--;
    }
    printf("\nResultado: %d", soma);
    return 0;
}