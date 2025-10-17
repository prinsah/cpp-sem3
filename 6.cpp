#include <iostream>
#include <string>
using namespace std;

class TelephoneBill {
private:
    string Name;
    string Address;
    string TelNo;
    int NoOfCalls;

public:
   
    void inputDetails() {
        cout << "Enter Name: ";
        getline(cin, Name);
        cout << "Enter Address: ";
        getline(cin, Address);
        cout << "Enter Telephone Number: ";
        getline(cin, TelNo);
        cout << "Enter Number of Calls: ";
        cin >> NoOfCalls;
        cin.ignore(); 
    }

    // Friend function declaration
    friend void calculateBill(const TelephoneBill &);
};


void calculateBill(const TelephoneBill &tb) {
    const int chargePerCall = 2;
    int amount = tb.NoOfCalls * chargePerCall;

    cout << "\n--- Telephone Bill ---" << endl;
    cout << "Name: " << tb.Name << endl;
    cout << "Address: " << tb.Address << endl;
    cout << "Telephone Number: " << tb.TelNo << endl;
    cout << "Number of Calls: " << tb.NoOfCalls << endl;
    cout << "Amount to be paid: Rs. " << amount << endl;
}

int main() {
    TelephoneBill customer;

    cout << "Enter customer details:\n";
    customer.inputDetails();

    calculateBill(customer);

    return 0;
}

