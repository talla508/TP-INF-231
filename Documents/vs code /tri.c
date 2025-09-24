#include <stdio.h>

int main ()
{
    int n ;

    printf("entrer le nombre d'elements du tableau : ");
    scanf("%d",&n);

int T[n];
printf("entrer les elements du tableau ");
for (int i = 0; i < n ; i ++  )
{
    printf("T[%d]", i);
    scanf("%d",&T[i]);
}

int croissant = 1 , decroissant = 1 ;
for ( int i = 0 ; i < n ; i++ )
{
    if (T[i] > T[i + 1]) croissant = 0 ;
    if (T[i] < T[ i+ 1]) decroissant = 0;

}
if (croissant )
printf("\n le tableau est trie par ordre croissant \n");
else if (decroissant)
printf("\n le tableau est trie par ordre decroissant\n ");
else 
printf("\n le tableau n'est pas trie \n");

return ;
}