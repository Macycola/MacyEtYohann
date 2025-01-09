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

// Exercice 1.6

#include <stdio.h>
int main() {
    int tableau[10]; // Tableau pour stocker 10 nombres
    int i, nombreRecherche, trouve = 0;

    // Demander à l'utilisateur d'entrer 10 nombres
    printf("Entrez 10 nombres :\n");
    for (i = 0; i < 10; i++) {
       printf("Nombre %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }
     //Demander un nombre à rechercher
     printf("Entrez le nombre que vous voulez chercher");
     scanf("%d", &nombreRecherche);

     //Rechercher le nombre dans le tableau
     for(i=0; i<10; i++){
            if(tableau[i] == nombreRecherche ){
                printf("Le nombre %d a été trouvé à l'indice %d.\n", nombreRecherche, i);
                trouve=1;
                 }
                 }
                 }

// Exercice 1.7
#include <stdio.h>
int main() {
    int tableau[10];

    // Demander à l'utilisateur d'entrer 10 nombres
    printf("Entrez 10 nombres");
    for(i=0; i<10; i++){
        printf("Nombre :", i+1);
        scanf(tableau[i]);
        }
        }

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



        
