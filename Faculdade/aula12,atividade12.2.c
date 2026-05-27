/*Ativ. 12.2 - Notas da turma
Elabore um programa que leia, armazene e exiba os dados de uma turma de 5 alunos.
Cada Aluno deve informar:
Nome (char[21])
Matricula (char[15])
Média final (float)
Para isso, codifique e utilize as seguintes rotinas:
LeAlunos(t[], n): solicita ao usuário que digite os dados de n alunos e armazena em t.
Imprime(t[], n): exibe na tela os dados armazenados em t.*/

#include <stdio.h>

typedef struct {
    char nome[21];
    char matricula[15];
    float mediaFinal;
} Aluno;
void LeAlunos(Aluno t[], int n) {
    int i;
	for (i = 0; i < n; i++) {
        printf("\n=== Aluno %d ===\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]", t[i].nome);

        printf("Matricula: ");
        scanf(" %[^\n]", t[i].matricula);

        printf("Media final: ");
        scanf("%f", &t[i].mediaFinal);
    }
}
void Imprime(Aluno t[], int n) {
    printf("\n=== Dados da Turma ===\n");
    int i;
	for (i = 0; i < n; i++) {
        printf("\nAluno %d\n", i + 1);
        printf("Nome: %s\n", t[i].nome);
        printf("Matricula: %s\n", t[i].matricula);
        printf("Media final: %.2f\n", t[i].mediaFinal);
    }
}
int main() {
    Aluno turma[5];
    LeAlunos(turma, 5);
    Imprime(turma, 5);
    return 0;
}
