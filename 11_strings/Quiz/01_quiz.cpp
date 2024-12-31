// Question 1:
// Highlight the difference between cin and getline for string input using code?
#include<iostream>
#include <string>
using namespace std;
int main()
{
    string name,name1;
    cout<<"Enter your name (saving it using cin) : ";
    cin>>name;
    cout<<"Your full name is: "<<name<<endl;

    cout<<"Enter your name : (saving it using getline)  ";
    getline(cin,name1);
    cout<<"Your full name is: "<<name1<<endl;
    cout<<"Conclusion : cin doesn't print anything after the first space.";
    return 0;
}