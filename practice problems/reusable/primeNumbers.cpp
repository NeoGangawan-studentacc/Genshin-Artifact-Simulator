#include <iostream>
using namespace std;

struct PrimeChecker {  
    static bool isPrime(int num) {
        if (num <= 1) {
            return false;
        }
        for (int i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }
};

int main() {

    int num;
    cout << "Neo L. Gangawan BSCS-1A \n";
    cout << "Enter a number: ";
    cin >> num;

    if (PrimeChecker::isPrime(num)) {
        cout << num << " is a prime number \n";
    } else {
        cout << num << " is not a prime number. \n";
    }
return 0;
}
