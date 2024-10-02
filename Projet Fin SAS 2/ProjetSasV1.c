#include <stdio.h>
#include <string.h>

#define MAX_RESERVATIONS 100

typedef struct {
    char firstName[50];
    char lastName[50];
    char phone[15];
    int age;
    char status[15];
    char uniqueRef[10];
    char reservationDate[11];  // Format: YYYY-MM-DD
} Reservation;

Reservation reservations[MAX_RESERVATIONS];
int reservationCount = 10;  // Start with 10 default reservations

void initializeReservations();
void addReservation();
void modifyReservation();
void deleteReservation();
void displayReservation();
void sortReservationsByName();
void sortReservationsByDate();
void sortReservationsByStatus();
void searchReservationByRef();
void searchReservationByName();
void searchReservationByDate();
void generateStatistics();
void menu();

int main() {
    initializeReservations();  // Insert 10 default reservations
    menu();
    return 0;
}

void menu() {
    int choice;
    do {
        printf("\n--- Dental Appointment Reservation System ---\n");
        printf("1. Add a Reservation\n");
        printf("2. Modify/Delete a Reservation\n");
        printf("3. Display Reservation Details\n");
        printf("4. Sort Reservations\n");
        printf("5. Search Reservations\n");
        printf("6. Generate Statistics\n");
        printf("0. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addReservation();
                break;
            case 2:
                modifyReservation();
                break;
            case 3:
                displayReservation();
                break;
            case 4:
                printf("Sort by:\n1. Name\n2. Date\n3. Status\nChoose an option: ");
                int sortChoice;
                scanf("%d", &sortChoice);
                if (sortChoice == 1)
                    sortReservationsByName();
                else if (sortChoice == 2)
                    sortReservationsByDate();
                else if (sortChoice == 3)
                    sortReservationsByStatus();
                break;
            case 5:
                printf("Search by:\n1. Unique Reference\n2. Name\n3. Date\nChoose an option: ");
                int searchChoice;
                scanf("%d", &searchChoice);
                if (searchChoice == 1)
                    searchReservationByRef();
                else if (searchChoice == 2)
                    searchReservationByName();
                else if (searchChoice == 3)
                    searchReservationByDate();
                break;
            case 6:
                generateStatistics();
                break;
            case 0:
                printf("Exiting the program...\n");
                break;
            default:
                printf("Invalid option! Please try again.\n");
        }
    } while (choice != 0);
}

void initializeReservations() {
    // Initialize 10 default reservations (for example purposes)
    for (int i = 0; i < 10; i++) {
        snprintf(reservations[i].firstName, sizeof(reservations[i].firstName), "First%d", i+1);
        snprintf(reservations[i].lastName, sizeof(reservations[i].lastName), "Last%d", i+1);
        snprintf(reservations[i].phone, sizeof(reservations[i].phone), "555-000%d", i+1);
        reservations[i].age = 20 + i;
        strcpy(reservations[i].status, "validated");
        snprintf(reservations[i].uniqueRef, sizeof(reservations[i].uniqueRef), "REF%d", i+1);
        snprintf(reservations[i].reservationDate, sizeof(reservations[i].reservationDate), "2024-10-%02d", i+1);
    }
}

void addReservation() {
    if (reservationCount >= MAX_RESERVATIONS) {
        printf("No more reservations can be added.\n");
        return;
    }
    printf("\n--- Add a Reservation ---\n");
    printf("First Name: ");
    scanf("%s", reservations[reservationCount].firstName);
    printf("Last Name: ");
    scanf("%s", reservations[reservationCount].lastName);
    printf("Phone Number: ");
    scanf("%s", reservations[reservationCount].phone);
    printf("Age: ");
    scanf("%d", &reservations[reservationCount].age);
    printf("Status (validated, postponed, canceled, treated): ");
    scanf("%s", reservations[reservationCount].status);
    printf("Reservation Date (YYYY-MM-DD): ");
    scanf("%s", reservations[reservationCount].reservationDate);
    snprintf(reservations[reservationCount].uniqueRef, sizeof(reservations[reservationCount].uniqueRef), "REF%d", reservationCount + 1);
    reservationCount++;
    printf("Reservation added successfully.\n");
}

void modifyReservation() {
    char ref[10];
    printf("\n--- Modify/Delete a Reservation ---\n");
    printf("Enter the unique reference of the reservation: ");
    scanf("%s", ref);

    for (int i = 0; i < reservationCount; i++) {
        if (strcmp(reservations[i].uniqueRef, ref) == 0) {
            int modifyChoice;
            printf("Reservation found: %s %s\n", reservations[i].firstName, reservations[i].lastName);
            printf("1. Modify\n2. Delete\nChoose an option: ");
            scanf("%d", &modifyChoice);

            if (modifyChoice == 1) {
                printf("Update First Name: ");
                scanf("%s", reservations[i].firstName);
                printf("Update Last Name: ");
                scanf("%s", reservations[i].lastName);
                printf("Update Phone: ");
                scanf("%s", reservations[i].phone);
                printf("Update Age: ");
                scanf("%d", &reservations[i].age);
                printf("Update Status: ");
                scanf("%s", reservations[i].status);
                printf("Update Date (YYYY-MM-DD): ");
                scanf("%s", reservations[i].reservationDate);
                printf("Reservation updated successfully.\n");
            } else if (modifyChoice == 2) {
                for (int j = i; j < reservationCount - 1; j++) {
                    reservations[j] = reservations[j + 1];
                }
                reservationCount--;
                printf("Reservation deleted successfully.\n");
            }
            return;
        }
    }
    printf("Reservation not found.\n");
}

