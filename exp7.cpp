#include <iostream>
using namespace std;
class Complex
{
private:
float real;	// Real part
float imag;	// Imaginary part
public: 
Complex()
{
real = 0;
imag = 0;
}
Complex(float r, float i)
{
real = r; imag = i;
}
Complex operator+(Complex c)
{
Complex temp;
temp.real = real + c.real;	
temp.imag = imag + c.imag;	
return temp;
}
Complex operator*(Complex c)
{
Complex temp;
temp.real = real * c.real - imag * c.imag; 
temp.imag = real * c.imag + imag * c.real; 
return temp;
}
friend istream& operator>>(istream &in, Complex &c)
{
cout << "Enter real part: "; in >> c.real;
cout << "Enter imaginary part: "; in >> c.imag;
return in;
}
friend ostream& operator<<(ostream &out, Complex c)
{
out << c.real;
if (c.imag >= 0)
out << " + " << c.imag << "i"; else
out << " - " << -c.imag << "i"; return out;
}
}; 
int main()
{
Complex c1, c2, sum, product;
cout << "--- Input first complex number ---\n"; cin >> c1;
cout << "\n--- Input second complex number ---\n"; cin >> c2;
sum = c1 + c2;
product = c1 * c2;
cout << "\nSum of complex numbers: " << sum << endl; cout << "Product of complex numbers: " << product << endl;
return 0;
}