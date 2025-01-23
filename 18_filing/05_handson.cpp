// Exercise 5: Storage and Retrieval
// Write a program to store and retrieve a to-do list from a file.

#include<iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file("todos.txt", ios::app);
    if (file.is_open()) {
        file << "Buy groceries\n eat lunch\nassignments \ntravel";
        file.close();
        cout << "Data appended to file.\n";
    } else {
        cout << "Error opening file.\n";
    }

    ifstream inFile("todos.txt");
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