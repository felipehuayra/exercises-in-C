/*Atividade 03.2 – Rodízio
Dados último dígito da placa de um carro, 
informe o dia do seu rodízio. 
Sugestão: utilize switch/ case.
*/

#include <stdio.h>

int main(){
    int d;
    printf("\nDigite o ultimo digito da placa: ");
    scanf("%d", &d);
    switch (d){
        case 1: printf("\nDia de ródizio é Segunda-feira"); break;
        case 2: printf("\nDia de ródizio é Segunda-feira"); break;
        case 3: printf("\nDia de ródizio é Terca-feira"); break;
        case 4: printf("\nDia de ródizio é Terca-feira"); break;
        case 5: printf("\nDia de ródizio é Quarta-feira"); break;
        case 6: printf("\nDia de ródizio é Quarta-feira"); break;
        case 7: printf("\nDia de ródizio é Quinta-feira"); break;
        case 8: printf("\nDia de ródizio é Quinta-feira"); break;
        case 9: printf("\nDia de ródizio é Sexta-feira"); break;
        case 0: printf("\nDia de ródizio é Sexta-feira"); break;
        default: printf("\nNumero invalido");
    }
    return 0;
}