#include<iostream>
using namespace std;
int main()
{
    int arr1[3]={1,2,3};
    int arr2[3]={2,3,4};
    int sum_arr[3];
    for (int i = 0; i < 3; i++)
    {
        sum_arr[i]=arr1[i]+arr2[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cout<<sum_arr[i]<<",";
    }
    return 0;
}