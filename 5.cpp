
#include <iostream>
using namespace std;

// Area of circle: one parameter (radius)
double area(double radius) {
    return 3.14159 * radius * radius;
}

// Area of square: one parameter (side)
double area(int side) {
    return side * side;
}

// Area of rectangle: two parameters (length, width)
double area(double length, double width) {
    return length * width;
}

// Area of triangle: three parameters (base, height, dummy to differentiate)
double area(double base, double height, int) {
    return 0.5 * base * height;
}

int main() {
    double radius, length, width, base, height;
    int side;

    // Circle
    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Area of circle: " << area(radius) << endl;

    // Square
    cout << "Enter side of square: ";
    cin >> side;
    cout << "Area of square: " << area(side) << endl;

    // Rectangle
    cout << "Enter length and width of rectangle: ";
    cin >> length >> width;
    cout << "Area of rectangle: " << area(length, width) << endl;

    // Triangle
    cout << "Enter base and height of triangle: ";
    cin >> base >> height;
    cout << "Area of triangle: " << area(base, height, 0) << endl;

    return 0;
}
