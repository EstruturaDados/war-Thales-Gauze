#include <stdio.h>
#include <string.h>

#define MAX_TERRITORIOS 5
#define TAM_STRING 50

// Struct Territorio
typedef struct {
    char nome[TAM_STRING];
    char cor[TAM_STRING];
    int tropas;
} Territorio;

int main() {
    Territorio mapa[MAX_TERRITORIOS];

    printf("=== Cadastro de Territórios ===\n\n");

    for (int i = 0; i < MAX_TERRITORIOS; i++) {
        printf("Território %d:\n", i + 1);

        // Ler nome do território
        printf("Nome: ");
        fgets(mapa[i].nome, TAM_STRING, stdin);
        mapa[i].nome[strcspn(mapa[i].nome, "\n")] = '\0'; // remove \n

        // Ler cor do exército
        printf("Cor do exército: ");
        fgets(mapa[i].cor, TAM_STRING, stdin);
        mapa[i].cor[strcspn(mapa[i].cor, "\n")] = '\0';

        // Ler número de tropas
        printf("Número de tropas: ");
        scanf("%d", &mapa[i].tropas);

        getchar(); // consome o \n deixado pelo scanf

        printf("\n");
    }

    // Exibição
    printf("\n=== Estado Atual do Mapa ===\n");
    for (int i = 0; i < MAX_TERRITORIOS; i++) {
        printf("\nTerritório %d\n", i + 1);
        printf("Nome: %s\n", mapa[i].nome);
        printf("Cor do Exército: %s\n", mapa[i].cor);
        printf("Tropas: %d\n", mapa[i].tropas);
    }

    return 0;
}
