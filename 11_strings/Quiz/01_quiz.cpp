// Question 1:
// Highlight the difference between cin and getline for string input using code?
#include<iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    cout<<"Enter your name (saving it using cin) : ";
    cin>>name;
    cout<<"Your full name is: "<<name<<endl;

    return 0;
}