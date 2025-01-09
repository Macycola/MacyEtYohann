// Exercice 1.4
#include <stdio.h>

int main() {
    int numbers[10], i, totalAboveAverage = 0;
    float sum = 0, average;

    // Demander à l'utilisateur d'entrer 10 nombres
    printf("Entrez 10 nombres :\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    // Calculer la moyenne
    average = sum / 10;
    printf("La moyenne est : %.2f\n", average);

    // Afficher les nombres supérieurs à la moyenne
    printf("Nombres supérieurs à la moyenne :\n");
    for (i = 0; i < 10; i++) {
        if (numbers[i] > average) {
            printf("%d\n", numbers[i]);
            totalAboveAverage += numbers[i];
        }
    }

    // Afficher leur total
    printf("Le total des nombres supérieurs à la moyenne est : %d\n", totalAboveAverage);

    return 0;
}

