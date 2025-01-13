// 2.Write a program to find and replace a word in a string.
#include<iostream>
using namespace std;
int main()
{
    string str;
    string word;
    string replace;
    cout<<"Enter the string : ";
    getline(cin,str);
    cout<<"Enter the word to be replaced : ";
    cin>>word;
    cout<<"Enter the word to be replaced with : ";
    cin>>replace;
    cout<<str.replace(str.find(word),word.length(),replace);
    return 0;
}