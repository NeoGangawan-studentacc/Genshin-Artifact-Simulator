#include <iostream>
using namespace std;
int main (){
int sum = 0;
    for (int x = 10; x >= 0 ; x--){
        int whole;
        cout << "enter a whole number: ";
        cin >> whole;
        sum += whole;
        cout << "the sum of the numbers is: " << whole << endl;
    }
return 0;


}