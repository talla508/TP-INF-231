#include <stdio.h>

int main() {
    int a, b;
    printf("Entrez a (>0) : ");
    scanf("%d", &a);
    printf("Entrez b (>0) : ");
    scanf("%d", &b);

    int produit = 0;

    // Additionner 'a', 'b' fois
    for (int i = 0; i < b; i++) {
        produit += a;
    }

    printf("\nLe produit de %d et %d est : %d\n", a, b, produit);

    return 0;
}
