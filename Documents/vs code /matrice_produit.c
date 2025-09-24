#include <stdio.h>

int main() {
    int m, n, p;

    printf("Entrez le nombre de lignes de A : ");
    scanf("%d", &m);
    printf("Entrez le nombre de colonnes de A : ");
    scanf("%d", &n);
    printf("Entrez le nombre de lignes de B : ");
    int LB; // LB = nombre de ligne de B
    scanf("%d", &LB);

    // Vérification compatibilité
    if (n != LB) {
        printf("\nMultiplication impossible :\n");
        printf("Le nombre de colonnes de A (%d) doit etre egal au nombre de lignes de B (%d).\n", n, LB);
        return 0;
    }

    printf("Entrez le nombre de colonnes de B : ");
    scanf("%d", &p);

    int A[m][n], B[LB][p], Produit[m][p];

    // Saisie de A 
    printf("\nSaisissez les elements de la matrice A :\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Saisie de B
    printf("\nSaisissez les elements de la matrice B :\n");
    for (int i = 0; i < LB; i++) {
        for (int j = 0; j < p; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // Produit
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            Produit[i][j] = 0;
            for (int k = 0; k < n; k++) {
                Produit[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Affichage
    printf("\nMatrice Produit (A x B) :\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d\t", Produit[i][j]);
        }
        printf("\n");
    }

    return 0;
}
