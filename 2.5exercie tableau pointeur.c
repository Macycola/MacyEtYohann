#include <stdio.h>

int main() {
    int tableau1[5], tableau2[5];
    int *p1 = tableau1;
    int *p2 = tableau2;

    // Remplissage du premier tableau
    printf("Entrez 5 entiers pour le premier tableau :\n");
    for (int i = 0; i < 5; i++) {
        printf("Entier %d : ", i + 1);
        scanf("%d", p1 + i);
    }

    // Copie des �l�ments du premier tableau dans le deuxi�me
    for (int i = 0; i < 5; i++) {
        *(p2 + i) = *(p1 + i);
    }

    // Affichage des deux tableaux
    printf("Premier tableau :\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(p1 + i));
    }
    printf("\n");

    printf("Deuxi�me tableau (copie) :\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(p2 + i));
    }
    printf("\n");

    return 0;
}
