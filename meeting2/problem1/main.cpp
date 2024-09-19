#include <iostream>
using namespace std;
int main()
{
int grosssalary, Tax, Installment, Insurance, Netsalary;
string fullName;
cout << "Type your full name: ";
getline (cin, fullName);
cout << "Your name is: " << fullName <<endl;
cout << "Gross: ";
cin >>grosssalary;
cout << "Gross= " <<grosssalary <<endl;
Tax = 0.2*grosssalary;
cout << "Tax= (20%) of Rp" <<grosssalary<<" = "<<"Rp"<<Tax<<endl;
cout << "Installment: ";
cin >>Installment;
cout << "Insurance: ";
cin >> Insurance;
Netsalary = grosssalary-Tax-Installment-Insurance;
cout << "Netsalary= " <<Netsalary<<endl;

cout << "----------------------"<<endl;
cout << "Payslip for Employee" <<endl;
cout << "----------------------" <<endl;
cout << "fullName: " <<fullName<<endl;
cout << "Grosssalary: Rp" <<grosssalary<<endl;
cout << "Tax: Rp" <<Tax<<endl;
cout << "Installment: Rp" <<Installment<<endl;
cout << "Insurance: Rp" <<Insurance<<endl;
cout << "Netsalary: Rp" <<Netsalary<<endl;


}