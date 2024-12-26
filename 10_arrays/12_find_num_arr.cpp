#include<iostream>
using namespace std;
int main()
{
    int arr[7];
    int num;
    cout<<"Enter 7 numbers : ";
    for(int i=0;i<7;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the number you want to find : ";
    cin>> num;
    for(int i=0;i<7;i++)
    {
        if(arr[i]==num)
        {
            cout<<"Number found at index "<<i;
        }
    }
    return 0;
}