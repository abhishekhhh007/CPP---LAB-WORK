//3. Write a program to create a Rectangle class with two private data members: length and width.
//Create a default constructor that initialises both members to 0 and a parameterized constructor.
//Create two different objects of class Rectangle using these different types of constructors and display
//their values using a member function. Write a destructor that prints a message when an object is
//destroyed
//


#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:

    Rectangle() {
        length = 0;
        width = 0;
        cout << "Default constructor called." << endl;
    }


    Rectangle(double l, double w) {
        length = l;
        width = w;
        cout << "Parameterized constructor called." << endl;
    }


    void display() const {
        cout << "Length: " << length << ", Width: " << width << endl;
    }


    ~Rectangle() {
        cout << "Destructor called for Rectangle with Length = " << length
             << " and Width = " << width << endl;
    }
};

int main() {

    Rectangle rect1;
    rect1.display();

    cout << endl;


    Rectangle rect2(10.5, 5.2);
    rect2.display();

    cout << endl;

    cout << "Program ending, destructors will be called automatically." << endl;
}
