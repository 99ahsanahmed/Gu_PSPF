// Question
// Write a C++ program that manages a file named employees.txt. The program should perform the following tasks using functions:
// Write Employee Data to File:


// The user should be able to input the name, ID, and salary of employees.
// Write the data to the file in the following format: Hint: you can use structures as well for bonus marks.
//  ID: 101, Name: John Doe, Salary: 50000
// ID: 102, Name: Alice Smith, Salary: 55000
// Read and Display Employee Data:
// Read the content of the file and display it on the console.
// Search for an Employee by ID:
// Allow the user to search for an employee by their ID.
// If found, display the employee details; otherwise, show a "Not Found" message.
// Calculate the Average Salary:
// Calculate and display the average salary of all employees.

// Requirements:
// Implement separate functions for each task (e.g., writing, reading, searching, calculating average salary).
// Use appropriate error handling (e.g., file not found).
// Follow modular programming principles.

// Evaluation Criteria (Marks)
// File handling and error checking: 3 Marks
// Correct implementation of functions: 4 Marks
// Proper data handling (search and average salary): 3 Mark

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

void EmployeeDetails(){
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
}

void employeeFiling(){
    ofstream outFile("employees.txt");
    if (outFile.is_open()) {
        for (int i = 0; i < 2; i++) {
            outFile << "ID: " << employee[i].id << ", Name: " << employee[i].name << ", Salary: " << employee[i].salary << endl;
        }
        outFile.close();
    } else {
        cout << "Unable to open file.";
    }
}

/*************  ✨ Codeium Command ⭐  *************/
/**
 * Reads and displays the content of the file "employees.txt".
 * If the file does not exist, displays an appropriate message.
 */
/******  6063ea8f-cc62-4195-8b4c-7ab1f7bdb1f8  *******/
void ReadEmployeeDetails(){
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
    
    EmployeeDetails();
    
    employeeFiling();

    cout<<endl;
    searchEmployee();
    cout<<endl;

    ReadEmployeeDetails();
    
    return 0;
}