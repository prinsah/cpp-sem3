

#include <iostream>
using namespace std;

class BankAccount {
protected:
    long account_number;
    double balance;

public:
    BankAccount(long accNum = 0, double bal = 0.0) : account_number(accNum), balance(bal) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited Rs. " << amount << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn Rs. " << amount << endl;
        } else {
            cout << "Invalid or insufficient funds for withdrawal." << endl;
        }
    }

    virtual void display() const {
        cout << "Account Number: " << account_number << endl;
        cout << "Balance: Rs. " << balance << endl;
    }
};

class SavingsAccount : public BankAccount {
private:
    double rate_of_interest;  // in percentage

public:
    SavingsAccount(long accNum, double bal, double rate) : BankAccount(accNum, bal), rate_of_interest(rate) {}

    void calculateInterest() {
        double interest = balance * rate_of_interest / 100;
        cout << "Interest earned: Rs. " << interest << endl;
    }

    void display() const override {
        cout << "Savings Account Details:" << endl;
        BankAccount::display();
        cout << "Rate of Interest: " << rate_of_interest << "%" << endl;
    }
};

class CurrentAccount : public BankAccount {
private:
    double minimum_balance;
    double service_charge;

public:
    CurrentAccount(long accNum, double bal, double min_bal, double charge) 
        : BankAccount(accNum, bal), minimum_balance(min_bal), service_charge(charge) {}

    void calculateServiceCharge() {
        if (balance < minimum_balance) {
            cout << "Balance below minimum. Service charge of Rs. " << service_charge << " applied." << endl;
            if (balance >= service_charge) {
                balance -= service_charge;
            } else {
                cout << "Insufficient balance to deduct service charge!" << endl;
                balance = 0; // Or handle differently
            }
        } else {
            cout << "No service charge applied. Balance meets minimum requirements." << endl;
        }
    }

    void display() const override {
        cout << "Current Account Details:" << endl;
        BankAccount::display();
        cout << "Minimum Balance Required: Rs. " << minimum_balance << endl;
        cout << "Service Charge: Rs. " << service_charge << endl;
    }
};

int main() {
    // Savings account object
    SavingsAccount sa(1001, 5000, 5.0);
    sa.display();
    sa.calculateInterest();
    sa.deposit(2000);
    sa.withdraw(1000);
    sa.display();

    cout << "\n";

    // Current account object
    CurrentAccount ca(2001, 3000, 2500, 500);
    ca.display();
    ca.withdraw(1000);  // Now balance will be 2000, less than min balance 2500
    ca.calculateServiceCharge();
    ca.display();

    return 0;
}
