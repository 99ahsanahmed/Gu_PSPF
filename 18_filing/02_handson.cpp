// Exercise 2: Read Data from a File
// Open student.txt created in Exercise 1.
// Read and display the contents line by line.

#include<iostream>
#include <fstream>
using namespace std;
int main()
{
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