#include <iostream>

using namespace std;
int main (){

char operation;
char continueChoice;
float num1, num2;


do {
    cout << "Centimeter Calculator\n";
    cout << "[1] Milimeter\n";
    cout << "[2] Meter\n";
    cout << "[3] Kilometer\n";
    cout << "[4] Inches\n";
    cout << "Choose the desired Length:  ";
        cin >> operation;
    switch (operation)
    {
    case 1:
        cout << "Enter Your Centimeter: ";
        cin >> num1;
        cout << "Unit";

        break;
    case 2:
        cout << "Enter Your Centimeter: ";
        cin >> num1;
        cout << "Unit";
        break;
    case 3:
        cout << "Enter Your Centimeter: ";
        cin >> num1;
        cout << "Unit";
        break;
    case 4:
        cout << "Enter Your Centimeter: ";
        cin >> num1;
        cout << "Unit";
        break;
    default:
        cout << "Invalid Choice\n";
        break;
    }}






    return 0;
}