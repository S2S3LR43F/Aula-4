#include <stdlib.h>
#include <stdio.h>
#include <locale.h> //acentuação

int main()
{
    //acentuação
    setlocale(LC_ALL, "Portuguese");

    //variáveis
    float hr_aula, desconto, valor, salario, salarioliq;
    int num_aulas;

    printf("Numero de aulas: ");
    scanf("%d", &num_aulas);

    printf("Valor da hora aula: ");
    scanf("%f" , &hr_aula);

    printf("Valor do desconto: ");
    scanf("%f", &desconto);

    salario = num_aulas * hr_aula;
    valor = salario * desconto/100;
    salarioliq = salario - valor;
    printf("Salário líquido = R$: %.2f\n", salarioliq);

    system("pause");
    return 0;
}
