#include <stdio.h>
#include <string.h>

#define MAX_RESERVATIONS 100

// Structure for a reservation
struct Reservation {
    char name[50];
    char phone[15];
    int age;
    char status[15];
    char ref[10];
    char date[11];
};

// Global array to store reservations
struct Reservation reservations[MAX_RESERVATIONS];
int reservationCount = 10;  // Start with 10 default reservations

// Function prototypes
void addReservation();
void modifyReservation();
void deleteReservation();
void showReservations();
void searchReservation();
void showMenu();

int main() {
    showMenu();
    return 0;
}

// Main menu
void showMenu() {
    int choice;
    do {
        printf("\n--- Dental Appointment System ---\n");
        printf("1. Add Reservation\n");
        printf("2. Modify Reservation\n");
        printf("3. Delete Reservation\n");
        printf("4. Show All Reservations\n");
        printf("5. Search Reservation\n");
        printf("0. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addReservation(); break;
            case 2: modifyReservation(); break;
            case 3: deleteReservation(); break;
            case 4: showReservations(); break;
            case 5: searchReservation(); break;
            case 0: printf("Exiting...\n"); break;
            default: printf("Invalid choice, try again.\n");
        }
    } while (choice != 0);
}

// Add a new reservation
void addReservation() {
    if (reservationCount >= MAX_RESERVATIONS) {
        printf("No space for more reservations.\n");
        return;
    }

    // Get input for the new reservation
    printf("Enter Name: ");
    scanf("%s", reservations[reservationCount].name);
    printf("Enter Phone: ");
    scanf("%s", reservations[reservationCount].phone);
    printf("Enter Age: ");
    scanf("%d", &reservations[reservationCount].age);
    printf("Enter Status (validated/canceled): ");
    scanf("%s", reservations[reservationCount].status);
    printf("Enter Date (YYYY-MM-DD): ");
    scanf("%s", reservations[reservationCount].date);

    // Generate a reference number for the reservation
    sprintf(reservations[reservationCount].ref, "R%d", reservationCount + 1);
    reservationCount++;

    printf("Reservation added successfully.\n");
}

// Modify an existing reservation
void modifyReservation() {
    char ref[10];
    printf("Enter reservation reference to modify: ");
    scanf("%s", ref);

    for (int i = 0; i < reservationCount; i++) {
        if (strcmp(reservations[i].ref, ref) == 0) {
            printf("Enter new Name: ");
            scanf("%s", reservations[i].name);
            printf("Enter new Phone: ");
            scanf("%s", reservations[i].phone);
            printf("Enter new Age: ");
            scanf("%d", &reservations[i].age);
            printf("Enter new Status: ");
            scanf("%s", reservations[i].status);
            printf("Enter new Date (YYYY-MM-DD): ");
            scanf("%s", reservations[i].date);
            printf("Reservation modified.\n");
            return;
        }
    }
    printf("Reservation not found.\n");
}

// Delete a reservation
void deleteReservation() {
    char ref[10];
    printf("Enter reservation reference to delete: ");
    scanf("%s", ref);

    for (int i = 0; i < reservationCount; i++) {
        if (strcmp(reservations[i].ref, ref) == 0) {
            // Shift all reservations after the deleted one
            for (int j = i; j < reservationCount - 1; j++) {
                reservations[j] = reservations[j + 1];
            }
            reservationCount--;
            printf("Reservation deleted.\n");
            return;
        }
    }
    printf("Reservation not found.\n");
}

// Show all reservations
void showReservations() {
    if (reservationCount == 0) {
        printf("No reservations to display.\n");
        return;
    }

    printf("\n--- All Reservations ---\n");
    for (int i = 0; i < reservationCount; i++) {
        printf("Ref: %s, Name: %s, Phone: %s, Age: %d, Status: %s, Date: %s\n",
               reservations[i].ref, reservations[i].name, reservations[i].phone,
               reservations[i].age, reservations[i].status, reservations[i].date);
    }
}

// Search reservation by reference
void searchReservation() {
    char ref[10];
    printf("Enter reservation reference: ");
    scanf("%s", ref);

    for (int i = 0; i < reservationCount; i++) {
        if (strcmp(reservations[i].ref, ref) == 0) {
            printf("Reservation found: Name: %s, Phone: %s, Age: %d, Status: %s, Date: %s\n",
                   reservations[i].name, reservations[i].phone, reservations[i].age,
                   reservations[i].status, reservations[i].date);
            return;
        }
    }
    printf("Reservation not found.\n");
}
