// Nicolas Ramos Carreira

// 202415986

// CC1Mb

// nicolascarreira2005@gmail.com

#include <cs50.h>
#include <stdio.h>

int main(void)
{

    float n = get_float("Valor da comida: ");

    while (n < 10.00 || n > 999.99)

    {

        n = get_float("Valor da comida: ");
    }

    float i = get_float("Porcentagem de impostos: ");

    while (i < 0.00 || i > 100.00)

    {

        i = get_float("Porcentagem de impostos: ");
    }

    int g = get_int("Porcentagem da gorjeta: ");

    while (g < 0 || g > 100)

    {

        g = get_int("Porcentagem da gorjeta: ");
    }

    float totalimposto = n + (n * i * 0.01);

    float totalgorjeta = totalimposto + (totalimposto * g * 0.01);

    float totalpessoa = totalgorjeta / 2;

    if (n >= 10.00 || n <= 999.99)
    {

        printf("Cada um pagará R$ %0.2f!\n", totalpessoa);
    }

    return 0;
}
