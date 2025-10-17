//10.Create a base class Person with data members name and age, and a member function display(). 
//Derive a class Student from Person that adds a data member roll_number and a member functionshowDetails(). Demonstrate single inheritance by creating an object of the Student class and calling 
//both base and derived class functions.




#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;

    void display() {
        cout << "\n------ Person Details ------" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class Student : public Person {
public:
    int roll_number;

    void showDetails() {
        cout << "Roll Number: " << roll_number << endl;
    }
};
int main() {
    Student s;

    cout << "Enter name: ";
    cin >> s.name;

    cout << "Enter age: ";
    cin >> s.age;

    cout << "Enter roll number: ";
    cin >> s.roll_number;

    s.display();
    s.showDetails();
}
