#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float salario;
    printf("Insira um valor do salário: ");
    scanf("%f", &salario);
    salario = salario + salario * 0.1; //10%
    printf("Salário reajustado = R$ %.2f \n", salario);

    system("pause");
    return 0;









    }
