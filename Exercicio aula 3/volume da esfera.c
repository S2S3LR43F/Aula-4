
//Protótipo da função
float esfera(float x);

//função pricipal
main()
{

    float raio, result; //variáveis

    printf("Digite o valor do Raio: ");
    scanf("%f", &raio);

    result=esfera(raio);//chamando a função esfera
    printf("O volume da esfera será: %f", result);
}
//Função esfera
float esfera(float x)
{
    float volume;
    volume=(4.0/3)*3.1415*(x*x*x); //cálculo
    return volume;//retornando o valor de resultado
}
