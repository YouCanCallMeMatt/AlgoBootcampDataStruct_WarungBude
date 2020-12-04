#include "../controllers/utils.h"
#include "../controllers/controls.h"
#include "../controllers/validations.h"


void addDish() {
    char name[255];
    int price;
    int quantity;
    do {
        printf("Insert the name of the dish [Lowercase letters]: ");
        scanf("%[^\n]", name); getchar();
    }while(!isValidDishName(name));
    do {
        printf("Insert the price of the dish [1000..50000]: ");
        scanf("%d", &price); getchar();
    }while(!isValidDishPrice(price));
    do {
        printf("Insert the quantity of the dish [1..999]: ");
        scanf("%d", &quantity); getchar();
    }while(!isValidDishQty(quantity));
    insertDish(name,price,quantity);
    sleep();
    puts("The dish has been added!");
    petc();

}


int main() {

    bool running = true;

    while(running) {
        printf("System: %s\n", detectOS());
        outputLocalTime();
        puts("1. Add Dish");
        puts("2. Remove Dish");
        puts("3. Add Customer");
        puts("4. Search Customer");
        puts("5. View Warteg");
        puts("6. Order");
        puts("7. Payment");
        puts("8. Exit Warteg");

        int input;

        do {
            printf(">> ");
            scanf("%d", &input); getchar();
        } while(input < 1 || input > 8);
        clearScreen();

        switch(input) {
        case 1:
            // addDish();
            break;
        case 2:
            // removeDish();
            break;
        case 3:
            // addCustomer();
            break;
        case 4:
            // searchCustomer();
            break;
        case 5:
            // viewWarteg();
            break;
        case 6:
            // order();
            break;
        case 7:
            // payment();
            break;
        case 8:
            running = false;
            clearScreen();
            puts("Please expand your terminal to full screen!");
            petc();
            printSplashScreen();
            break;
        }
    }

}