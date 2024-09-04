#include <stdio.h>

int main() {
    int n;


    printf("Combien d'éléments souhaitez-vous entrer ? ");
    scanf("%d", &n);


    int tableau[n];


    printf("Veuillez entrer %d éléments :\n", n);
    for (int i = 0; i < n; i++) {
        printf("Élément %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }


    printf("Les éléments que vous avez saisis sont :\n");
    for (int i = 0; i < n; i++) {
        printf("Élément %d : %d\n", i + 1, tableau[i]);
    }

    return 0;
}
