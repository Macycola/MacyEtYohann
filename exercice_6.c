// Exercice 1.7
#include <stdio.h>

int main() {
    int tableau[10], i, dernier;

    // Demander à l'utilisateur de saisir 10 nombres
    printf("Entrez 10 nombres :\n");
    for (i = 0; i < 10; i++) {
        printf("Nombre %d : ", i + 1);
        scanf("%d", &tableau[i]);
          }

    //Affiche le tableau avant rotation

    printf("\nTableau avant rotation :\n");
    for (i = 0; i<10; i++){
printf("%d ", tableau[i]);    }
    printf("\n");

      // Effectuer une rotation circulaire vers la droite
    dernier = tableau[9]; // Sauvegarder le dernier élément
    for (i = 9; i > 0; i--) {
        tableau[i] = tableau[i - 1];
    }
    tableau[0] = dernier; // Placer le dernier élément en première position

    // Afficher le tableau après la rotation
    printf("\nTableau après rotation :\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");}

