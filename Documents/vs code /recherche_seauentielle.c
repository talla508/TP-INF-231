#include <stdio.h>

int main () 
{
    int n , x , trouve = 0 ;
    printf("entrer le nombre d'element du tableau : ");
    scanf("%d", &n);
    int T[n];
    printf("entrer les elements du tableau : ");
    for (int i = 0 ; i < n ; i++ )
        {
            printf("T[%d]", i);
            scanf("%d", &T[i]);

        }
    printf("\n element a rechercher \n : ");
    scanf("%d", &x);
    for (int i = 0 ; i < n ; i++)
        {
            if (T[i] == x ) 
            {
                printf ("\n element %d trouve a la position %d d'indice &d", x , i + 1, i);
                trouve = 1 ;
                break ;
            }
             if (!trouve) {
        printf("\nElement %d non trouve dans le tableau.\n", x);
    }

    return 0 ;

        }


}