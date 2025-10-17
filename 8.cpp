//C++ program to illustrate the use of unary operator overloading, increment ++ operator
//overloading
//

#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:
    Counter(int c = 0) : count(c) {}

    void display() const {
        cout << "Count = " << count << endl;
    }

   
    Counter& operator++() {
        ++count;
        return *this;
    }

    
    Counter operator++(int) {
        Counter temp = *this;
        count++;
        return temp;
    }
};

int main() {
    int initialValue;
    cout << "Enter initial count value: ";
    cin >> initialValue;

    Counter c(initialValue);

    cout << "Initial ";
    c.display();

    ++c;  
    cout << "After prefix ++ ";
    c.display();

    c++;  
    cout << "After postfix ++ ";
    c.display();

    return 0;
}




