#include <iostream>

    using std::cout;
    using std::cin;
    using std::string;
    using std::endl;


int main (){

    string (FIRST_NAME);
    string (LAST_NAME);
    string (MIDDLE_NAME);
    
    a:

        cout << "Enter your First Name: "<<endl;

        std::cin >> FIRST_NAME;

        cout << "Your First Name is ";
        cout << FIRST_NAME <<endl;
        
            cout << endl;
            cout << endl;
            cout << endl;

        cout << "Enter your Middle Name: "<< endl;
        
        std::cin >> MIDDLE_NAME;
         
            cout << endl;
            cout << endl;
            cout << endl;


        cout << "Your Middle Name is ";
        cout << MIDDLE_NAME <<endl;

            cout << endl;
            cout << endl;
            cout << endl;
    
        cout << "Enter your Last Name: "<<endl;
        
        std::cin >> LAST_NAME;
         
            cout << endl;
            cout << endl;
            cout << endl;


        cout << "Your Last Name is ";
        cout << LAST_NAME <<endl;
        

            cout << endl;
            cout << endl;
            cout << endl;

        string FULL_NAME = FIRST_NAME + " "+ MIDDLE_NAME+" " + LAST_NAME;
        
        
        cout << "Welcome to the Programming World! " <<endl<< FULL_NAME << endl;
        cout << endl;
    
    
    goto a;

    return 0;
}