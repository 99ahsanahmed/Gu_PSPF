// Exercise 1:
//  Write a program to swap two numbers using pointers.
#include<iostream>
using namespace std;
int main()
{
    int a=5,b=9;
    int *ptra = &a; 
    int *ptrb = &b;
    swap(*ptra,*ptrb);
    // swap(ptra,ptrb); Tried this but this was only swaping address
    cout<<a<<endl;
    cout<<b;
    return 0;
}