#include <stdio.h>

int main() {

    int i;

    do {
        printf("\n Digite um número do sabor \n");

        printf("\t (1) - Flocos \n");
        printf("\t (2) - Morango \n");
        printf("\t (3) - Leite condensado \n");

        scanf("%d", &i); // Correção: passe o endereço de i usando o operador &
    } while ((i < 1) || (i > 3));

    switch (i) {

        case 1:
            printf("\t\t Você escolheu Flocos");
            break;

        case 2:
            printf("\t\t Você escolheu Morango");
            break;

        case 3:
            printf("\t\t Você escolheu Leite condensado");
            break;

        default:
            printf("Escolha uma opção entre 1 a 3"); // Correção: "Escolha" estava digitado incorretamente
    }

    return 0; // Adicionei o retorno 0 para indicar o término bem-sucedido do programa
}