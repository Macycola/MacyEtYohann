// Exercice 1.3
#include <stdio.h>

int main() {
    int numbers[10], i, search, count = 0;

    // Demander à l'utilisateur d'entrer 10 nombres
    printf("Entrez 10 nombres :\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }

    // Demander un nombre à rechercher
    printf("Entrez un nombre à rechercher : ");
    scanf("%d", &search);

    // Compter le nombre d'apparitions
    for (i = 0; i < 10; i++) {
        if (numbers[i] == search) {
            count++;
        }
    }

    // Afficher le résultat
    printf("Le nombre %d apparaît %d fois dans le tableau.\n", search, count);

    return 0;
}

