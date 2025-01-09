// Exercice 2.2 : Accéder aux éléments d'un tableau avec un pointeur
#include <stdio.h>

int main() {
    int tableau[5] = {1, 2, 3, 4, 5}; // Déclarer un tableau de 5 entiers
    int *pointeur = tableau; // Déclarer un pointeur vers le tableau

    // Afficher chaque élément du tableau en utilisant le pointeur
    printf("Éléments du tableau :\n");
    for (int i = 0; i < 5; i++) {
        printf("Élément %d : %d\n", i + 1, *(pointeur + i));
    }

    return 0;
}