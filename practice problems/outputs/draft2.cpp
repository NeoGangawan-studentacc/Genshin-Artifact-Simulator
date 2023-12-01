#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    int age;
    string address;
    string major;
};

int main() {
    Student student;

    // Collect student information
    cout << "Student Enrollment Form" << endl;
    cout << "-----------------------" << endl;

    cout << "Name: ";
    getline(cin, student.name);

    cout << "Age: ";
    cin >> student.age;
    cin.ignore(); // Clear the newline character from the input buffer

    cout << "Address: ";
    getline(cin, student.address);

    cout << "Major: ";
    getline(cin, student.major);

    // Print the collected information in a neat biodata format
    cout << "\nBiodata" << endl;
    cout << "-------" << endl;
    cout << "Name: " << student.name << endl;
    cout << "Age: " << student.age << " years" << endl;
    cout << "Address: " << student.address << endl;
    cout << "Major: " << student.major << endl;

    return 0;
}
