// Task 4: Find and Replace
// Write a program that:
// 1. Opens a file and searches for a specific word.
// 2. Replaces the word with another word throughout the file.
// 3. Writes the modified content back to the same file.

#include<iostream>
#include <fstream>
using namespace std;

int main()
{
    string search_Word,replace;
    cout<<"Enter the word you want to search: ";
    cin>>search_Word;
    cout<<"Enter the word you want to replace: ";
    cin>>replace;

    ifstream inFile("search.txt");
    string line;
    if (inFile.is_open()) {
        while (getline(inFile, line)) {
            line = line.replace(line.find(search_Word), search_Word.length(), replace);
            cout << line << endl;
        }
        inFile.close();
    } else {
        cout << "Error opening file.\n";
    }



    
    return 0;
}