#include <stdlib.h>
#include <stdio.h>
#include <locale.h> //acentuação

int main()
{
    //acentuação
    setlocale(LC_ALL, "Portuguese");
    //definir sucessor e antecessor de um numero
    int x, x1;


    printf("Escolha um número: ");
    scanf("%d", &x );
    x1 = x;
    printf("Sucessor = %d \n", ++x);
    printf("Antecessor = %d \n", --x1);


    system("pause");
    return 0;


}
