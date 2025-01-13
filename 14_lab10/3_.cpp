#include<iostream>
using namespace std;
int main()
{
    string password = "Ahsan123456";
    // cout<<isupper(password[0]);
    int upper=0,lower=0,special=0;
    // cout<<islower(password[1]);
    for (int i = 0; i < password.length(); i++)
    {
        if ( isupper(password[i]) ){
            upper++;
        }
        else if(islower(password[i])){
            lower++;
        }
        else if(!isalnum(password[i])){
            special++;
        }
    }
    if (password.length() >=8 && upper>0 && lower>0 && special>0)
    {
        cout<<"Strong password";
    }
    else{
        cout<<"password is weak ";
    }
    return 0;
}