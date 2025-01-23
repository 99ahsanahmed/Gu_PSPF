// Exercise 1: Create and Write to a File
// Create a file student.txt.
// Write student details (name, roll number, grade).
// Ensure the file closes properly.

#include<iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream outFile("student.txt");
    if (outFile.is_open()) {
        outFile << "Name: Ahsan\nAge: 20\nGrade: A";
        outFile.close();
    } else {
        cout << "Unable to open file.";
    }


    return 0;
}