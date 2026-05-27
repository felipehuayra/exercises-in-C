/*Dado um inteiro n, informe se n é par ou ímpar
 usando o operador condicional ternário.*/

 #include <stdio.h>

 int main () {
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    printf("\nO seu numero e: %s", (n % 2) == 0 ? "par":"impar");
    return 0;
 }
