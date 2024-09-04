#include <stdio.h>

int main() {
    int n;


    printf("Entrez le nombre d'éléments du tableau : ");
    scanf("%d", &n);


    int tableau[n];


    printf("Entrez %d éléments du tableau :\n", n);
    for (int i = 0; i < n; i++) {
        printf("Élément %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }


    int max = tableau[0];
    for (int i = 1; i < n; i++) {
        if (tableau[i] > max) {
            max = tableau[i];
        }
    }


    printf("Le plus grand élément du tableau est : %d\n", max);

    return 0;
}
