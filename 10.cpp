#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void input() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore(); 
    }

    void display() const {
        cout << "Name: " << name << "\nAge: " << age << endl;
    }
};

class Student : public Person {
private:
    int roll_number;

public:
    void inputDetails() {
        cout << "Enter roll number: ";
        cin >> roll_number;
        cin.ignore();
    }

    void showDetails() const {
        cout << "Roll Number: " << roll_number << endl;
    }
};

int main() {
    Student s;

    s.input();         
    s.inputDetails();   

    cout << "\nPerson Details:\n";
    s.display();        

    cout << "Student Details:\n";
    s.showDetails();  

    return 0;
}
