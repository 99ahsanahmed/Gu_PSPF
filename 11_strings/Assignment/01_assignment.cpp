// 1. Write a program to count words in a sentence.

#include<iostream>
using namespace std;
int main() {
    string sentence;
    cout << "Enter a sentence: ";
    int wordCount = 0;
    getline(cin, sentence);


    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            wordCount++;
        }
    }  
    cout << "Number of words in the sentence: " << wordCount + 1 << endl; 
    return 0;
}