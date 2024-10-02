#include <stdio.h>
#include <string.h>
#include <regex.h>

#define MAX_CONTACTS 120

typedef struct {
    char nom[50];
    char telephone[15];
    char email[50];
} Contact;

Contact contacts[MAX_CONTACTS];
int nombre_contacts = 5;

void initialize_contacts() {
    strcpy(contacts[0].nom, "amir");
    strcpy(contacts[0].telephone, "0612345678");
    strcpy(contacts[0].email, "amir@example.com");

    strcpy(contacts[1].nom, "aamir");
    strcpy(contacts[1].telephone, "0712345678");
    strcpy(contacts[1].email, "aamir@example.com");

    strcpy(contacts[2].nom, "elamiri");
    strcpy(contacts[2].telephone, "0612345679");
    strcpy(contacts[2].email, "elamiri@example.com");

    strcpy(contacts[3].nom, "elamirii");
    strcpy(contacts[3].telephone, "0712345670");
    strcpy(contacts[3].email, "elamirii@example.com");

    strcpy(contacts[4].nom, "vivid");
    strcpy(contacts[4].telephone, "0612345680");
    strcpy(contacts[4].email, "vivid@example.com");
}

int validate_email(char email[]) {
    regex_t regex;
    int reti;
    reti = regcomp(&regex, "^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}$", REG_EXTENDED);
    if (reti) return 0;
    reti = regexec(&regex, email, 0, NULL, 0);
    regfree(&regex);
    return reti == 0;
}

int validate_phone(char phone[]) {
    return strncmp(phone, "06", 2) == 0 || strncmp(phone, "07", 2) == 0;
}

void saisir_contact(Contact contact) {
    printf("Nom: ");
    scanf("%s", contact.nom);
    while (1) {
        printf("Telephone (doit commencer par 06 ou 07): ");
        scanf("%s", contact.telephone);
        if (validate_phone(contact.telephone)) {
            break;
        } else {
            printf("Erreur: le numero doit commencer par 06 ou 07.\n");
        }
    }
    while (1) {
        printf("Email: ");
        scanf("%s", contact.email);
        if (validate_email(contact.email)) {
            break;
        } else {
            printf("Erreur: format d'email invalide.\n");
        }
    }
}

void ajouter_contact_simple() {
    if (nombre_contacts < MAX_CONTACTS) {
        saisir_contact(contacts[nombre_contacts]);
        nombre_contacts++;
    } else {
        printf("Le carnet de contacts est plein.\n");
    }
}

void AjouterMUL() {
    int count;
    printf("Combien de contacts voulez-vous ajouter ? ");
    scanf("%d", &count);
    if (count <= 0 || count + nombre_contacts > MAX_CONTACTS) {
        printf("Erreur: nombre de contacts invalide ou depassement de capacite.\n");
        return;
    }
    for (int i = 0; i < count; i++) {
        if (nombre_contacts < MAX_CONTACTS) {
            printf("Ajout du contact %d:\n", i + 1);
            saisir_contact(contacts[nombre_contacts]);
            nombre_contacts++;
        }
    }
}

void afficher_contacts() {
    for (int i = 0; i < nombre_contacts; i++) {
        printf("Nom: %s, Telephone: %s, Email: %s\n", 
               contacts[i].nom, 
               contacts[i].telephone, 
               contacts[i].email);
    }
}

void MarocNumber() {
    int count_06 = 0, count_07 = 0;
    for (int i = 0; i < nombre_contacts; i++) {
        if (strncmp(contacts[i].telephone, "06", 2) == 0) {
            count_06++;
        } else if (strncmp(contacts[i].telephone, "07", 2) == 0) {
            count_07++;
        }
    }
    printf("Nombre de contacts avec telephone commençant par 06: %d\n", count_06);
    printf("Nombre de contacts avec telephone commençant par 07: %d\n", count_07);
}

