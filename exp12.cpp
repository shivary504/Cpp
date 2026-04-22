#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    // CRITICAL FIX: Virtual destructor
    // Always include this in base classes when using virtual functions
    virtual ~Shape() {} 

    virtual void area() {
        cout << "Area of generic shape is unknown." << endl;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
private:
    float length, width;
public:
    // BEST PRACTICE: Use member initializer lists
    Rectangle(float l, float w) : length(l), width(w) {}

    void area() override {
        cout << "Area of rectangle = " << length * width << endl;
    }
};

// Derived class: Circle
class Circle : public Shape {
private:
    float radius;
public:
    // BEST PRACTICE: Use member initializer lists
    Circle(float r) : radius(r) {}

    void area() override {
        cout << "Area of circle = " << 3.14159f * radius * radius << endl;
    }
};

int main() {
    Shape *s1, *s2;
    Rectangle rect(10, 5);
    Circle circ(7);

    // Assign derived objects to base class pointers
    s1 = &rect;
    s2 = &circ;

    cout << "--- Virtual Function Demonstration ---\n";
    s1->area(); // Dynamically binds to Rectangle::area()
    s2->area(); // Dynamically binds to Circle::area()

    return 0;
}