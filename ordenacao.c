#include <stdio.h>
#include "ordenacao.h"

void mostra_balde(int b, int balde[], int tam) {
    if (tam == 0) {
        return;
    }
    printf("%d a %d:", b * 10, b * 10 + 9);
    for (int i = 0; i < tam; i++) {
        printf(" %d", balde[i]);
    }
    printf("\n");
}

// Ordena as idades (de 0 a 99) em ordem crescente usando bucket sort com 10 baldes.
// Depois de ordenar cada balde, chame mostra_balde para ele, do balde 0 ao balde 9.
void bucket_sort(int v[], int n) {
    // Implemente aqui
}
