/*Atividade 12.1 – Melhor amigo
Defina a estrutura PESSOA com:
Nome
Telefone
Data de nascimento
Antes, não esqueça de definir a estrutura DATA.
Implemente um programa que solicite os dados do seu melhor amigo; armazene numa variável do tipo PESSOA. 
Em seguida imprima os dados desta variável na tela.
*/

#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} DATA;

typedef struct {
    char nome[100];
    char telefone[20];
    DATA nascimento;
} PESSOA;

int main() {
    PESSOA amigo;

    printf("Digite o nome do seu melhor amigo: ");
    fgets(amigo.nome, 100, stdin);

    printf("Digite o telefone: ");
    fgets(amigo.telefone, 20, stdin);

    printf("Digite a data de nascimento:\n");

    printf("Dia: ");
    scanf("%d", &amigo.nascimento.dia);

    printf("Mes: ");
    scanf("%d", &amigo.nascimento.mes);

    printf("Ano: ");
    scanf("%d", &amigo.nascimento.ano);

    printf("\n=== Dados do Melhor Amigo ===\n");
    printf("Nome: %s", amigo.nome);
    printf("Telefone: %s", amigo.telefone);

    printf("Data de nascimento: %02d/%02d/%d\n",
           amigo.nascimento.dia,
           amigo.nascimento.mes,
           amigo.nascimento.ano);

    return 0;
}
