#include<iostream>
using namespace std;
class myclass
{
    private:
    int x;
    static int count;
    public:
    myclass()
    {
        count++;

    }
    static int showcount()
    {
        return count;
    }
};
int myclass::count=0;
int main()
{
    cout<<"Intial count : "<<myclass::showcount()<<endl;
    myclass m1,m2;
    cout<<"After creating objects: "<<myclass::showcount()<<endl;
    return 0;
}