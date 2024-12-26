#include<iostream>
using namespace std;
int main()
{
    int arr[10],sum_even=0,sum_odd=0;
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<10;i++)
    {
        if (arr[i]%2==0)
        {
            sum_even++;
        }
        else
        {
            sum_odd++;
        }
    }
    cout<<"Odd numbers:"<<sum_odd<<endl<<"Even numbers: "<<sum_even;
    return 0;
}