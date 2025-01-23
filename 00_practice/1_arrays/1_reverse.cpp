// Easy
// Problem: Reverse an Array Write a function to reverse an array. You should not use any built-in reverse functions.
#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5},arrcpy[5]={1,2,3,4,5},n=4;
    for (int i = 0; i < 5; i++)
    {
        arr[i] = arrcpy[n];
        n--;
        cout<<arr[i]<<" ";
    }
    
    return 0;
}