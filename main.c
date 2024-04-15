#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("\nPolitica de salarios\n");
    int n;
    bool ERRO;
    float salario;
    float salario_minimo;
    float salario_igual = 0;
    float maior_salario = 0;
    float menor_salario = 9999999;

    do{
        printf("\nDigite o numero de funcionarios: ");
        scanf("%i",&n);
        ERRO = n <= 0;
        if(ERRO) printf("\nNumero de funcionarios invalido tente novamente\n");
    }while(ERRO);

    do{
        printf("\nDigite o salario minimo da empresa: ");
        scanf("%f",&salario_minimo);
        ERRO = salario_minimo <= 0;
        if(ERRO) printf("\nSalario minimo invalido tente novamente\n");
    }while(ERRO);

    for(int i = 0; i < n; i++)
    {
        do{
            printf("\nDigite o salario dos funcionarios: ");
            scanf("%f",&salario);
            ERRO = salario < salario_minimo;
            if(ERRO) printf("\nSalario menor que o salario minimo, tente novamente\n");
        }while(ERRO);

        if(salario == salario_minimo)
        {
            salario_igual++;
        }

        if(salario > maior_salario)
        {
            maior_salario = salario;
        }

        if(salario < menor_salario)
        {
            menor_salario = salario;
        }
    }

    float percIgual = salario_igual / n * 100;
    float amplitude = maior_salario - menor_salario;

    printf("\nPercentual de funcionarios com salario igual ao salario mínimo: %f%%", percIgual);
    printf("\nAmplitude salarial: %2.f", amplitude);

    return 0;
}
