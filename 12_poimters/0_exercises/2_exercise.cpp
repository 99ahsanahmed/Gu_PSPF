// Exercise 2:
//  Write a program to reverse an array using pointers.
#include<iostream>
using namespace std;
int main()
{
    int n=4;
    int *num_arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter element "<<i<<" : ";
        cin>>num_arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<num_arr[n-i-1]<<endl;
    }
    return 0;
}