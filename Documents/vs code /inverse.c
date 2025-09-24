#include <stdio.h>

int main() {
    int n;
    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

    int T[n];

    // Saisie des éléments 
    printf("Saisissez les %d elements du tableau :\n", n);
    for (int i = 0; i < n; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }

    // Inversion
    for (int i = 0; i < n / 2; i++) {
        int temp = T[i];
        T[i] = T[n - 1 - i];
        T[n - 1 - i] = temp;
    }

    // Affichage 
    printf("\nTableau inverse :\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", T[i]);
    }
    printf("\n");

    return 0;
}
