/*Atividade 04.1 (casa) Quais 
os valores das variáveis x e y 
após a execução dessas instruções? 
Seja x=3 e a instrução y = x * (x + 1) * x++.
Seja x=5, y = 3 e a instrução y *= x+1.
*/

#include <stdio.h>

int main (){
   /*parte 1*/
    int x = 3, y;
    y = x * (x + 1) * x++;
    printf("x = %d e y = %d", x, y);
   /*parte 2*/
    x = 5, y = 3;
    y *= x + 1;
    printf("\nx= %d e y = %d", x, y);
    return 0;
}