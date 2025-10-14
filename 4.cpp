//4 . write a c++ program to find the area of the circle ,sqaure,rectangle,and triangle using inline functions.


#include <iostream>
#define pi 3.14
using namespace std;

inline float circle(float radius) {
	return pi * radius * radius;
}

inline float square(float side) {
	return side * side;
}

inline float rectangle(float length,float breadth) {
	return length * breadth;
}
inline float triangle(float base,float heigth) {
	return 0.5 * base * heigth;
}

int main () {

	float radius,side,length,breadth,base,heigth;

	cout << "Enter the radius : " << endl;
	cin >> radius;
	cout << "Area of  circle : " << circle(radius) << endl;


	cout << "Enter the side : " << endl;
	cin >> side ;
	cout << "Area of sqaure : " << square(side) <<  endl;


	cout << "Enter the Length and Breadth : " << endl;
	cin >> length >> breadth;
	cout << "Area of rectangle : " << rectangle(length,breadth) << endl;

	cout << "Enter the base and heigth : " << endl;
	cin >> base >> heigth ;
	cout <<"Area of triangle : " << triangle(base,heigth) << endl;



}
