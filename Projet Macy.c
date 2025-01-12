#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_PERSONNES 100
#define TAILLE_CHAMP 50

// Structure pour stocker les informations d'une personne
typedef struct {
    char nom[TAILLE_CHAMP];
    char prenom[TAILLE_CHAMP];
    char numeroTelephone[11]; // 10 chiffres + \0
    char email[TAILLE_CHAMP];
} Personne;

// Variables globales
Personne repertoire[MAX_PERSONNES];
int nombrePersonnes = 0;

// Prototypes des fonctions
void Creer_Enregistrement();
void Affiche_Repertoire();
void Recherche();
void Retirer();

int main() {
    int Action;

    while (1) {
        printf("Que voulez-vous faire :\n");
        printf("* Ajouter une personne         (1)\n");
        printf("* Afficher le répertoire       (2)\n");
        printf("* Faire une recherche par numéro (3)\n");
        printf("* Retirer une personne par nom (4)\n");
        printf("* Terminer                     (5)\n");

        scanf("%d", &Action);
        getchar(); // Consomme le \n restant dans le buffer

        if (Action == 1) Creer_Enregistrement();
        if (Action == 2) Affiche_Repertoire();
        if (Action == 3) Recherche();
        if (Action == 4) Retirer();
        if (Action == 5) break;

        printf("\n\n");
    }

    printf("Programme terminé...\n");
    return 0;
}

void Creer_Enregistrement() {
    if (nombrePersonnes >= MAX_PERSONNES) {
        printf("Le répertoire est plein. Impossible d'ajouter une nouvelle personne.\n");
        return;
    }

    printf("Ajout d'une nouvelle personne :\n");
    printf("Nom : ");
    fgets(repertoire[nombrePersonnes].nom, TAILLE_CHAMP, stdin);
    repertoire[nombrePersonnes].nom[strcspn(repertoire[nombrePersonnes].nom, "\n")] = 0;

    printf("Prénom : ");
    fgets(repertoire[nombrePersonnes].prenom, TAILLE_CHAMP, stdin);
    repertoire[nombrePersonnes].prenom[strcspn(repertoire[nombrePersonnes].prenom, "\n")] = 0;

    printf("Numéro de téléphone (10 chiffres) : ");
    fgets(repertoire[nombrePersonnes].numeroTelephone, 11, stdin);
    repertoire[nombrePersonnes].numeroTelephone[strcspn(repertoire[nombrePersonnes].numeroTelephone, "\n")] = 0;

    printf("Adresse email : ");
    fgets(repertoire[nombrePersonnes].email, TAILLE_CHAMP, stdin);
    repertoire[nombrePersonnes].email[strcspn(repertoire[nombrePersonnes].email, "\n")] = 0;

    nombrePersonnes++;
    printf("Personne ajoutée avec succès !\n");
}

void Affiche_Repertoire() {
    if (nombrePersonnes == 0) {
        printf("Le répertoire est vide.\n");
        return;
    }

    printf("Contenu du répertoire :\n");
    for (int i = 0; i < nombrePersonnes; i++) {
        printf("%d. %s %s - Téléphone : %s - Email : %s\n", i + 1, repertoire[i].nom, repertoire[i].prenom, repertoire[i].numeroTelephone, repertoire[i].email);
    }
}

void Recherche() {
    char numero[11];
    printf("Entrez le numéro de téléphone à rechercher : ");
    fgets(numero, 11, stdin);
    numero[strcspn(numero, "\n")] = 0;

    for (int i = 0; i < nombrePersonnes; i++) {
        if (strcmp(repertoire[i].numeroTelephone, numero) == 0) {
            printf("Personne trouvée : %s %s - Téléphone : %s - Email : %s\n", repertoire[i].nom, repertoire[i].prenom, repertoire[i].numeroTelephone, repertoire[i].email);
            return;
        }
    }
    printf("Aucune personne trouvée avec ce numéro.\n");
}

void Retirer() {
    char nom[TAILLE_CHAMP];
    printf("Entrez le nom de la personne à retirer : ");
    fgets(nom, TAILLE_CHAMP, stdin);
    nom[strcspn(nom, "\n")] = 0;

    for (int i = 0; i < nombrePersonnes; i++) {
        if (strcmp(repertoire[i].nom, nom) == 0) {
            for (int j = i; j < nombrePersonnes - 1; j++) {
                repertoire[j] = repertoire[j + 1];
            }
            nombrePersonnes--;
            printf("Personne retirée avec succès !\n");
            return;
        }
    }
    printf("Aucune personne trouvée avec ce nom.\n");
}
