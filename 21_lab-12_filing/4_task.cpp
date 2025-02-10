#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string searchWord, replaceWord;
    cout << "Enter the word to search for: ";
    cin >> searchWord;
    cout << "Enter the word to replace it with: ";
    cin >> replaceWord;

    ifstream inFile("search.txt");
    if (!inFile) {
        cerr << "File could not be opened!" << endl;
        return 1;
    }

    string line;
    while (getline(inFile, line)) {
        int i = 0;
        while (i < line.length()) {

            int found = line.find(searchWord, i); 
            if (found < 0) break;  

            line.replace(found, searchWord.length(), replaceWord);
            i = found + replaceWord.length(); //Used ChatGPT for this  
        }
        cout << line << endl; 
    }

    inFile.close();
    return 0;
}
