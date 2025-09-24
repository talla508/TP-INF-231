#include <stdio.h>
#include <stdlib.h>

// Fonction pour échanger deux éléments
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition pour Quickselect
int partition(int arr[], int l, int r) {
    int pivot = arr[r];
    int i = l;
    for (int j = l; j < r; j++) {
        if (arr[j] <= pivot) {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }
    swap(&arr[i], &arr[r]);
    return i;
}

// Quickselect : trouve le k-ième plus petit élément
int quickselect(int arr[], int l, int r, int k) {
    if (l == r) return arr[l];

    int pi = partition(arr, l, r);

    if (k == pi) return arr[pi];
    else if (k < pi) return quickselect(arr, l, pi - 1, k);
    else return quickselect(arr, pi + 1, r, k);
}

// Fonction pour calculer la médiane
double mediane(int arr[], int n) {
    if (n % 2 != 0) {
        return quickselect(arr, 0, n - 1, n / 2);
    } else {
        int a = quickselect(arr, 0, n - 1, n / 2 - 1);
        int b = quickselect(arr, 0, n - 1, n / 2);
        
        return (a + b) / 2.0;
    }
}

int main() {
    int n;
    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

    int T[n];
    printf("Saisissez les %d elements du tableau :\n", n);
    for (int i = 0; i < n; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }

    double med = mediane(T, n);
    printf("\nLa mediane du tableau est : %.2f\n", med);

    return 0;
}
