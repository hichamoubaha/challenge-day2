#include <stdio.h>

int main() {
    int n;


    printf("Entrez le nombre d'�l�ments du tableau : ");
    scanf("%d", &n);


    int tableau[n];


    printf("Entrez %d �l�ments du tableau :\n", n);
    for (int i = 0; i < n; i++) {
        printf("�l�ment %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }


    int min = tableau[0];
    for (int i = 1; i < n; i++) {
        if (tableau[i] < min) {
            min = tableau[i];
        }
    }


    printf("Le plus grand �l�ment du tableau est : %d\n", min);

    return 0;
}
