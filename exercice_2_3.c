// Exercice 2.3 : Additionner deux tableaux en utilisant des pointeurs
#include <stdio.h>

int main() {
    int tableau1[5] = {1, 2, 3, 4, 5}; // Premier tableau
    int tableau2[5] = {6, 7, 8, 9, 10}; // Deuxième tableau
    int resultat[5]; // Tableau pour stocker les résultats

    int *pointeur1 = tableau1; // Pointeur vers le premier tableau
    int *pointeur2 = tableau2; // Pointeur vers le deuxième tableau
    int *pointeurResultat = resultat; // Pointeur vers le tableau de résultats

    // Additionner les éléments correspondants des deux tableaux
    for (int i = 0; i < 5; i++) {
        *(pointeurResultat + i) = *(pointeur1 + i) + *(pointeur2 + i);
    }

    // Afficher les tableaux d'origine
    printf("Tableau 1 :\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(pointeur1 + i));
    }
    printf("\n\nTableau 2 :\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(pointeur2 + i));
    }

    // Afficher le tableau résultant
    printf("\n\nTableau résultant (addition) :\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(pointeurResultat + i));
    }
    printf("\n");

    return 0;
}