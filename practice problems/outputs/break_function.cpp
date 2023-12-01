#include <iostream>

using namespace std;
int main(){



int x;
a:
cout << "enter x: \n";
cin >> x;

    switch (x){
    case 1:
        cout << "A\n";
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

goto a;
    return 0;
}