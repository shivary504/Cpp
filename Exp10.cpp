#include <iostream>
using namespace std;

// ----------------- Compile-Time Polymorphism (Function Overloading) ----------------- 
class Calculator {
public:
    int add(int a, int b) { return a + b; }
    int add(int a, int b, int c) { return a + b + c; }
    
    // Fixed: Changed return type to float
    float add(float a, float b) { return a + b; } 
};

// ----------------- Run-Time Polymorphism (Function Overriding) ----------------- 
class Shape {
public:
    // Fixed: Added virtual destructor to prevent memory leaks
    virtual ~Shape() {} 
    
    virtual void area() { cout << "Area of generic shape" << endl; }
};

class Rectangle : public Shape {
private:
    float length, width;
public:
    Rectangle(float l, float w) : length(l), width(w) {} 
    
    void area() override { 
        cout << "Area of rectangle = " << length * width << endl; 
    }
};

class Circle : public Shape {
private:
    float radius;
public:
    Circle(float r) : radius(r) {} 
    
    void area() override { 
        cout << "Area of circle = " << 3.1416 * radius * radius << endl;
    }
};

int main() {
    // Compile-time polymorphism
    Calculator calc;
    cout << "--- Compile-Time Polymorphism ---\n";
    cout << "Sum of 2 ints: " << calc.add(10, 20) << endl;
    cout << "Sum of 2 floats: " << calc.add(2.5f, 3.5f) << endl;

    // Run-time polymorphism
    Shape *s1, *s2;
    Rectangle rect(10, 5);
    Circle circ(7);

    s1 = &rect; 
    s2 = &circ; // Fixed: Moved out of the comment line above

    cout << "\n--- Run-Time Polymorphism ---\n";
    s1->area(); 
    s2->area(); 

    return 0;
}