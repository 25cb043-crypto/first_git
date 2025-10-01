#include <iostream>
using namespace std;
int main()
{
    string student_name;
    int roll_number;
    float marks[5]; // Array for up to 5 subjects
    int subject;
    // input of student details:
    cout << " ENTER STUDENT NAME: ";
    cin  >> student_name;
    cout << " ENTER ROLL NUMBER: ";
    cin >> roll_number;
    cout << "ENTER NUMBER OF SUBJECTS(3 TO 5) : ";
    cin >> subject;
    cout << "ENTER the marks of " << subject << " subject(s): ";
    for(int i = 0; i < subject; i++)
    {
        cin >> marks[i];
    }
    // student details:
    cout << "Student details !" << endl;
    cout << " NAME : " << student_name << endl;
    cout << " ROLL NUMBER : " << roll_number << endl;
    cout << " MARKS : ";
    for (int i = 0; i < subject; i++) {
        cout << marks[i] << " ";
    }
    cout << endl;
}