void displayReservation() {
    char ref[10];
    printf("\n--- Display Reservation Details ---\n");
    printf("Enter the unique reference: ");
    scanf("%s", ref);

    for (int i = 0; i < reservationCount; i++) {
        if (strcmp(reservations[i].uniqueRef, ref) == 0) {
            printf("First Name: %s\n", reservations[i].firstName);
            printf("Last Name: %s\n", reservations[i].lastName);
            printf("Phone: %s\n", reservations[i].phone);
            printf("Age: %d\n", reservations[i].age);
            printf("Status: %s\n", reservations[i].status);
            printf("Reservation Date: %s\n", reservations[i].reservationDate);
            printf("Unique Reference: %s\n", reservations[i].uniqueRef);
            return;
        }
    }
    printf("Reservation not found.\n");
}

void sortReservationsByName() {
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

void sortReservationsByDate() {
    for (int i = 0; i < reservationCount - 1; i++) {
        for (int j = i + 1; j < reservationCount; j++) {
            if (strcmp(reservations[i].reservationDate, reservations[j].reservationDate) > 0) {
                Reservation temp = reservations[i];
                reservations[i] = reservations[j];
                reservations[j] = temp;
            }
        }
    }
    printf("Reservations sorted by date.\n");
}

void sortReservationsByStatus() {
    for (int i = 0; i < reservationCount - 1; i++) {
        for (int j = i + 1; j < reservationCount; j++) {
            if (strcmp(reservations[i].status, reservations[j].status) > 0) {
                Reservation temp = reservations[i];
                reservations[i] = reservations[j];
                reservations[j] = temp;
            }
        }
    }
    printf("Reservations sorted by status.\n");
}

void searchReservationByRef() {
    char ref[10];
    printf("\n--- Search by Unique Reference ---\n");
    printf("Enter the reference: ");
    scanf("%s", ref);

    for (int i = 0; i < reservationCount; i++) {
        if (strcmp(reservations[i].uniqueRef, ref) == 0) {
            printf("Reservation found: %s %s\n", reservations[i].firstName, reservations[i].lastName);
            return;
        }
    }
    printf("Reservation not found.\n");
}

void searchReservationByName() {
    char name[50];
    printf("\n--- Search by Name ---\n");
    printf("Enter the last name: ");
    scanf("%s", name);

    for (int i = 0; i < reservationCount; i++) {
        if (strcmp(reservations[i].lastName, name) == 0) {
            printf("Reservation found: %s %s\n", reservations[i].firstName, reservations[i].lastName);
            return;
        }
    }
    printf("Reservation not found.\n");
}

void searchReservationByDate() {
    char date[11];
    printf("\n--- Search by Date ---\n");
    printf("Enter the date (YYYY-MM-DD): ");
    scanf("%s", date);

    for (int i = 0; i < reservationCount; i++) {
        if (strcmp(reservations[i].reservationDate, date) == 0) {
            printf("Reservation found: %s %s\n", reservations[i].firstName, reservations[i].lastName);
            return;
        }
    }
    printf("Reservation not found.\n");
}

void generateStatistics() {
    int totalAge = 0, count_0_18 = 0, count_19_35 = 0, count_36_plus = 0;
    int validated = 0, postponed = 0, canceled = 0, treated = 0;

    for (int i = 0; i < reservationCount; i++) {
        totalAge += reservations[i].age;

        if (reservations[i].age <= 18)
            count_0_18++;
        else if (reservations[i].age <= 35)
            count_19_35++;
        else
            count_36_plus++;

        if (strcmp(reservations[i].status, "validated") == 0)
            validated++;
        else if (strcmp(reservations[i].status, "postponed") == 0)
            postponed++;
        else if (strcmp(reservations[i].status, "canceled") == 0)
            canceled++;
        else if (strcmp(reservations[i].status, "treated") == 0)
            treated++;
    }

    printf("\n--- Statistics ---\n");
    printf("Average Age: %.2f\n", (float) totalAge / reservationCount);
    printf("Patients by Age Group:\n0-18: %d\n19-35: %d\n36+: %d\n", count_0_18, count_19_35, count_36_plus);
    printf("Reservations by Status:\nValidated: %d\nPostponed: %d\nCanceled: %d\nTreated: %d\n", validated, postponed, canceled, treated);
}
