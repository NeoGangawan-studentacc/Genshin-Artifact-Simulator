#include <iostream>
using namespace std;

int main () {
    a:

    string pass_code;

    cout << "Enter your Password: \n";
    getline (cin,pass_code);

    if (pass_code == "iloveprog"){
        cout << "Password Accepted!" << endl << "Welcome User!\n";
    }else{
        cout << "Sorry! Wrong Password!" << endl << "Please try again.\n";
    }


    goto a;
    return 0;
}