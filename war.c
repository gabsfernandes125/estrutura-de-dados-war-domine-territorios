#include <stdio.h>
#include <string.h>

// Struct para guardar as informações do território
struct Territorio{
    char nome[30];
    char cor[10];
    int tropas;
};

int main(){

    // Vetor com 5 territórios
    struct Territorio territorios[5];

    int i;

    printf("=== Sistema de Territorios - WAR ===\n\n");

    // Cadastro dos territórios
    for(i = 0; i < 5; i++){

        printf("Territorio %d\n", i + 1);

        printf("Nome do territorio: ");
        scanf(" %[^\n]", territorios[i].nome);

        printf("Cor do exercito: ");
        scanf("%s", territorios[i].cor);

        printf("Quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);

        printf("\n");
    }

    // Mostrar os dados cadastrados
    printf("\n=== Territorios cadastrados ===\n\n");

    for(i = 0; i < 5; i++){

        printf("Territorio %d\n", i + 1);

        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor: %s\n", territorios[i].cor);
        printf("Tropas: %d\n", territorios[i].tropas);

        printf("-------------------\n");
    }

    return 0;
}
