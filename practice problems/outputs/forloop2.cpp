#include<iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    
    for (int i = 0; i < 5; ++i) {
        sum += num;
    }

    cout << "Sum of " << num << " added five times: " << sum << std::endl;

    return 0;
}
