#include<iostream>
using namespace std;
int main()
{
    string name1;
    cout<<"Enter your name : (saving it using getline)  ";
    getline(cin,name1);
    cout<<"Your full name is: "<<name1<<endl;
    return 0;
}