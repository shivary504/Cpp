#include <iostream> 
#include <string> 
using namespace std;
 class Employee
{
protected: int empId;
string empName; float basicSalary;
public:
void getEmployeeInfo()
{
cout << "Enter Employee ID: "; cin >> empId;
cin.ignore();
cout << "Enter Employee Name: "; getline(cin, empName);
cout << "Enter Basic Salary: "; cin >> basicSalary;
}
};
class Department : public Employee
{
protected:
string deptName;
public:
void getDepartmentInfo()
{
cin.ignore();
cout << "Enter Department Name: "; getline(cin, deptName);
}
};
class PF : public Department
{
protected:
float pfAmount;
public:
void calculatePF()
{
pfAmount = basicSalary * 0.12; 
}
void displayPFInfo()
{
cout << "\n--- Employee Details (Multilevel Inheritance) ---\n"; cout << "Employee ID	: " << empId << endl;
cout << "Employee Name : " << empName << endl; cout << "Department	: " << deptName << endl; cout << "Basic Salary : " << basicSalary << endl; cout << "PF Amount (12%) : " << pfAmount << endl;
}
};
class Project : public Employee
{
protected:
string projectName;
public:
void getProjectInfo()
{
cin.ignore();
cout << "Enter Project Name: "; getline(cin, projectName);
}
void displayProjectInfo()
{
cout << "\n--- Employee Project Info (Hierarchical Inheritance) ---\n"; cout << "Employee ID	: " << empId << endl;
cout << "Employee Name : " << empName << endl; cout << "Project Name  : " << projectName << endl;
}
};
int main()
{
PF emp1;
cout << "--- Enter Employee Info for PF ---\n"; 
emp1.getEmployeeInfo(); 
emp1.getDepartmentInfo(); 
emp1.calculatePF();
emp1.displayPFInfo();
Project emp2;
cout << "\n--- Enter Employee Info for Project ---\n"; 
emp2.getEmployeeInfo();
emp2.getProjectInfo(); 
emp2.displayProjectInfo();
return 0;
}