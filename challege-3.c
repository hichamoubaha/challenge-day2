#include <stdio.h>

int main() {
    int n;
    int somme = 0;


    printf("Combien d'�l�ments souhaitez-vous entrer ? ");
    scanf("%d", &n);


    int tableau[n];


    printf("Veuillez entrer %d �l�ments :\n", n);
    for (int i = 0; i < n; i++) {
        printf("�l�ment %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }


    for (int i = 0; i < n; i++) {
        somme += tableau[i];
    }


    printf("La somme des �l�ments est : %d\n", somme);

    return 0;
}
