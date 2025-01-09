// Exercice 2.1 : Utiliser un pointeur pour modifier une valeur
#include <stdio.h>

int main() {
    int nombre = 10; // Déclarer un entier
    int *pointeur = &nombre; // Déclarer un pointeur vers cet entier

    // Afficher la valeur initiale
    printf("Valeur initiale de l'entier : %d\n", nombre);

    // Utiliser le pointeur pour modifier la valeur
    *pointeur = 20;

    // Afficher la valeur après modification
    printf("Valeur modifiée de l'entier : %d\n", nombre);

    return 0;
}