#include <stdlib.h>
#include <stdio.h>

int main()
{
    //F = (c * 1.8) + 32 ou (c* 9/5) + 32
    //C = (f - 32) * 9/5
    float C, F;
    printf("Insira uma temperatura em grau celsius: ");
    scanf("%f", &C);

    //calculo
    F =(C * 9/5) + 32;
    printf("Fahreinheit: %.3f\n", F);

    system("pause");
    return 0;



}
