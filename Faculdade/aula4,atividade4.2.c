/* Dada uma sequência de números inteiros 
diferentes de zero, terminada por um 
zero, imprima o quadrado 
de cada número da sequência. */

#include <stdio.h>

int main(){
    int n;
    printf("\nDigite um numero: ");
    do{
    scanf("%d", &n);
    printf("O quadrado é: %d\n", n * n);
    }while(n != 0);

    return 0;
}