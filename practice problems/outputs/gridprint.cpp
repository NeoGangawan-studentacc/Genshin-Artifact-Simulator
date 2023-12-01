#include<iostream>
using namespace std;

int main() {
/*user can set the desired number
of columns and rows */
    int colNum;
    int rowNum;
    cout << " enter column number: \n";
    cin >> colNum;
    cout << "enter row number: \n";
    cin >> rowNum;
//matrix printing
    for (int r = 0; r < rowNum; r++){
        for (int c = 0; c < colNum; c++){
    cout << " *";}
    cout << endl;}
        




    return 0;
}