void modifier_contact() {
    char nom[50];
    printf("Entrez le nom du contact à modifier: ");
    scanf("%s", nom);
    for (int i = 0; i < nombre_contacts; i++) {
        if (strcmp(contacts[i].nom, nom) == 0) {
            saisir_contact(contacts[i]);
            return;
        }
    }
    printf("Contact non trouve.\n");
}

void supprimer_contact() {
    char nom[50];
    printf("Entrez le nom du contact à supprimer: ");
    scanf("%s", nom);
    for (int i = 0; i < nombre_contacts; i++) {
        if (strcmp(contacts[i].nom, nom) == 0) {
            char confirmation;
            printf("Êtes-vous sûr de vouloir supprimer le contact %s ? (o/n): ", nom);
            scanf(" %c", &confirmation);
            if (confirmation == 'o' || confirmation == 'O') {
                for (int j = i; j < nombre_contacts - 1; j++) {
                    contacts[j] = contacts[j + 1];
                }
                nombre_contacts--;
                printf("Contact supprime.\n");
            } else {
                printf("Suppression annulee.\n");
            }
            return;
        }
    }
    printf("Contact non trouve.\n");
}

void rechercher_contact_par_nom() {
    char nom[50];
    printf("Entrez le nom du contact à rechercher: ");
    scanf("%s", nom);
    for (int i = 0; i < nombre_contacts; i++) {
        if (strcmp(contacts[i].nom, nom) == 0) {
            printf("Nom: %s, Telephone: %s, Email: %s\n", 
                   contacts[i].nom, 
                   contacts[i].telephone, 
                   contacts[i].email);
            return;
        }
    }
    printf("Contact non trouve.\n");
}

void rechercher_contact_par_id() {
    int id;
    printf("Entrez l'ID (index) du contact à rechercher (0 à %d): ", nombre_contacts - 1);
    scanf("%d", &id);
    if (id >= 0 && id < nombre_contacts) {
        printf("Nom: %s, Telephone: %s, Email: %s\n", 
               contacts[id].nom, 
               contacts[id].telephone, 
               contacts[id].email);
    } else {
        printf("ID non valide.\n");
    }
}

void menu_ajouter() {
    int choix;
    printf("\n--- Menu d'ajout ---\n");
    printf("1. Ajouter un contact (simple)\n");
    printf("2. Ajouter plusieurs contacts\n");
    printf("Choisissez une option: ");
    scanf("%d", &choix);
    switch (choix) {
        case 1: ajouter_contact_simple(); break;
        case 2: AjouterMUL(); break;
        default: printf("Choix invalide.\n");
    }
}

void menu_recherche() {
    int choix;
    printf("\n--- Menu de recherche ---\n");
    printf("1. Rechercher par nom\n");
    printf("2. Rechercher par ID\n");
    printf("Choisissez une option: ");
    scanf("%d", &choix);
    switch (choix) {
        case 1: rechercher_contact_par_nom(); break;
        case 2: rechercher_contact_par_id(); break;
        default: printf("Choix invalide.\n");
    }
}

int main() {
    initialize_contacts();
    int choix;
    do {
        printf("\n--- Système de Gestion de Contacts ---\n");
        printf("1. Ajouter un contact\n");
        printf("2. Modifier un contact\n");
        printf("3. Supprimer un contact\n");
        printf("4. Afficher tous les contacts\n");
        printf("5. Afficher statistiques\n");
        printf("6. Rechercher un contact\n");
        printf("0. Quitter\n");
        printf("Choisissez une option: ");
        scanf("%d", &choix);
        
        switch (choix) {
            case 1: menu_ajouter(); break;
            case 2: modifier_contact(); break;
            case 3: supprimer_contact(); break;
            case 4: afficher_contacts(); break;
            case 5: MarocNumber(); break;
            case 6: menu_recherche(); break;
            case 0: printf("Au revoir!\n"); break;
            default: printf("Choix invalide. Veuillez reessayer.\n");
        }
    } while (choix != 0);
    return 0;
}
