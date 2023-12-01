#include <iostream>
using namespace std;

int main (){
a:
    unsigned long int num;
    cout << "Enter your number: ";
    cin >> num;
        if (num % 2)
        {cout << "ODD!\n";}
        else {
        cout << "EVEN!\n";
        }
goto a;
return 0;
}