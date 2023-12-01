#include <iostream>

using namespace std;

int main (){
/*
    string v1 = "Gangawan", v2 = "Neo", v3 = "Lodronio";

    cout << v1+ " " + v2 + " " + v3 + " ";

    string FIRST_NAME, LAST_NAME, MIDDLE_NAME, AGE, STUDENT_NUMBER, SEX, BLOCK, CONTACT_NUMBER, BIRTH_MONTH, COLLEGE, BIRTH_DAY, BIRTH_YEAR

    string (FIRST_NAME);
    string (LAST_NAME);
    string (MIDDLE_NAME);
    string (AGE);
    string (STUDENT_NUMBER);
    string (SEX);
    string (BLOCK);
    string (CONTACT_NUMBER);
    string (BIRTH_MONTH);
    string (COLLEGE);
    string (BIRTH_DAY);
    string (BIRTH_YEAR);
    string ();

    string gender, age;

  cout << "Enter Your Age: ";
        getline(cin,age);
    cout << "Enter Your Gender: ";
       getline(cin,gender);
*/
struct age_check
{
    int age =18;
    string gender = "Male";
        if (age >= 18){
            cout << "Pwede Pumasok";
        }else if (age < 18){
            cout << "Bawal Pumasok!";
        }else if (gender=="Male"){
            cout << "Pwede Pumasok!";
        }else{
            cout << "Bawal Pumasok!";
        }
};



       // system ("pause");
        return 0;
 }