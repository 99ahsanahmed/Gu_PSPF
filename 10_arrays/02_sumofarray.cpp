#include<iostream>
using namespace std;
int main()
{
    int arr[3]={1,2,3};
    int sum=0;
    for (int i = 0; i < 3; i++)
    {
        sum = sum + arr[i];
    }
    cout<<sum;    
    return 0;
}