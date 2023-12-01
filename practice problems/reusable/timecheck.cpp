#include <iostream>
using namespace std;
double hours, minutes, seconds;
int main (){
    cout << "Enter the desired hours: ";
    cin >> hours;
    cout << "Enter your desired minutes: ";
    cin >> minutes;
    cout << "Enter Your desired Seconds: ";
    cin >> seconds;
    cout << "result: " << (hours * 60 * 60) + (minutes * 60) + seconds;

    return 0;
}

