#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    cout<<"a destination using a variable : "<<&a<<endl; 
    int * ptra = &a;
    cout<<"a destination using ptra : "<<ptra<<endl;
    cout<<"a variable using *ptra : "<<*ptra<<endl; 
    *ptra = 20; 
    cout<<a;
    return 0;
}