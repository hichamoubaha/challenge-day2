#include <stdio.h>

int main() {
    int n;
    int somme = 0;


    printf("Combien d'éléments souhaitez-vous entrer ? ");
    scanf("%d", &n);


    int tableau[n];


    printf("Veuillez entrer %d éléments :\n", n);
    for (int i = 0; i < n; i++) {
        printf("Élément %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }


    for (int i = 0; i < n; i++) {
        somme += tableau[i];
    }


    printf("La somme des éléments est : %d\n", somme);

    return 0;
}
