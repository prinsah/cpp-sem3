#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;

public:
   
    void readData() {
        cout << "Enter brand: ";
        cin >> brand;
        cout << "Enter model: ";
        cin >> model;
        cout << "Enter year: ";
        cin >> year;
    }

   
    void displayData() const {
        cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << endl;
    }
};

int main() {
    Car car1, car2, car3;

    cout << "Enter details for Car 1:\n";
    car1.readData();

    cout << "\nEnter details for Car 2:\n";
    car2.readData();

    cout << "\nEnter details for Car 3:\n";
    car3.readData();

    cout << "\n--- Car Details ---\n";
    cout << "Car 1: ";
    car1.displayData();

    cout << "Car 2: ";
    car2.displayData();

    cout << "Car 3: ";
    car3.displayData();

    return 0;
}
