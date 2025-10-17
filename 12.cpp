// 12.

#include <iostream>
#include <string>
using namespace std;

class OnlineShopping {
private:
    string item_name;
    int quantity;
    float unit_price;

public:
    void inputItemDetails() {
        cout << "Enter item name: ";
        cin >> item_name;
        cout << "Enter quantity: ";
        cin >> quantity;
        cout << "Enter unit price: ";
        cin >> unit_price;
    }

    void displayItemDetails() {
        cout << "Item Name: " << item_name << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Unit Price: Rs. " << unit_price << endl;
    }

    float Cost() {
        return quantity * unit_price;
    }
};

class ShippingDetails {
protected:
    float shipping_charge;

public:
    void inputShippingDetails() {
        cout << "Enter shipping charge: Rs. ";
        cin >> shipping_charge;
    }

    void displayShippingDetails() {
        cout << "Shipping Charge: Rs. " << shipping_charge << endl;
    }

    float getShippingCharge() {
        return shipping_charge;
    }
};

class Bill : public OnlineShopping, public ShippingDetails {
private:
    float total_amount;

public:
    void calculateBill() {
        float item_cost = Cost();
        total_amount = item_cost + shipping_charge;
    }

    void displayBill() {
        
        displayItemDetails();
        displayShippingDetails();
        cout << "Item Total: Rs. " << Cost() << endl;
        cout << "Shipping Charge: Rs. " << getShippingCharge() << endl;
        cout << "TOTAL AMOUNT: Rs. " << total_amount << endl;
        
    }

    void inputAllDetails() {
        cout << "Enter item details:" << endl;
        inputItemDetails();
        cout << "\nEnter shipping details:" << endl;
        inputShippingDetails();
        calculateBill();
    }
};

int main() {
    Bill bill1, bill2;
    

    cout << "\nEnter details for Bill 1:" << endl;
    bill1.inputAllDetails();

    cout << "\nEnter details for Bill 2:" << endl;
    bill2.inputAllDetails();

    cout << "\nBILL 1 :" << endl;
    bill1.displayBill();

    cout << "\nBILL 2 :" << endl;
    bill2.displayBill();
    
}
