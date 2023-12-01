#include<iostream>
using namespace std;
int main (){
    cout << "Neo L. Gangawan BSCS-1A \n";
        for (int r = 0; r <= 3; ++r){
            for (int x = 4 - r; x > 0; --x){
                cout << " ";}
            for (int c = 0; c <= r; ++c){
            cout <<"*";}
            cout << endl;}
    system("pause");
return 0;
}