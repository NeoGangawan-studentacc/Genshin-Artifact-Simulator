#include <iostream>

/*
    placed comments as an review from my learnings in my computer programming
    also watched BroCode's C++ course
    link: https://www.youtube.com/watch?v=-TkoO8Z07hI&t
*/
/*franticly placed ostream because i forgot to switch the
cin flow from << to >> that confused the compiler to this error msg:


    no match for 'operator<<' (operand types are 'std::istream' {aka 'std::basic_istream<char>'} 
    and 'std::string' {aka 'std::__cxx11::basic_string<char>'})


*/
using std::cout;
using std::string;
using std::endl;

    //switched the using namespace std to using std::cout 
    //to avoid repetition

    //

 // namespace std

int main () {


    string (FIRST_NAME);
    string (LAST_NAME);
    string (MIDDLE_INITIAL);
    string (AGE);

    
    a:

    cout << "Enter your First Name: ";

    // cout = "prints"/displays the text within the quotation marks - "this is an example"

    std::cin >> FIRST_NAME;

    // cin = awaits user input


    cout << "Your Name is"<<endl;
    cout << FIRST_NAME <<endl;
    
        cout << endl;
        cout << endl;
        cout << endl;

     cout << "Enter your Middle Initial: ";
    
    std::cin >> MIDDLE_INITIAL;

    cout << "Your Name is"<<endl;
    cout << MIDDLE_INITIAL <<endl;

        cout << endl;
        cout << endl;
        cout << endl;
   
    cout << "Enter your Last Name: ";
    
    std::cin >> LAST_NAME;

    cout << "Your Name is"<<endl;
    cout << LAST_NAME <<endl;
    

        cout << endl;
        cout << endl;
        cout << endl;

 cout << "Enter your Age: ";
    
    std::cin >> AGE;

    cout << "Your Age is"<<endl;
    cout << AGE <<endl;
    

        cout << endl;
        cout << endl;
        cout << endl;

    cout << "Your Full Name is " << FIRST_NAME << " " << MIDDLE_INITIAL << " " << LAST_NAME << std::endl;

        cout << endl;
        cout << endl;
    
    cout << "---------------------------------------------------" << endl;
    cout << "||                                               ||" << endl;
    cout << "||                  Welcome!!!                   ||" << endl;
    cout << "||               "<< FIRST_NAME << " " << MIDDLE_INITIAL << " " << LAST_NAME <<"                 ||" << endl;
    cout << "||                   "<< "Age: "<<AGE <<"                     ||" << endl;
    cout << "||                                               ||" << endl;

    cout << "---------------------------------------------------" << endl;
   /* if (FIRST_NAME) 
    {
         code
    } */
       // draft code (:|)

    /*double price1 = 12.99;
    double price2 = 4.32;
    double price3 = 5.50;

    double sum = price1 + price2;
*/
    
    goto a;
        return 0;

        
}
