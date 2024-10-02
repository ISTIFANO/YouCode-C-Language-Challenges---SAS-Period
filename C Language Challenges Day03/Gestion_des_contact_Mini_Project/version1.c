#include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 100

typedef struct {
    char nom[50];
    char telephone[15];
    char email[50];
} Contact;

Contact contacts[MAX_CONTACTS];
int nombre_contacts = 0;

// Fonction pour ajouter un contact
void ajouter_contact() {
    if (nombre_contacts < MAX_CONTACTS) {
        printf("Nom: ");
        scanf("%s", contacts[nombre_contacts].nom);
        printf("Téléphone: ");
        scanf("%s", contacts[nombre_contacts].telephone);
        printf("Email: ");
        scanf("%s", contacts[nombre_contacts].email);
        nombre_contacts++;
    } else {
        printf("Le carnet de contacts est plein.\n");
    }
}

// Fonction pour modifier un contact
void modifier_contact() {
    char nom[50];
    printf("Entrez le nom du contact à modifier: ");
    scanf("%s", nom);
    for (int i = 0; i < nombre_contacts; i++) {
        if (strcmp(contacts[i].nom, nom) == 0) {
            printf("Nouveau Téléphone: ");
            scanf("%s", contacts[i].telephone);
            printf("Nouvel Email: ");
            scanf("%s", contacts[i].email);
            return;
        }
    }
    printf("Contact non trouvé.\n");
}

// Fonction pour supprimer un contact
void supprimer_contact() {
    char nom[50];
    printf("Entrez le nom du contact à supprimer: ");
    scanf("%s", nom);              
    for (int i = 0; i < nombre_contacts; i++) {
        if (strcmp(contacts[i].nom, nom) == 0) {
            for (int j = i; j < nombre_contacts - 1; j++) {
                contacts[j] = contacts[j + 1];
            }
            nombre_contacts--;
            return;
        }
    }
    printf("Contact non trouvé.\n");
}

// Fonction pour afficher tous les contacts
void afficher_contacts() {
    for (int i = 0; i < nombre_contacts; i++) {
        printf("Nom: %s, Téléphone: %s, Email: %s\n", 
               contacts[i].nom, 
               contacts[i].telephone, 
               contacts[i].email);
    }
}

// Fonction pour rechercher un contact
void rechercher_contact() {
    char nom[50];
    printf("Entrez le nom du contact à rechercher: ");
    scanf("%s", nom);
    for (int i = 0; i < nombre_contacts; i++) {
        if (strcmp(contacts[i].nom, nom) == 0) {
            printf("Nom: %s, Téléphone: %s, Email: %s\n", 
                   contacts[i].nom, 
                   contacts[i].telephone, 
                   contacts[i].email);
            return;
        } 
    }
    printf("Contact non trouvé.\n");
}

// Fonction principale
int main() {
    int choix;
    do {
        printf("\n--- Système de Gestion de Contacts ---\n");
        printf("1. Ajouter un contact\n");
        printf("2. Modifier un contact\n");
        printf("3. Supprimer un contact\n");
        printf("4. Afficher tous les contacts\n");
        printf("5. Rechercher un contact\n");
        printf("0. Quitter\n");
        printf("Choisissez une option: ");
        scanf("%d", &choix);
        switch (choix) {
            case 1: ajouter_contact(); break;
            case 2: modifier_contact(); break;
            case 3: supprimer_contact(); break;
            case 4: afficher_contacts(); break;
            case 5: rechercher_contact(); break;
            case 0: printf("Au revoir!\n"); break;
            default: printf("Choix invalide. Veuillez réessayer.\n");
        }
    } while (choix != 0);
    return 0;
}
