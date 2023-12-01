#include <iostream>
using namespace std;


int main (){

    int x, y;

        a:

        cout << "\nEnter X: ";
        cin >> x;

        cout << "Enter Y: ";
        cin >> y;

            if (x && y){
                cout <<endl<< x<<" && "<<y<<" = true";

            }else{
                cout << x<<" && "<<y<<" = false";}

            if (x||y){
                cout <<endl<< x<<" || "<<y<<" = true";

            }else{
                cout <<endl<< x<<" || "<<y<<" = false";
            }
    




    goto a;
    return 0;
}

