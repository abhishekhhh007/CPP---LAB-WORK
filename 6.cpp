//Write a C++ program to implement a telephone bill class with Name, Address, Tel. No., No. of calls 
//as data members. Compute the amount to be paid if the charges per call is Rs. 2/-. using friend 
//function


#include <iostream>
#include <string>
using namespace std;

class TelephoneBill {
    string name;
    string address;
    long tel_no;
    int no_of_calls;
    float amount;

public:
    void input() {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Address: ";
        getline(cin, address);
        cout << "Enter Telephone Number: ";
        cin >> tel_no;
        cout << "Enter Number of Calls: ";
        cin >> no_of_calls;
    }
    friend void calculateBill(TelephoneBill &t);
};
void calculateBill(TelephoneBill &t) {
    float charge_per_call = 2.0;
    t.amount = t.no_of_calls * charge_per_call;

    cout << "\n---- Telephone Bill ----" << endl;
    cout << "Name: " << t.name << endl;
    cout << "Address: " << t.address << endl;
    cout << "Telephone No: " << t.tel_no << endl;
    cout << "Number of Calls: " << t.no_of_calls << endl;
    cout << "Amount to be Paid: Rs. " << t.amount << endl;
}

int main() {
    TelephoneBill T;
    T.input();
    calculateBill(T);
    return 0;
}
