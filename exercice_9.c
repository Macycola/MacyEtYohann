// Exercice 1.10 : Histogramme des fréquences
#include <stdio.h>

int main() {
    int tableau[10], i, j, max = 0;

    // Saisie des nombres
    printf("Entrez 10 nombres :\n");
    for (i = 0; i < 10; i++) {
        printf("Nombre %d : ", i + 1);
        scanf("%d", &tableau[i]);
        if (tableau[i] > max) {
            max = tableau[i];
        }
    }

    // Calculer les fréquences
    int frequences[max + 1];
    for (i = 0; i <= max; i++) {
        frequences[i] = 0;
    }
    for (i = 0; i < 10; i++) {
        frequences[tableau[i]]++;
    }

    // Afficher l'histogramme
    printf("\nHistogramme des fréquences :\n");
    for (i = 0; i <= max; i++) {
        if (frequences[i] > 0) {
            printf("%d : ", i);
            for (j = 0; j < frequences[i]; j++) {
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}



        
