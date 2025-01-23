// Exercise 4: Process File Data
// Write a program to calculate the average of numbers stored in a file numbers.txt.
// Example file content: 10 20 30 40 50.
// Read numbers, calculate the average, and display it.

#include<iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream outFile("numbers.txt");
    if (outFile.is_open()) {
        outFile << 10<< " "<< 20<< " "<< 45<< " "<< 76<< " "<< 89<<"\n";
        outFile << "average : " << (10 + 20 + 45 + 76 + 89)/5;
        outFile.close();
    } else {
        cout << "Unable to open file.";
    }

    ifstream inFile("numbers.txt");
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