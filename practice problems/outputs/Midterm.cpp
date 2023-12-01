#include <iostream>

using namespace std;



int main() {
    char choice;
    char continueChoice;
    double num1, num2;
    
    do {
        cout << "---------------------------------------------------------\n";
        cout << "||     Choose an operation:                            ||\n";
        cout << "||                                                     ||\n";
        cout << "||     [A] Add two numbers                             ||\n";
        cout << "||     [B] Multiply two numbers                        ||\n";
        cout << "||     [C] Check if a number is odd or even            ||\n";
        cout << "||     [D] Calculate age based on date of birth        ||\n";
        cout << "||     [E] Exit                                        ||\n";
        cout << "---------------------------------------------------------\n";
        
        cin >> choice;
        
        switch (choice) {
            case 'A':
            case 'a':
            	do {
                cout << "Enter two numbers: \n";
                cout << "Enter Number 1: ";
                cin >> num1;
                cout << "Enter Number 2: ";
                cin >> num2;
                cout << "Result: " << num1 + num2 << endl;
                cout << "Do you want to continue? (Y/N): ";
                    cin >> continueChoice;
                } while (continueChoice == 'Y' || continueChoice == 'y');
                break;
                
            case 'B':
            case 'b':
            	do {
                cout << "Enter two numbers: \n";
                cout << "Enter Number 1: ";
                cin >> num1;
                cout << "Enter Number 2: ";
                cin >> num2;
                cout << "Result: " << num1 * num2 << endl;
                cout << "Do you want to continue? (Y/N): ";
                    cin >> continueChoice;
                } while (continueChoice == 'Y' || continueChoice == 'y');
                break;
                
            case 'C':
            case 'c':
                int num;
                do {
                cout << "Enter a number: \n";
                cin >> num;
                if (num % 2 == 0) {
                        cout << num << " is even\n";
                        } else {
                        cout << num << " is odd\n";
                        };
                cout << "Do you want to continue? (Y/N): ";
                    cin >> continueChoice;
                } while (continueChoice == 'Y' || continueChoice == 'y');
                break;
                
            case 'D':
            case 'd':
                int birthYear;
                do {
                cout << "Enter your birth year: \n";
                cin >> birthYear;
                cout << "Your age is: " << 2023 - birthYear << " years old.\n";
                cout << "Do you want to continue? (Y/N): ";
                    cin >> continueChoice;
                } while (continueChoice == 'Y' || continueChoice == 'y');
                break;
                
            case 'E':
            case 'e':
                cout << "Exiting the program.\n";
                return 0;
                
            default:
                cout << "Invalid choice.\n";
        }
        
        cout << "Do you want to use the program again? (y/n): \n";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    
    return 0;
}