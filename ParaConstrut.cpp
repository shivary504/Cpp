#include<iostream>
using namespace std;
class add
{
    public:
    add(int a, int b)
    {
        int c=a+b;
        cout<<"The sum is: "<<c;
    }
};
int main()
{
    add ad(20,30);
    return 0;
}