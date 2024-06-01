/* IDENTIFICAÇÃO DO ESTUDANTE:
 * Preencha seus dados e leia a declaração de honestidade abaixo. NÃO APAGUE
 * nenhuma linha deste comentário de seu código!
 *
 *    Nome completo: Nicolas Ramos Carreira
 *    Matrícula: 202415986
 *    Turma: CC1MB
 *    Email: nicolascarreira2005@gmail.com
 *
 * DECLARAÇÃO DE HONESTIDADE ACADÊMICA:
 * Eu afirmo que o código abaixo foi de minha autoria. Também afirmo que não
 * pratiquei nenhuma forma de "cola" ou "plágio" na elaboração do programa,
 * e que não violei nenhuma das normas de integridade acadêmica da disciplina.
 * Estou ciente de que todo código enviado será verificado automaticamente
 * contra plágio e que caso eu tenha praticado qualquer atividade proibida
 * conforme as normas da disciplina, estou sujeito à penalidades conforme
 * definidas pelo professor da disciplina e/ou instituição.
 */

// Comece aqui seu programa

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * MAIN
 */
int main(int argc, string argv[])
{

    // TODO: Escreva aqui o seu programa
    if (argc != 2)

    {

        printf("Uso: %s chave\n", argv[0]);

        return 1;
    }

    for (int i = 0; argv[1][i] != '\0'; i++)

    {

        if (!isdigit(argv[1][i]))
        {

            printf("Dica: Coloque um número\n");

            return 1;
        }
    }

    int k = atoi(argv[1]);
    string puro = get_string("Texto puro: ");

    for (int j = 0; j < strlen(puro); j++)
    {
        if (isalpha(puro[j]))
        {

            char m;

            if (islower(puro[j]))

            {

                m = 'a';
            }

            else
            {
                m = 'A';
            }

            puro[j] = ((puro[j] - m + k) % 26) + m;
        }
    }

    printf("Texto cifrado: %s\n", puro);

    // Termina o programa
    return 0;
}
