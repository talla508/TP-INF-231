#include <stdio.h>

int main () 
{
    int n, m ;
    //
    printf("entrer le nombre de lignes : ");
    scanf("%d", &m);
    printf("entrer le nombre de colonnes : ");
    scanf("%d", &n);

    int A[m][n] , B[m][n];
    // saisir les termes de A

    for ( int i=0;i<m;i++)
    {
        for ( int j = 0; j < n; j++)
        {
            printf("entrer le terme A[%d][%d] :", i,j);
            scanf("%d",&A[i][j]);
        }
    }
    // saisir les termes de B
     for ( int i=0;i<m;i++)
    {
        for ( int j = 0; j < n; j++)
        {
            printf("entrer le terme B[%d][%d] :", i,j);
            scanf("%d",&B[i][j]);
        }
    }
    
    int somme[m][n];
    // calculons la somme 
    for (int i = 0 ; i < m ; i++)
    {
        for (int j = 0 ; j < n ; j++)
        {
            somme[i][j] = A[i][j] + B[i][j];
        }

    }
    
     // Affichage
    printf("\nMatrice somme (A + B) :\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < j ; j++) {
            printf("%d\t", somme[i][j]);
        }
        printf("\n");
    }


return 0 ;

}