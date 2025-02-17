#include <stdio.h>
#include <string.h>

#define USERNAME "omm"
#define PASSWORD "230301121561"

void showMenu() {
    int choice;

    while (1) {
        printf("\n===== MENU =====\n");
        printf("1. Tea\n");
        printf("2. Biryani\n");
        printf("3. Veg Meals\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nYou selected Tea. Enjoy your drink!\n");
                break;
            case 2:
                printf("\nYou selected Biryani. Spicy choice!\n");
                break;
            case 3:
                printf("\nYou selected Veg Meals. Healthy and tasty!\n");
                break;
            case 4:
                printf("\nExiting... Have a great day!\n");
                return;
            default:
                printf("\nInvalid choice! Please enter a valid option.\n");
        }
    }
}

int main() {
    char inputUsername[20], inputPassword[20];

    printf("Enter Username: ");
    scanf("%s", inputUsername);

    getchar(); 
    printf("Enter Password: ");
    fgets(inputPassword, sizeof(inputPassword), stdin);
    inputPassword[strcspn(inputPassword, "\n")] = 0; 

    if (strcmp(inputUsername, USERNAME) == 0 && strcmp(inputPassword, PASSWORD) == 0) {
        printf("\nLogin Successful!\n");
        showMenu();
    } else {
        printf("\nAccess Denied: Invalid Username or Password.\n");
    }

    return 0;
}