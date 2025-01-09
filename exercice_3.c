// Exercice 1.5
#include <stdio.h>

int main() {
    int numbers[10], i;

    // Demander à l'utilisateur d'entrer 10 nombres
    printf("Entrez 10 nombres :\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }

    // Afficher les nombres pairs
    printf("Nombres pairs :\n");
    for (i = 0; i < 10; i++) {
        if (numbers[i] % 2 == 0) {
            printf("%d\n", numbers[i]);
        }
    }

    // Afficher les nombres impairs
    printf("Nombres impairs :\n");
    for (i = 0; i < 10; i++) {
        if (numbers[i] % 2 != 0) {
            printf("%d\n", numbers[i]);
        }
    }

    return 0;
}

