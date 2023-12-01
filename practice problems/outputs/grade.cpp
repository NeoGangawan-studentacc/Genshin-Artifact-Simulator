#include <iostream>
using namespace std;

int main(){
int grade;
a:
        cout << "Enter Your Grade: ";
        cin >> grade;
            
            if((98 <= grade) && (grade <= 100))
                {cout << endl << "Grade: Outstanding!!!\n";
            }else if((95 <= grade) && (grade <= 97)){
                cout << endl <<  "Grade: Very satisfactory!!!\n";
            }else if((90 <= grade) && (grade <= 94)){
                cout << endl <<  "Grade: Satisfactory!!!\n";
            }else if((85 <= grade) && (grade <= 89)){
                cout << endl <<  "Grade: Good\n";
            }else if((80 <= grade) && (grade <= 84)){
                cout << endl <<  "Grade: Fair\n";
            }else if((75 <= grade) && (grade <= 79)){
                cout << endl <<  "Grade: Poor\n";
            }else if((0 < grade) && (grade <= 74)){
                cout << endl <<  "Grade: Failed.\n";
            }else
                cout << "Invalid grade\n";         
goto a;
    return 0;
};