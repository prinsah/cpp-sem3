#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    
    Rectangle() {
        length = 0;
        width = 0;
        cout << "Default constructor called." << endl;
    }

    
    Rectangle(int l, int w) {
        length = l;
        width = w;
        cout << "Parameterized constructor called." << endl;
    }

 
    void display() const {
        cout << "Length: " << length << ", Width: " << width << endl;
    }

    
    ~Rectangle() {
        cout << "Destructor called for Rectangle with length = " << length
             << " and width = " << width << endl;
    }
};

int main() {
    cout << "Creating rectangle1 using default constructor:\n";
    Rectangle rectangle1;
    rectangle1.display();

  return 0;
}
