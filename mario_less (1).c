// Nicolas Ramos Carreira

// 202415986

// CC1Mb

// nicolascarreira2005@gmail.com

#include <cs50.h>
#include <stdio.h>

int main(void)

{

    int altura = get_int("Altura: ");

    while (altura < 1 || altura > 8)
    {

        altura = get_int("Altura: ");
    }

    for (int coluna = 0; coluna < altura; coluna++)

    {
        for (int espacoc = altura - 1; espacoc > coluna; --espacoc)

        {
            printf(".");
        }

        for (int linha = 0; linha <= coluna; linha++)

        {

            printf("%s", "#");
        }

        printf("\n");
    }

    return 0;
}
