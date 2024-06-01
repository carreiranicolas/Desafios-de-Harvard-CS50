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
#include <string.h>

/**
 * Protótipo das funções
 */
bool validar(string senha);

/**
 * MAIN
 */
int main(void)
{
    // Solicita uma senha ao usuário e valida a senha:
    string senha = get_string("Digite sua senha: ");
    if (validar(senha))
    {
        printf("%s\n", "Sua senha é válida!");
    }
    else
    {
        printf("%s", "A senha precisa de 1 letra maiúscula, ");
        printf("%s\n", "1 letra minúscula, 1 número e 1 símbolo!");
    }

    // Termina o programa
    return 0;
}

/**
 * VALIDAR
 * Função que recebe uma string contendo a senha do usuário e retorna TRUE ou
 * FALSE dependendo se a senha contém pelo menos 1 caractere de cada categoria
 * necessária: letra maiúscula, letra minúscula, número e símbolo.
 *
 * Parâmetros:
 *    (string) senha: string que representa a senha informada pelo usuário.
 *
 * Retorno:
 *    (bool): TRUE ou FALSE indicando se a senha é válida ou não.
 */
bool validar(string senha)

{

    bool maiuscula = false;

    bool minuscula = false;

    bool numero = false;

    bool simbolo = false;

    for (int i = 0; i < strlen(senha); i++)

    {

        if (islower(senha[i]))

        {

            minuscula = true;
        }

        else if (isupper(senha[i]))

        {

            maiuscula = true;
        }

        else if (isalnum(senha[i]))

        {

            numero = true;
        }

        else if (ispunct(senha[i]))

        {

            simbolo = true;
        }



    }

    return maiuscula && minuscula && numero && simbolo;
}
