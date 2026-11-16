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

int main() {
    int n;
    int v[MAX_IDADES];

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    bucket_sort(v, n);

    printf("Ordenado:");
    for (int i = 0; i < n; i++) {
        printf(" %d", v[i]);
    }
    printf("\n");

    return 0;
}
