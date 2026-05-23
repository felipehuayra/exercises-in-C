/*Atividade 03.4 - Báskara
Dados os coeficientes (a≠0, b e c)
de uma equação do 2o grau, calcule
e informe suas raízes reais, usando
a fórmula de Báskara
*/

#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, x1, x2;
    printf("Digite os coeficientes: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a==0){
        printf("Invalido, a ≠ 0");
        return 0;
    }
    double d = pow(b, 2) - 4 * a * c;
    if (d < 0){
        printf("\nNão existem raízes reais");
        return 0;
    }
    else
    {
        d = sqrt(d);
    }
    x1 = (-b + d) / (2 * a);
    x2 = (-b - d) / (2 * a);
    printf("\nAs raízes são: %.2f e %.2f", x1, x2);

    return 0;
}