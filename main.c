#include <stdio.h>
#include "ordenacao.h"

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
