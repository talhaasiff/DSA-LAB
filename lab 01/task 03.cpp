//      task 03
#include <iostream>
using namespace std;

class Student {
    public:
        int rollNumber, marks;

        void display(){
            cout << "Roll Number: " << rollNumber << endl;
            cout << "Marks: " << marks << endl;
        }
};

int main(){
    Student s1, s2;
    s1.rollNumber = 1;
    s1.marks = 75;
    s2.rollNumber = 2;
    s2.marks = 90;

    cout << "INITIAL OUTPUT" << endl;
    s1.display();
    s2.display();

    s1.marks = 80;

    cout << endl << "After changing s1 " << endl << endl;
    s1.display();
    s2.display();

    return 0;
}