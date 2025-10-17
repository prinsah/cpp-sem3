#include <iostream>
using namespace std;


inline double areaCircle(double radius) {
    return 3.14159 * radius * radius;
}


inline double areaSquare(double side) {
    return side * side;
}


inline double areaRectangle(double length, double width) {
    return length * width;
}


inline double areaTriangle(double base, double height) {
    return 0.5 * base * height;
}

int main() {
    double radius, side, length, width, base, height;

   
    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Area of circle: " << areaCircle(radius) << endl;

    
    cout << "Enter side of square: ";
    cin >> side;
    cout << "Area of square: " << areaSquare(side) << endl;

   
    cout << "Enter length and width of rectangle: ";
    cin >> length >> width;
    cout << "Area of rectangle: " << areaRectangle(length, width) << endl;

    
    cout << "Enter base and height of triangle: ";
    cin >> base >> height;
    cout << "Area of triangle: " << areaTriangle(base, height) << endl;

    return 0;
}
