#include<iostream>
using namespace std;
class complex
{
    public:
    float real,imaginary;
    complex()
    {
        real=0;
        imaginary=0;

    }
    complex operator+(complex);
    complex operator*(complex);
    friend ostream &operator<<(ostream&,complex&);
    friend istream &operator>>(istream&,complex&);
};
complex complex::operator+(complex n)
{
    complex temp;
    temp.real=real+n.real;
    temp.imaginary=imaginary+n.imaginary;
    return (temp);
}
complex complex::operator*(complex n)
{
    complex temp;
    temp.real=(real*n.real)-(imaginary*n.imaginary);
    temp.imaginary=(real*n.imaginary)-(imaginary*n.imaginary);
    return(temp);
}
istream &operator>>(istream& take,complex& n )
{
    take>>n.real;
    take>>n.imaginary;
    return(take);
}
ostream &operator<<(ostream& pr,complex& n)
{
    pr<<n.real;
    pr<<"+"<<n.imaginary<<"i";
    return(pr);
}
int main()
{
    complex a,b,c,d;
    cout<<"Enter the real part and imaginary part of the first number: "<<endl;
    cin>>a;
    cout<<"Enter the real part and imaginary part of the second number: "<<endl;
    cin>>b;
    c=a+b;
    d=a*b;
    cout<<"The sum of the two complex numbers is:  "<<c<<endl;
    cout<<"The product of the two complex numbers is:  "<<d<<endl;
    return 0;


}