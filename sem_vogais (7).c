/* IDENTIFICAÇÃO DO ESTUDANTE:
 * Preencha seus dados e leia a declaração de honestidade abaixo. NÃO APAGUE
 * nenhuma linha deste comentário de seu código!
 *
 *    Nome completo: Nicolas Ramos Carreira
 *    Matrícula:202415986
 *    Turma: CC1MB
 *    Email: nicolascarreira2005@gmal.com
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
#include <string.h>

string trocar(string palavra);
/**
 * MAIN
 */
int main(int argc, string argv[])
{

    if (argc != 2)
    {
        printf("Uso: ./sem_vogais palavra\n");

        return 1;
    }

    string palavra;
    palavra = argv[1];
    printf("%s\n", trocar(palavra));

    return 0;
}

string trocar(string palavra)
{

    for (int i = 0; i < strlen(palavra); i++)

    {
        switch (palavra[i])

        {
            case 'a':
                palavra[i] = '6';
                break;

            case 'e':
                palavra[i] = '3';
                break;

            case 'i':
                palavra[i] = '1';
                break;

            case 'o':
                palavra[i] = '0';
                break;

            case 'u':
                palavra[i] = 'v';
                break;

            default:
                break;
        }
    }

    return palavra;
}
