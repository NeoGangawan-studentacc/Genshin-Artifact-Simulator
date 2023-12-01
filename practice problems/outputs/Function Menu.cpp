#include <iostream>
#include <ctime>

using namespace std;

// Function to add two numbers
int add(int num1, int num2) {
    return num1 + num2;
}

// Function to multiply two numbers
int multiply(int num1, int num2) {
    return num1 * num2;
}

// Function to check if a number is odd or even
bool isOdd(int num) {
    return num % 2 != 0;
}

// Function to calculate age based on date of birth
int calculateAge(int birthYear) {
    time_t now = time(0);
    tm* currentTime = localtime(&now);
    int currentYear = 1900 + currentTime->tm_year;
    return currentYear - birthYear;
}

int main() {
    int choice;
    
    do {
        cout << "Choose an operation:" << endl;
        cout << "[1] Add two numbers" << endl;
        cout << "[2] Multiply two numbers" << endl;
        cout << "[3] Check if a number is odd or even" << endl;
        cout << "[4] Calculate age based on date of birth" << endl;
        cout << "[5] Exit" << endl;
        cin >> choice;
        
        switch (choice) {
            case 1: {
                int num1, num2;
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                int result = add(num1, num2);
                cout << "Result: " << result << endl;
                break;
            }
            case 2: {
                int num1, num2;
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                int result = multiply(num1, num2);
                cout << "Result: " << result << endl;
                break;
            }
            case 3: {
                int num;
                cout << "Enter a number: ";
                cin >> num;
                if (isOdd(num)) {
                    cout << num << " is odd." << endl;
                } else {
                    cout << num << " is even." << endl;
                }
                break;
            }
            case 4: {
                int birthYear;
                cout << "Enter your birth year: ";
                cin >> birthYear;
                int age = calculateAge(birthYear);
                cout << "Your age is: " << age << " years" << endl;
                break;
            }
            case 5: {
                cout << "Exiting the program." << endl;
                return 0;
                
            }
            default: {
                cout << "Invalid choice. Please try again." << endl;
            }
        }       cout << "Do you want to use the program again? (y/n): ";
                cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    
    return 0;
}