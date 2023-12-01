#include<iostream>
using namespace std;
int main (){
    int rows;
    cout << "enter row number: \n";
    cin >> rows;
        for (int r = 1; r <= rows; ++r){
            for (int s = 1; s <= rows - r; ++s){
                cout << " ";
            }
            for (int c = 1; c <= r; ++c){
            cout << "* ";}
            cout << endl;}
return 0;
}