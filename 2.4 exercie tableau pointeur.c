
#include <stdio.h>

void echanger(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int tableau[6];
    int *pointeur = tableau;

    // Remplissage du tableau
    printf("Entrez 6 entiers :\n");
    for (int i = 0; i < 6; i++) {
        printf("Entier %d : ", i + 1);
        scanf("%d", pointeur + i);
    }

    // Tri du tableau (tri à bulles)
    for (int i = 0; i < 6 - 1; i++) {
        for (int j = 0; j < 6 - i - 1; j++) {
            if (*(pointeur + j) > *(pointeur + j + 1)) {
                echanger(pointeur + j, pointeur + j + 1);
            }
        }
    }

    // Affichage du tableau trié
    printf("Tableau trié en ordre croissant :\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", *(pointeur + i));
    }
    printf("\n");

    return 0;
}
