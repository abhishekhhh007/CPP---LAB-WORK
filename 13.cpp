//13. Write a C++ program to explain virtual functions by creating a base class c_polygon, which has a 
//virtual function area(). Two classes, c_rectangle and c_traingle, are derived from c_polygon, and 
//these classes have area() to calculate and return the area of a rectangle and a triangle, respectively.
//

#include <iostream>
using namespace std;

class C_Polygon {

public:

    virtual void area() {
        cout << "Area of polygon (base class)" << endl;
    }

};

class C_Rectangle : public C_Polygon {

	private:

           float length, breadth;
      public:

        void getData() {

        cout << "Enter length and breadth of rectangle: " << endl;
        cin >> length >> breadth;
    }

    void area() override {
        cout << "Area of Rectangle = " << length * breadth << endl;
    }

};

class C_Triangle : public C_Polygon {

  private:

    float base, height;

  public:

    void getData() {
        cout << "Enter base and height of triangle : " << endl;
        cin >> base >> height;
    }


    void area() override {
        cout << "Area of Triangle = " << 0.5 * base * height << endl;
	
    }

};

int main() {

    C_Polygon *poly;
    C_Rectangle rect;
    C_Triangle tri;

    poly = &rect;
    rect.getData();
    poly->area();

    cout << "\n";

    poly = &tri;
    tri.getData();
    poly->area();
}
