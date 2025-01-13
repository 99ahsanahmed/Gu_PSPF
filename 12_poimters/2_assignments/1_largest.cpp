// 1_Write a program to find the largest element in an array using pointers.
#include<iostream>
using namespace std;
int main()
{
    int *arr = new int[5];
    int max = 0;
    for (int i = 0; i < 5; i++)
    {
        cout<<"enter array "<<i<<" element : ";
        cin>>arr[i];
    }
    
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<"Largest number is : "<<max;
    return 0;
}