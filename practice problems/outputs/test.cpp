#include <iostream>
using namespace std;
int main (){
cout << "[1] Add two numbers\n";
cout << "[2] Multiply two numbers\n";
cout << "[3] Identify odd/even number\n";
cout << "[4] calculate age based on your year of birth\n";
cout << "[5] Exit\n";
cout << "Select: \n";
int x;

cout << "enter x: \n";
cin >> x;

    switch (x){
    case 1:
        
    string number1, number2, condition;
    do
    {
        cout << "Enter two numbers: \n";
        cout << "Enter the First Number: \n";
        cin >> number1;
        cout << "Enter the Second Number: \n";
        cin >> number2;
        cout << "The sum of " << number1 << "and " << number2 << ".\n";
        string sum = number1 + number2;
        cout << "Do yout want to continue? (yes(y)/no(n))\n";
        cin >> condition;
       
    } while (condition = "y");{

    case y:
        cout << "A\n";
        break;
    
    case n:
        cout << "B\n";
        break;
    }

        break;
    
    case 2:
        cout << "B\n";
        break;
    
    case 3:
        cout << "C\n";
        break;

    case 4:
        cout << "D\n";
        break;

    case 5:
        cout << "5\n";
        break;


    default:
        cout << "invalid function\n";
        break;
    }
/*
a:
    string number1, number2, condition;
    do
    {
        cout << "Enter two numbers: \n";
        cin >> number1;
        cin >> number2;
        cout << "The sum of " << number1 << "and " << number2 << ".\n";
        string sum = number1 + number2;
        cout << "Do yout want to continue? (yes(y)/no(n))\n";
        cin >> condition;
       
    } while (condition == "y" );{

       
    } while (condition == "n" );{
        goto a;
    }
*/    


return 0;
}
