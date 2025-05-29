#include <stdio.h>
#include <string.h>
#define MAX 3
#define TAMANHO 30

struct Aniversariante {
    char primeiro_nome[TAMANHO];
    char ultimo_nome[TAMANHO];
    int aniversario;

};

struct aniversario {
    int dia;
    char mes[TAMANHO];
};

int main(){
    struct Aniversariante pessoa[TAMANHO];
    struct aniversario data[TAMANHO];
    for (int i = 0; i < MAX; i++){
        printf("\nentre com o primeiro nome: ");
        scanf("%s", &pessoa[i].primeiro_nome);
        printf("entre com o ultimo nome: ");
        scanf("%s", &pessoa[i].ultimo_nome);
        printf("entre com o dia: ");
        scanf("%d", &data[i].dia);
        printf("entre com o mes: ");
        scanf("%s", &data[i].mes);
    }

    printf("\nANIVERSARIANTES\n");

    for (int i = 0; i < MAX; i++){
        printf("Aniversariante %d\n", i+1);
        printf("Nome: %s %s\n", pessoa[i].primeiro_nome, pessoa[i].ultimo_nome);
        printf("Data do aniversario: %02d de %s\n", data[i].dia, data[i].mes);
    }
    return 0;
}