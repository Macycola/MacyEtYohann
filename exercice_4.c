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

