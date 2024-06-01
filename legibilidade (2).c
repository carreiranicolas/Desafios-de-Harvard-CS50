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
#include <math.h>
#include <stdio.h>
#include <string.h>

int contar_letras(string texto);
int contar_palavras(string texto);
int contar_frases(string texto);

int main(void)

{

    string texto = get_string("Texto: ");

    int letras = contar_letras(texto);
    int palavras = contar_palavras(texto);
    int frases = contar_frases(texto);

    float L = (float) letras / palavras * 100;
    float S = (float) frases / palavras * 100;

    int indice = round(0.0588 * L - 0.296 * S - 15.8);

    printf("%s\n", texto);

    if (indice < 1)
    {

        printf("Abaixo do Grau 1\n");
    }

    else if (indice >= 16)
    {

        printf("Grau 16+\n");
    }

    else
    {
        printf("Grau %i\n", indice);
    }

    return 0;
}

int contar_letras(string texto)

{
    int contador;
    contador = 0;

    for (int i = 0; i < strlen(texto); i++)

    {

        if (isalpha(texto[i]))
        {
            contador++;
        }
    }

    return contador;
}

int contar_palavras(string texto)

{

    int contador;
    contador = 0;

    for (int i = 0; i < strlen(texto); i++)
    {

        if (isspace(texto[i]))
        {

            contador++;
        }
    }

    return contador + 1;
}

int contar_frases(string texto)

{
    int contador;
    contador = 0;

    for (int i = 0; i < strlen(texto); i++)
    {

        switch (texto[i])

        {

            case '.':
                contador++;
                break;

            case '!':
                contador++;
                break;

            case '?':
                contador++;
                break;

            default:
                break;
        }
    }

    return contador;
}
