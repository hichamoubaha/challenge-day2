#include <stdio.h>

int main() {
    int n;


    printf("Entrez le nombre d'elements du tableau : ");
    scanf("%d", &n);

    int tableau_original[n], tableau_copie[n];


    printf("Entrez les elements du tableau original :\n");
    for(int i = 0; i < n; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &tableau_original[i]);
    }


    for(int i = 0; i < n; i++) {
        tableau_copie[i] = tableau_original[i];
    }


    printf("\nTableau original :\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", tableau_original[i]);
    }


    printf("\nTableau copie :\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", tableau_copie[i]);
    }

    return 0;
}
