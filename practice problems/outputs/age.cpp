#include <iostream>
using namespace std;


double add(double a, double b) {
    return a + b;
}

double multiply(double a, double b) {
    return a * b;
}

void checkOddEven(int num) {
    if (num % 2 == 0) {
        cout << num << " is even." << endl;
    } else {
        cout << num << " is odd." << endl;
    }
}


int calculateAge(int birthYear) {
    int currentYear = 2023;
    return currentYear - birthYear;
}

int main() {
    char choice;
    
    do {
        cout << "----------------------------------------------------------||";
        cout << "||     Choose an operation:\n                             ||";
        cout << "||     [A] Add two numbers\n                              ||";
        cout << "||     [B] Multiply two numbers\n                         ||";
        cout << "||     [C] Check if a number is odd or even\n             ||";
        cout << "||     [D] Calculate age based on date of birth\n         ||";
        cout << "||     [E] Exit\n                                         ||";
        cout << "----------------------------------------------------------||";
        cin >> choice;
        
        switch (choice) {
            case 'A':
                double num1, num2;
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << add(num1, num2) << endl;
                break;
                
            case 'B':
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << multiply(num1, num2) << endl;
                break;
                
            case 'C':
                int num;
                cout << "Enter a number: ";
                cin >> num;
                checkOddEven(num);
                break;
                
            case 'D':
                int birthYear;
                cout << "Enter your birth year: ";
                cin >> birthYear;
                cout << "Your age is: " << calculateAge(birthYear) << " years old." << endl;
                break;
                
            case 'E':
                cout << "Exiting the program." << endl;
                return 0;
                
            default:
                cout << "Invalid choice. Please choose a valid option." << endl;
        }
        
        cout << "Do you want to use the program again? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    
    return 0;
}
