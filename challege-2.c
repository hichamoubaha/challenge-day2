#include <stdio.h>

int main() {
    int n;


    printf("Combien d'�l�ments souhaitez-vous entrer ? ");
    scanf("%d", &n);


    int tableau[n];


    printf("Veuillez entrer %d �l�ments :\n", n);
    for (int i = 0; i < n; i++) {
        printf("�l�ment %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }


    printf("Les �l�ments que vous avez saisis sont :\n");
    for (int i = 0; i < n; i++) {
        printf("�l�ment %d : %d\n", i + 1, tableau[i]);
    }

    return 0;
}
