// Exercise 3: Append Data to a File
// Append new student details to student.txt.
// Display the updated file contents.

#include<iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file("student.txt", ios::app);
    if (file.is_open()) {
        file << "\nSubject: Mathematics";
        file.close();
        cout << "Data appended to file.\n";
    } else {
        cout << "Error opening file.\n";
    }

    ifstream inFile("student.txt");
    string line;
    if (inFile.is_open()) {
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    } else {
        cout << "Error opening file.\n";
    }
    return 0;
}