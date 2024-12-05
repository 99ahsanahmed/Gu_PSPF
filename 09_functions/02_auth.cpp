#include<iostream>
using namespace std;
bool validate(string usr,string pass){
    string username="ahsan",password="ahsan123";
    if (usr==username && password==pass )
    {
        return true;
    }
    else{
        return false;
    }
}
string login(bool validate){
    if (validate)
    {
        return "Login successful";
    }
    else{
        return "Invalid Credentials";
    }
}
int main()
{
    string e_username,e_password;
    cout<<"enter username";
    cin>>e_username;
    cout<<"enter password";
    cin>>e_password;
    cout<<login(validate(e_username,e_password));
    return 0;
}