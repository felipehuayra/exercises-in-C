/*Atividade 03.3 – Conceito final
Escreva um programa em C que leia
a quantidade de faltas de um aluno 
e sua média e informe seu conceito final,
sendo:
Faltas > 5 🡺 F
Faltas <=5 e Média <6 🡺 C
Faltas <=5 e 6<= Média <7.5 🡺 B
Faltas <=5 e 7.5<= Média <9 🡺 A
Faltas <=5 e Média >= 9 🡺E
*/

#include <stdio.h>

int main(){
    int f;
    float m;
    printf("\nDigite a quantidade de faltas e a media: ");
    scanf("%d %f", &f, &m);
    if (f > 5) 
        {
            printf("\nConceito Final: F");
        }
    else
        if(m < 6) 
        {
            printf("\nConceito Final: C");
        }
    else 
        if (m < 7.5)
        {
            printf("\nConceito Final: B");
        }
    else
        if (m < 9)
        {
            printf("\nConceito Final: A");
        }
    else
        if (m >= 9)
        {
            printf("\nConceito Final: E");
        }
    
    return 0;    
}