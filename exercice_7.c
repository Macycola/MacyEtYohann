// Exercice 1.8 : Inverser les éléments d'un tableau
#include <stdio.h>

int main() {
    int tableau[10], tableauInverse[10], i;

    // Saisie des nombres
    printf("Entrez 10 nombres :\n");
    for (i = 0; i < 10; i++) {
        printf("Nombre %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }

    // Inverser le tableau
    for (i = 0; i < 10; i++) {
        tableauInverse[i] = tableau[9 - i];
    }

    // Afficher le tableau original
    printf("\nTableau original :\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", tableau[i]);
    }

    // Afficher le tableau inversé
    printf("\n\nTableau inversé :\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", tableauInverse[i]);
    }
    printf("\n");

    return 0;
}

