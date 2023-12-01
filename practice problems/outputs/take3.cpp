#include <iostream>
using namespace std;

int main() {
    char function;
    int num1, num2, num, year;
    char continueChoice;

    do {
        cout << "Select Letter of your choice!\n";
        cout << "[A] Add Two Numbers\n";
        cout << "[B] Multiply Two Numbers\n";
        cout << "[C] Identify Odd/Even Numbers\n";
        cout << "[D] Calculate Age By Year Of Birth\n";
        cout << "[E] Exit\n";

        cout << "Letter: ";
        cin >> function;
        cout << "\\";

        switch (function) {
            case 'A':
            case 'a':
                do {
                    cout << "[A] Add Two Numbers\n";
                    cout << "Enter 1st Number: ";
                    cin >> num1;
                    cout << "Enter 2nd Number: ";
                    cin >> num2;
                    cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;

                    cout << "Do you want to continue with addition? (Y/N): ";
                    cin >> continueChoice;
                } while (continueChoice == 'Y' || continueChoice == 'y');
                break;

            case 'B':
            case 'b':
                do {
                    cout << "[B] Multiply Two Numbers\n";
                    cout << "Enter 1st Number: ";
                    cin >> num1;
                    cout << "Enter 2nd Number: ";
                    cin >> num2;
                    cout << num1 << "×" << num2 << "=" << num1 * num2;

                    cout << "Do you want to continue with multiplication? (Y/N): ";
                    cin >> continueChoice;
                } while (continueChoice == 'Y' || continueChoice == 'y');
                break;

            case 'C':
            case 'c':
                do {
                    cout << "[C] Identify Odd/Even Number\n";
                    cout << "Enter Any Number: ";
                    cin >> num;
                    if (num % 2 == 0) {
                        cout << num << " is an even number.\n";
                    } else {
                        cout << num << " is an odd number.\n";
                    }

                    cout << "Do you want to continue identifying numbers? (Y/N): ";
                    cin >> continueChoice;
                } while (continueChoice == 'Y' || continueChoice == 'y');
                break; 

            case 'D':
            case 'd':
                do {
                    cout << "[D] Calculate Age by Year of Birth\n";
                    cout << "Enter your Birth Year: ";
                    cin >> year;
                    cout << "Your Age is " << 2023 - year << " as of year 2023.\n";

                    cout << "Do you want to continue calculating ages? (Y/N): ";
                    cin >> continueChoice;
                } while (continueChoice == 'Y' || continueChoice == 'y');
                break;

            case 'E':
            case 'e':
                cout << "Thank you!\n";
                return 0; // Exit the program when 'E' or 'e' is selected

            default:
                cout << "Error. Invalid Letter!\n";
        }

        cout << "Do you want to continue with another option? (Y/N): ";
        cin >> continueChoice;

    } while (continueChoice == 'Y' || continueChoice == 'y');

    return 0;
}
