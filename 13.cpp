#include <iostream>
using namespace std;


class c_polygon {
public:
   
    virtual float area() {
        return 0;
    }
};


class c_rectangle : public c_polygon {
    float length, breadth;
public:
    void get_data() {
        cout << "Enter length and breadth of rectangle: ";
        cin >> length >> breadth;
    }
    float area() override {
        return length * breadth;
    }
};


class c_triangle : public c_polygon {
    float base, height;
public:
    void get_data() {
        cout << "Enter base and height of triangle: ";
        cin >> base >> height;
    }
    float area() override {
        return 0.5 * base * height;
    }
};


int main() {
    c_polygon *p; 
    c_rectangle r;
    c_triangle t;

    cout << "\nRectangle:\n";
    r.get_data();
    p = &r;
    cout << "Area of Rectangle = " << p->area() << endl;

    cout << "\nTriangle:\n";
    t.get_data();
    p = &t;
    cout << "Area of Triangle = " << p->area() << endl;

    return 0;
}
