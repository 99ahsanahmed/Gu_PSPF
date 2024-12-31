// Hands on exercise - 1
// Q : Write a program to reverse a given string using std::string.

#include<iostream>
using namespace std;
int main()
{
    string naam = "Ahsan Ahmed Siddiqui";
    string rev = "";
    for (int i = naam.length() - 1; i >= 0; i--)
    {
        rev = rev + naam[i];
    }
    cout << rev;    
    return 0;
}