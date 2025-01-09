// Exercice 1.9 : Identifier les nombres répétés
#include <stdio.h>

int main() {
    int tableau[10], i, j;
    int dejaAffiche[10] = {0}; // Pour éviter d'afficher plusieurs fois le même nombre

    // Saisie des nombres
    printf("Entrez 10 nombres :\n");
    for (i = 0; i < 10; i++) {
        printf("Nombre %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }

    // Identifier les nombres répétés
    printf("\nNombres répétés :\n");
    for (i = 0; i < 10; i++) {
        if (!dejaAffiche[i]) {
            int compteur = 0;
            for (j = 0; j < 10; j++) {
                if (tableau[i] == tableau[j]) {
                    compteur++;
                }
            }
            if (compteur > 1) {
                printf("%d\n", tableau[i]);
                for (j = i; j < 10; j++) {
                    if (tableau[j] == tableau[i]) {
                        dejaAffiche[j] = 1;
                    }
                }
            }
        }
    }

    return 0;
}

