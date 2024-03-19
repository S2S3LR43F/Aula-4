#include <stdlib.h>
#include <stdio.h>

int main()
{
    //declarar variavel
    float n1, n2, n3,
    media;


    //leitura
    printf("insira o valor da nota 1: ");
    scanf("%f", & n1);
    printf("insira o valor da nota 2: ");
    fflush(stdin);
    scanf("%f", & n2);
    printf("insira o valor da nota 3: ");
    fflush(stdin);
    scanf("%f", & n3);

    //calculo
    media = (n1+n2+n3)/3;

    //resultado
    printf("Media = %.2f \n", media);

    system("pause");
    return 0;
}
