// Nicolas Ramos Carreira

// 202415986

// CC1Mb

// nicolascarreira2005@gmail.com

#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int numero = get_int("Você quer a tabuada de qual número? ");

    while (numero < 1 || numero >= 100)

    {

        numero = get_int("Você quer a tabuada de qual número? ");
    }

    int i = get_int("Você quer começar a tabuada em qual número? ");

    int f = get_int("Você quer terminar a tabuada em qual número? ");

    if (i < 0 || i >= 11)

    {

        printf("%s\n", "Erro na especificão da tabuada");
    }

    else if (f < i || f >= 11)

    {

        printf("%s\n", "Erro na especificação da tabuada");
    }

    else if (numero >= 1 && numero <= 99)

    {

        while (i <= f)
        {

            printf("%d x %d = %d\n", numero, i, numero * i);
            i = i + 1;
        }
    }

    return 0;
}
