#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;
    char continueOperation = 'y';

    while (continueOperation == 'y' || continueOperation == 'Y') {
        cout << "Neo L. Gangawan BSCS-1A\n";
        cout << "Select the desired operation: \n";
        cout << "[+] Addition\n";
        cout << "[-] Subtraction\n";
        cout << "[x] Multiplication\n";
        cout << "[%] Division\n";
        cin >> operation;

        switch (operation) {
            case '+':
            case '1':
                cout << "Enter Number 1: ";
                cin >> num1;
                cout << "Enter Number 2: ";
                cin >> num2;
                cout << "Result: " << num1 + num2 << endl;
                break;
            case '-':
            case '2':
                cout << "Enter Number 1: ";
                cin >> num1;
                cout << "Enter Number 2: ";
                cin >> num2;
                cout << "Result: " << num1 - num2 << endl;
                break;
            case 'x':
            case 'X':
            case '*':
            case '3':
                cout << "Enter Number 1: ";
                cin >> num1;
                cout << "Enter Number 2: ";
                cin >> num2;
                cout << "Result: " << num1 * num2 << endl;
                break;
            case '%':
            case '/':
            case '4':
                cout << "Enter Number 1: ";
                cin >> num1;
                cout << "Enter Number 2: ";
                cin >> num2;
                cout << "Result: " << num1 / num2 << endl;
                break;
            default:
                cout << "Invalid Input! \n";
                continue;
        }

        cout << "Do you want to use the program again? (y/n): ";
        cin >> continueOperation;
    }

    cout << "Goodbye!\n";
    return 0;
}
