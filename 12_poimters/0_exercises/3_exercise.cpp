// Exercise 3:
//  Write a program to dynamically allocate memory for an array, take input, and calculate the sum of its elements.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int *arr = new int[n];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cout<<"Enter element "<<i<<": ";
        cin>>arr[i];
        sum += arr[i];
    }
    cout<<sum;
    return 0;
}