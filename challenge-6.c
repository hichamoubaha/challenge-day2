#include <stdio.h>

int main() {
    int n;
    int facteur;


    printf("Entrez le nombre d'éléments du tableau : ");
    scanf("%d", &n);


    int tableau[n];

    printf("Entrez les %d éléments du tableau :\n", n);
    for (int i = 0; i < n; i++) {
        printf("Élément %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }


    printf("Entrez le facteur de multiplication : ");
    scanf("%d", &facteur);

    printf("Tableau après multiplication par %d :\n", facteur);
    for (int i = 0; i < n; i++) {
        tableau[i] *= facteur;
        printf("%d ", tableau[i]);
    }
    printf("\n");

    return 0;
}
