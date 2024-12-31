// 1. Write a program to count words in a sentence.

#include<iostream>
using namespace std;
int main()
{
    string address = "Karachi, Pakistan.";
    int spaces=0,words=0;
    for (int i = 0; i < address.length(); i++)
    {
        if (address[i] == ' ' || address[i] == ',' || address[i] == '.')
        {
            spaces++;
        }
        else{
            words++;
        }        
    }
    cout<<"Total number of spaces,commas and fullstops are: "<<spaces<<endl;
    cout<<"Total number of words are: "<<words<<endl;
    cout<<"length of string is: "<<address.length()<<endl;    
    return 0;
}