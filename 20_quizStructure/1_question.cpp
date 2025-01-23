#include<iostream>
using namespace std;
struct Employee{
    string name;
    int id;
    string designation;
    float salary;
};

Employee Employees[5];
void EmployeeDetails(){
    for (int i = 0; i < 5; i++)
    {
        cout<<"Enter details for Employee "<<i+1<<":"<<endl;
        cout<<"Name: ";
        getline(cin, Employees[i].name);
        cout<<"ID: ";
        cin>>Employees[i].id;
        cin.ignore();
        cout<<"Designation: ";
        getline(cin, Employees[i].designation);
        cout<<"Salary: ";
        cin>>Employees[i].salary;
        cin.ignore();
    }
    
}
void DisplayEmployeeDetails(){
    cout<<"Employee Details: "<<endl;
    cout<<"+---------+-----+-------------+----------+"<<endl;
    cout<<"| Name    | ID  | Designation | Salary   |"<<endl;
    cout<<"+---------+-----+-------------+----------+"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<"| "<<Employees[i].name<<" | "<<Employees[i].id<<" | "<<Employees[i].designation<<" | "<<Employees[i].salary<<" | "<<endl;
    }
    cout<<"+---------+-----+-------------+----------+"<<endl;
    
}

void HighestSalaryEmployee(){
    int max=0;
    for (int i = 0; i < 5; i++)
    {
        if (max < Employees[i].salary)
        {
            max=Employees[i].salary;
        }
    }
    cout<<"Employee with the highest salary: "<<endl;
    for (int j = 0; j < 5; j++)
    {
        if (max==Employees[j].salary)
        {
            cout<<"Name: "<<Employees[j].name<<endl;
            cout<<"ID: "<<Employees[j].id<<endl;
            cout<<"Designation: "<<Employees[j].designation<<endl;
            cout<<"Salary: "<<Employees[j].salary<<endl;
        }
    }
    
}
int main()
{
    EmployeeDetails();
    cout<<endl;
    DisplayEmployeeDetails();
    cout<<endl;
    HighestSalaryEmployee();
    return 0;
}