#include <iostream>

    using std::cout;
    using std::cin;
    using std::string;
    using std::endl;
    using std::getline;


int main (){

//STRING BLOCK

    string FIRST_NAME, LAST_NAME, MIDDLE_NAME, AGE, STUDENT_NUMBER, SEX, BLOCK, CONTACT_NUMBER, BIRTH_MONTH, COLLEGE, BIRTH_DAY, BIRTH_YEAR;

    string DATE_OF_BIRTH = BIRTH_MONTH + " "+ BIRTH_DAY + " " + BIRTH_YEAR;


        cout << "----------------------------------------\n";
        cout << "|                                      |\n";
        cout << "|      *Student Enrollment Form*       |\n";
        cout << "|                                      |\n";
        cout << "----------------------------------------\n";
        //Student's data input 
        cout << "Enter your First Name: ";

            getline(cin,FIRST_NAME);

                //cin.ignore();
        
        cout << "Enter your Middle Name: ";
        
            getline(cin,MIDDLE_NAME);
    
                //cin.ignore();

        cout << "Enter your Last Name: ";
        
            getline(cin,LAST_NAME);

                   // cin.ignore();

                        string STUDENT_NAME = FIRST_NAME + " "+ MIDDLE_NAME+" " + LAST_NAME;

        cout << "Enter your Age: ";

            getline(cin,AGE);

                //cin.ignore();

        
        cout << "Enter your Student Number: ";

            getline(cin,STUDENT_NUMBER);

                //cin.ignore();

        cout << "Enter your Sex (Biological Gender): ";    

            getline(cin,SEX);

               // cin.ignore();

/*        cout << "Enter your block: ";

            getline(cin,BLOCK);

        cout << "Enter your contact number: ";

            getline(cin,var);

        cout << "Enter your birtt m";

            getline(cin,var);

        cout << "Enter your (variable)";

            getline(cin,var);

        cout << "Enter your (variable)";

            getline(cin,var);

        cout << "Enter your (variable)";

            getline(cin,var);

        cout << "Enter your (variable)";

            getline(cin,var);

        cout << "Enter your (variable)";

            getline(cin,var);

        cout << "Enter your (variable)";

            getline(cin,var);

        cout << "Enter your (variable)";

            getline(cin,var);

        cout << "Enter your (variable)";

            getline(cin,var);

        cout << "Enter your (variable)";

            getline(cin,var);

        cout << "Enter your (variable)";

            getline(cin,var);

        cout << "Enter your (variable)";

            getline(cin,var);

        cout << "Enter your (variable)";

            getline(cin,var);

        cout << "Enter your (variable)";

            getline(cin,var);
*/
        cout << endl;
        cout << endl;
        cout << endl;


        //Student's Displayed Data shows here
        cout << "}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{\n";
        cout << "|||\n";
        cout << "|||    Student's Information: \n";
        cout << "|||\n";
        cout << "|||    Student Name: " << STUDENT_NAME << endl;
        cout << "|||    Student Number: " << STUDENT_NUMBER << endl;
        cout << "|||    Age: " << AGE << endl;
        cout << "|||    Sex: " << SEX << endl;
        cout << "|||\n";
        cout << "}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{\n";

/*
added some ASCII borders but not the right side
because of the data is dynamic (interchangable)
i might mess up the border positioning

*/
        system ("pause");
    return 0;
}