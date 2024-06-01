// Nicolas Ramos Carreira

// 202415986

// CC1Mb

// nicolascarreira2005@gmail.com

#include <cs50.h>
#include <stdio.h>

int main(void)
{

    float peso = get_float("Informe seu peso (kg): ");

    while (peso < 40.00 || peso > 200.00)

    {

        peso = get_float("Informe seu peso (kg): ");
    }

    float altura = get_float("Informe sua altura (m): ");

    while (altura < 1.40 || altura > 2.50)

    {

        altura = get_float("Informe sua altura (m): ");
    }

    float imc = peso / (altura * altura);

    if (imc < 16.00)

    {

        printf("IMC: %0.2f; Classificação: Magreza grau III.\n", imc);
    }

    else if (imc < 17.00 || imc >= 16.00)

    {

        printf("IMC: %0.2f; Classificação: Magreza grau II.\n", imc);
    }

    else if (imc < 18.50 || imc >= 17.00)
    {

        printf("IMC: %0.2f; Classificação: Magreza grau I.\n", imc);
    }

    else if (imc < 25.00 || imc >= 18.50)

    {

        printf("IMC: %0.2f; Classificação: Peso adequado.\n", imc);
    }

    else if (imc < 30.00 || imc >= 25.00)

    {

        printf("IMC: %0.2f; Classificação: Pré-obeso.\n", imc);
    }

    else if (imc < 35.00 || imc >= 30.00)
    {

        printf("IMC %0.2f; Classificação: Obesidade grau I.\n", imc);
    }

    else if (imc < 40.00 || imc >= 35.00)

    {

        printf("IMC %0.2f; Classificação: Obesidade grau II.\n", imc);
    }

    else if (imc >= 40.00)
    {

        printf("IMC %0.2f; Classificação: Obesidade grau III.\n", imc);
    }

    return 0;
}
