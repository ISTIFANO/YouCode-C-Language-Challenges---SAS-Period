#include <stdio.h>
#include <string.h>

#define MAX_RESERVATIONS 100

typedef struct {
    char firstName[50];
    char lastName[50];
    char phone[15];
    int age;
    char status[15];
    char ref[10];
    char date[11];  // Format: YYYY-MM-DD
} Reservation;

Reservation reservations[MAX_RESERVATIONS];
int reservationCount = 10;  // Start with 10 default reservations

void addReservation();
void modifyReservation();
void deleteReservation();
void displayReservation();
void sortReservations();
void searchReservation();
void showMenu();

int main() {
    showMenu();
    return 0;
}

void showMenu() {
    int choice;
    do {
        printf("\n--- Dental Appointment System ---\n");
        printf("1. Add a Reservation\n");
        printf("2. Modify/Delete a Reservation\n");
        printf("3. Display Reservation\n");
        printf("4. Sort Reservations by Name\n");
        printf("5. Search Reservation\n");
        printf("0. Exit\n");
        printf("Choose: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addReservation(); break;
            case 2: modifyReservation(); break;
            case 3: displayReservation(); break;
            case 4: sortReservations(); break;
            case 5: searchReservation(); break;
            case 0: printf("Goodbye!\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 0);
}

void addReservation() {
    if (reservationCount >= MAX_RESERVATIONS) {
        printf("No space for more reservations.\n");
        return;
    }

    printf("First Name: ");
    scanf("%s", reservations[reservationCount].firstName);
    printf("Last Name: ");
    scanf("%s", reservations[reservationCount].lastName);
    printf("Phone: ");
    scanf("%s", reservations[reservationCount].phone);
    printf("Age: ");
    scanf("%d", &reservations[reservationCount].age);
    printf("Status (validated/postponed/canceled): ");
    scanf("%s", reservations[reservationCount].status);
    printf("Date (YYYY-MM-DD): ");
    scanf("%s", reservations[reservationCount].date);
    
    snprintf(reservations[reservationCount].ref, sizeof(reservations[reservationCount].ref), "REF%d", reservationCount + 1);
    reservationCount++;

    printf("Reservation added.\n");
}

void modifyReservation() {
    char ref[10];
    printf("Enter reference of the reservation to modify: ");
    scanf("%s", ref);

    for (int i = 0; i < reservationCount; i++) {
        if (strcmp(reservations[i].ref, ref) == 0) {
            printf("1. Modify\n2. Delete\nChoose: ");
            int option;
            scanf("%d", &option);

            if (option == 1) {
                printf("First Name: ");
                scanf("%s", reservations[i].firstName);
                printf("Last Name: ");
                scanf("%s", reservations[i].lastName);
                printf("Phone: ");
                scanf("%s", reservations[i].phone);
                printf("Age: ");
                scanf("%d", &reservations[i].age);
                printf("Status: ");
                scanf("%s", reservations[i].status);
                printf("Date (YYYY-MM-DD): ");
                scanf("%s", reservations[i].date);
                printf("Reservation modified.\n");
            } else if (option == 2) {
                for (int j = i; j < reservationCount - 1; j++) {
                    reservations[j] = reservations[j + 1];
                }
                reservationCount--;
                printf("Reservation deleted.\n");
            }
            return;
        }
    }
    printf("Reservation not found.\n");
}

void displayReservation() {
    char ref[10];
    printf("Enter reservation reference: ");
    scanf("%s", ref);

    for (int i = 0; i < reservationCount; i++) {
        if (strcmp(reservations[i].ref, ref) == 0) {
            printf("Name: %s %s\n", reservations[i].firstName, reservations[i].lastName);
            printf("Phone: %s\n", reservations[i].phone);
            printf("Age: %d\n", reservations[i].age);
            printf("Status: %s\n", reservations[i].status);
            printf("Date: %s\n", reservations[i].date);
            return;
        }
    }
    printf("Reservation not found.\n");
}

void sortReservations() {
    for (int i = 0; i < reservationCount - 1; i++) {
        for (int j = i + 1; j < reservationCount; j++) {
            if (strcmp(reservations[i].lastName, reservations[j].lastName) > 0) {
                Reservation temp = reservations[i];
                reservations[i] = reservations[j];
                reservations[j] = temp;
            }
        }
    }
    printf("Reservations sorted by name.\n");
}

void searchReservation() {
    char name[50];
    printf("Enter last name to search: ");
    scanf("%s", name);

    for (int i = 0; i < reservationCount; i++) {
        if (strcmp(reservations[i].lastName, name) == 0) {
            printf("Reservation found: %s %s\n", reservations[i].firstName, reservations[i].lastName);
            return;
        }
    }
    printf("Reservation not found.\n");
}
