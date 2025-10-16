//5. Write a C++ program to find area of circle, square, rectangle and triangle using function
//overloading


#include <iostream>
#include <cmath>
using namespace std;

class math {
public:

    float area(float radius) {
        return 3.14 * radius * radius;

    }

    int area(int side) {
        return side * side ;

    }
    float area(float length, float width) {
        return length * width ;
    }
    double area(double base,double height) {
        return 0.5 * base * height;

    }


};

int main() {
    math m;

    int side;
    float radius, length, width;
    double base,height;

    cout << "Enter radius : " << endl;
    cin >> radius;
    cout << "Area of Circle : " <<m.area(radius)<< endl;

    cout << "Enter side : " << endl;
    cin >> side;
    cout << "Area of Square : " << m.area(side)<< endl;

    cout << "Enter Length and Width : " << endl;
    cin >> length >> width;
    cout << "Area of Rectangle : " << m.area(length, width) << endl;

    cout << "Enter Base and Height" << endl;
    cin >> base >> height;
    cout << "Area of Triangle : " << m.area(base,height)<< endl;

}
