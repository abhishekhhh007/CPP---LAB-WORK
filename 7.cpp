//7. Write a program to define a class Time having private members hours, minutes, and seconds. 
//Write member functions 
//1. To input values to data members 
//2. To display Time in Hour:minute: second format.  
//3. To find the sum of two Time objects using a friend function




#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    void inputTime() {
        cout << "Enter hours: " << endl;
        cin >> hours;

        cout << "Enter minutes: " << endl;
        cin >> minutes;

        cout << "Enter seconds: " << endl;
        cin >> seconds;
    }

    void displayTime() {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }

    
    friend Time addTime(Time T1, Time T2);
};

Time addTime(Time T1, Time T2) {
    Time tym;
    tym.seconds = T1.seconds + T2.seconds;
    tym.minutes = T1.minutes + T2.minutes + tym.seconds / 60;
    tym.seconds = tym.seconds % 60;
    tym.hours = T1.hours + T2.hours + tym.minutes / 60;
    tym.minutes = tym.minutes % 60;

    return tym;
}

int main() {
    Time T1, T2, T3;

    cout << "Enter 1st Time: " << endl;
    T1.inputTime();

    cout << "Enter 2nd Time: " << endl;
    T2.inputTime();

    T3 = addTime(T1, T2);

    cout << "1st Time: ";
    T1.displayTime();

    cout << "2nd Time: ";
    T2.displayTime();

    cout << "Sum of Times: ";
    T3.displayTime();

}
