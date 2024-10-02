#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <regex.h>

int validate_email(char phone[]) {
    regex_t regex;
    int reti;
    reti = regcomp(&regex, "^", REG_EXTENDED);
    if (reti) return 0; // Erreur lors de la compilation de l'expression régulière
    reti = regexec(&regex, phone, 0, NULL, 0);
    regfree(&regex);
    return reti == 0; // 0 signifie que l'email est valide
}

//^06[0-9]{8}$
//^07[0-9]{8}$
//^\+212[67][0-9]{8}$



int main() {
    char email[256];

    printf("Entrez une adresse e-mail : ");
    fgets(email, sizeof(email), stdin);
    
    // Retirer le caractère de nouvelle ligne si présent
    email[strcspn(email, "\n")] = '\0';

    if (validate_email(email)) {
        printf("L'adresse e-mail est valide.\n");
    } else {
        printf("L'adresse e-mail n'est pas valide.\n");
    }

    return 0;
}
