#include <iostream>
#include <string>
using namespace std;


class online_shopping {
protected:
    string item_name;
    int quantity;
    float unit_price;

public:
    void get_shopping_details() {
        cout << "Enter item name: ";
        cin >> item_name;
        cout << "Enter quantity: ";
        cin >> quantity;
        cout << "Enter unit price: ";
        cin >> unit_price;
    }
};


class Shipping_details {
protected:
    float shipping_charge;

public:
    void get_shipping_details() {
        cout << "Enter shipping charge: ";
        cin >> shipping_charge;
    }
};


class Bill : public online_shopping, public Shipping_details {
public:
    void display_bill() {
        float total = (quantity * unit_price) + shipping_charge;
        cout << "\n----- BILL DETAILS -----\n";
        cout << "Item Name: " << item_name << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Unit Price: " << unit_price << endl;
        cout << "Shipping Charge: " << shipping_charge << endl;
        cout << "-------------------------" << endl;
        cout << "Total Amount: " << total << endl;
    }
};


int main() {
    Bill b;
    b.get_shopping_details();
    b.get_shipping_details();
    b.display_bill();
    return 0;
}
