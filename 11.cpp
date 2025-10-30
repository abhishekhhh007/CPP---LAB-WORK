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
private:
    int account_number;
    double balance;

public:

    void input() {
        cout << "Enter Account Number: ";
        cin >> account_number;
        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << ", New Balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn: " << amount << ", Remaining Balance: " << balance << endl;
        }
    }

    void display() {
        cout << "Account Number: " << account_number << endl;
        cout << "Balance: " << balance << endl;
    }

    double getBalance() {
        return balance;
    }

    void setBalance(double newBalance) {
        balance = newBalance;
    }
};
class SavingsAccount : public BankAccount {
private:
    double rate_of_interest;

public:
    void input() {
        BankAccount::input();
        cout << "Enter Rate of Interest (%): ";
        cin >> rate_of_interest;
    }

    void calculateInterest() {
        double interest = (getBalance() * rate_of_interest) / 100;
        cout << "Interest Calculated: " << interest << endl;
        setBalance(getBalance() + interest);
    }

    void display() {
        cout << "\n--- Savings Account Details ---" << endl;
        BankAccount::display();
        cout << "Rate of Interest: " << rate_of_interest << "%" << endl;
    }
};
class CurrentAccount : public BankAccount {
private:
    double minimum_balance;
    double service_charge;

public:
    void input() {
        BankAccount::input();
        cout << "Enter Minimum Balance: ";
        cin >> minimum_balance;
        cout << "Enter Service Charge: ";
        cin >> service_charge;
    }

    void calculateServiceCharge() {
        if (getBalance() < minimum_balance) {
            cout << "Balance below minimum! Service charge of " << service_charge << " applied." << endl;
            setBalance(getBalance() - service_charge);
        } else {
            cout << "No service charge applied. Balance is sufficient." << endl;
        }
    }

    void display() {
        cout << "\n--- Current Account Details ---" << endl;
        BankAccount::display();
        cout << "Minimum Balance: " << minimum_balance << endl;
        cout << "Service Charge: " << service_charge << endl;
    }
};
int main() {
    cout << "===== SAVINGS ACCOUNT =====" << endl;
    SavingsAccount sa;
    sa.input();

    double depositAmt, withdrawAmt;
    cout << "Enter amount to deposit: ";
    cin >> depositAmt;
    sa.deposit(depositAmt);

    sa.calculateInterest();

    cout << "Enter amount to withdraw: ";
    cin >> withdrawAmt;
    sa.withdraw(withdrawAmt);

    sa.display();

    cout << "\n===== CURRENT ACCOUNT =====" << endl;
    CurrentAccount ca;
    ca.input();

    cout << "Enter amount to withdraw: ";
    cin >> withdrawAmt;
    ca.withdraw(withdrawAmt);

    ca.calculateServiceCharge();
    ca.display();
}
