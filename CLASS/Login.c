#include <stdio.h>
#include <string.h>

#define MAX_USERS 100

typedef struct {
    char id[20];
    char password[20];
} User;

User users[MAX_USERS];
int userCount = 0;

void registerUser() {
    if (userCount >= MAX_USERS) {
        printf("User limit reached. Cannot register more users.\n");
        return;
    }

    char id[20], password[20];
    printf("Enter a new ID: ");
    scanf("%s", id);
    printf("Enter a new Password: ");
    scanf("%s", password);

    // Check if user already exists
    for (int i = 0; i < userCount; i++) {
        if (strcmp(users[i].id, id) == 0) {
            printf("User ID already exists. Please try a different ID.\n");
            return;
        }
    }

    strcpy(users[userCount].id, id);
    strcpy(users[userCount].password, password);
    userCount++;
    printf("Registered successfully with ID %s\n", id);
}

void login() {
    char id[20], password[20];
    printf("Enter your ID: ");
    scanf("%s", id);
    printf("Enter your Password: ");
    scanf("%s", password);

    for (int i = 0; i < userCount; i++) {
        if (strcmp(users[i].id, id) == 0) {
            if (strcmp(users[i].password, password) == 0) {
                printf("Login successful as %s\n", id);
                return;
            } else {
                printf("Sorry, password incorrect.\n");
                return;
            }
        }
    }
    printf("Invalid ID or Password. Please try again.\n");
}

int main() {
    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Login\n");
        printf("2. Register\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                login();
                break;
            case 2:
                registerUser();
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}