#include <iostream>
#include <string>

using namespace std;

class Patient {
public:
    double bill;
    string date;

    void info() {
        cout << "The billing amount is " << bill << "\n"; 
        cout << "The date of appointment is " << date << endl;
    }
};

int main() {
    Patient P1, P2;

  
    cout << "Enter Patient 1 bill amount: \n"; 
    cin >> P1.bill;
    cout << "Enter Patient 1 date: ";
    cin >> P1.date;

   
    cout << "Enter Patient 2 bill amount: \n";
    cin >> P2.bill;
    cout << "Enter Patient 2 date: ";
    cin >> P2.date;

    cout << "Patients info:" << endl;
    P1.info(); 
    P2.info();

    return 0;
}
