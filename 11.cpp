//Write a program to create a base class BankAccount with attributes like account_number and
//balance, and functions deposit() and withdraw().
//Derive two classes:
//1. SavingsAccount with data member rate_of_interst and an additional function
//calculateInterest() and display it.
//2. CurrentAccount, which requires maintaining a minimum balance and an additional
//function to calculate servicecharge() and reduce it from the balance, and display the details.
//Demonstrate inheritance by performing operations on objects of both derived classes.
//

#include <iostream>
using namespace std;


class BankAccount {
	protected:
		
    int account_number;
    float balance;

	public:

      void input() {

        cout << "Enter Account Number: " << endl;
        cin >> account_number;
        cout << "Enter  Balance: "<<endl;
        cin >> balance;
    }

    void deposit() {
        float amount;
        cout << "Enter Deposited amount : "<<endl;
        cin >> amount;
        balance += amount;
        cout << "Deposited : " << amount << endl;
    }

    void withdraw() {
        float amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (amount <= balance) {
            balance = balance -  amount;
            cout << "Withdrawn: " << amount << endl;
        } 
	else
       	{
            cout << "Balance is low !" << endl;
        }
    }

    void display() {
        cout << "Account No: " << account_number << endl;
        cout << "Balance: " << balance << endl;
    }
};


class SavingsAccount : public BankAccount {
    float rate_of_interest;

	public:

    void Rate() {
        cout << "Enter rate of interest %: " << endl;
        cin >> rate_of_interest;
    }

    void calculateInterest() {
        float interest = (balance * rate_of_interest) / 100;
        cout << "Interest get : " << interest << endl;
        balance = balance +  interest;
        cout << "Balance after adding interest: " << balance << endl;
    }
};


class CurrentAccount : public BankAccount {

    float min_balance;
    float service_charge;

	public:


    void setMinBalance() {
	    
        cout << "Enter minimum balance required: " <<endl;
        cin >> min_balance;

        cout << "Enter service charge: " << endl;
        cin >> service_charge;
    }

    void checkBalance() {
        if (balance < min_balance) {
            cout << "Balance below minimum! Service charge of " << service_charge << " applied.\n";
            balance -= service_charge;
        }
    }

    void displayDetails() {
        cout << "Account No: " << account_number << endl;
        cout << "Balance after : " << balance << endl;
    }
};

int main() {
    
    SavingsAccount s;
    s.input();
    s.Rate();
    s.deposit();
    s.withdraw();
    s.calculateInterest();
    s.display();

    
    CurrentAccount c;
    c.input();
    c.setMinBalance();
    c.deposit();
    c.withdraw();
    c.checkBalance();
    c.displayDetails();

  
}
