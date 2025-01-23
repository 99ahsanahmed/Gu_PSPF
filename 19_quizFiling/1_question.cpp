#include<iostream>
#include <fstream>
using namespace std;
struct employees{
    int id;
    string name;
    long long int salary;
};
employees employee[2];

void searchEmployee() {
    cout << "Search for employee by ID: " << endl;
    int id;
    cin >> id;
    
    bool found = false;    
    for (int j = 0; j < 2; j++) {
        if (id == employee[j].id) {
            cout << "Found employee: " << endl;
            cout << "ID: " << employee[j].id << endl;
            cout << "Name: " << employee[j].name << endl;
            cout << "Salary: " << employee[j].salary << endl;
            found = true; 
            break; 
        }
    }
    
    if (!found) {
        cout << "Not Found" << endl;
    }
}


int avgSalary(){
    int sum=0;
    for (int i = 0; i < 2; i++)
    {
        sum+=employee[i].salary;
    }
    return sum/2;
}
int main()
{
    
    for (int i = 0; i < 2; i++)
    {
        cout<<"Enter details of employee "<<i+1<<endl;
        cout << "Enter ID: ";
        cin >> employee[i].id;
        cout << "Enter Name: ";
        cin >> employee[i].name;
        cout << "Enter Salary: ";
        cin >> employee[i].salary;
    }
    
    ofstream outFile("employees.txt");
    if (outFile.is_open()) {
        outFile << employee[0].id << ", " << employee[0].name << ", " << employee[0].salary << endl;
        outFile << employee[1].id << ", " << employee[1].name << ", " << employee[1].salary << endl;
        outFile << "Average salary : "<<avgSalary()<<endl;
        outFile.close();
    } else {
        cout << "Unable to open file.";
    }

    cout<<endl;
    searchEmployee();
    cout<<endl;

    cout<<"Reading data from file"<<endl;
    ifstream inFile("employees.txt");
    if (inFile.is_open()) {
        string line;
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    } else {
        cout << "Unable to open file.";
    }
    return 0;
}