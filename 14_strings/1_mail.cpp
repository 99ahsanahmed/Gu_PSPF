// sqrt(x) Returns the square root of x. sqrt(25) = 5
// pow(x,y) Raises x to the power y. pow(2,3) = 8
// abs(x) Returns the absolute value. abs(-5) = 5
// ceil(x) Rounds up to the nearest integer. ceil(3.1) = 4
// floor(x) Rounds down to the nearest integer. floor(3.9) = 3
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