#include <stdlib.h>
#include <stdio.h>
#include <locale.h> //acentua��o

int main()
{
    //acentua��o
    setlocale(LC_ALL, "Portuguese");
    //definir sucessor e antecessor de um numero
    int x, x1;


    printf("Escolha um n�mero: ");
    scanf("%d", &x );
    x1 = x;
    printf("Sucessor = %d \n", ++x);
    printf("Antecessor = %d \n", --x1);


    system("pause");
    return 0;


}
