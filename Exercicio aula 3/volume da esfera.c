
//Prot�tipo da fun��o
float esfera(float x);

//fun��o pricipal
main()
{

    float raio, result; //vari�veis

    printf("Digite o valor do Raio: ");
    scanf("%f", &raio);

    result=esfera(raio);//chamando a fun��o esfera
    printf("O volume da esfera ser�: %f", result);
}
//Fun��o esfera
float esfera(float x)
{
    float volume;
    volume=(4.0/3)*3.1415*(x*x*x); //c�lculo
    return volume;//retornando o valor de resultado
}
