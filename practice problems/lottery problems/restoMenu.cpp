#include <iostream>
using namespace std;

void displayMenu() {
    cout << "Menu:" << endl;
    cout << "1. Burger - $5.00" << endl;
    cout << "2. Pizza - $8.00" << endl;
    cout << "3. Salad - $4.50" << endl;
}

float calculateCost(int quantity, float price) {
    return quantity * price;
}

int main() {
    float burgerPrice = 5.00;
    float pizzaPrice = 8.00;
    float saladPrice = 4.50;

    float totalCost = 0.0;

    while (true) {
        displayMenu();

        int choice;
        cout << "Enter the number of your choice (1-3), or 0 to exit: ";
        cin >> choice;

        switch (choice) {
            case 0:
                cout << "Thank you for your order. Your total cost is $" << totalCost << endl;
                return 0;
            case 1:
                int burgerQuantity;
                cout << "Enter the quantity of burgers: ";
                cin >> burgerQuantity;
                totalCost += calculateCost(burgerQuantity, burgerPrice);
                break;
            case 2:
                int pizzaQuantity;
                cout << "Enter the quantity of pizzas: ";
                cin >> pizzaQuantity;
                totalCost += calculateCost(pizzaQuantity, pizzaPrice);
                break;
            case 3:
                int saladQuantity;
                cout << "Enter the quantity of salads: ";
                cin >> saladQuantity;
                totalCost += calculateCost(saladQuantity, saladPrice);
                break;
            default:
                cout << "Invalid choice. Please choose a number between 0 and 3." << endl;
        }

        cout << "Total cost: $" << totalCost << endl;
    }

    return 0;
}
