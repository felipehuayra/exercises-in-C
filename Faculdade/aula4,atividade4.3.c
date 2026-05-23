/*atividade 4.3 - Dado um número 
inteiro n >= 0, calcular 
o fatorial de n (n!). */

#include <stdio.h>

int main(){
    int n, fat = 1;
    printf("Digite um numero: ");
    scanf("%d", &n);
    while(n > 0){
        fat = fat * n;
        n--;
    }
    printf("\nO fatorial é: %d", fat);
    return 0;
}