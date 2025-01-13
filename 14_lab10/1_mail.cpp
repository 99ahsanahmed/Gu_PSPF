#include<iostream>
using namespace std;
int main()
{
    string mail;
    cout<<"Enter email";
    cin>>mail;
    if (mail.find("@") < mail.find(".")){
        cout << "Valid";
    }
    else {
        cout << "Invalid";
    }
    
    return 0;
}